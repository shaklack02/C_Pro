#include "patternscan.h"

#ifndef iostream_h
#define iostream_h
#include <iostream>

#endif

//Internal Pattern Scan
void * Patern_Scan::PatternScan(char* base, size_t size, char* pattern, char* mask)
{
	size_t patternLength = strlen(mask);

	for (unsigned int i = 0; i < size - patternLength; i++)
	{
		bool found = true;
		for (unsigned int j = 0; j < patternLength; j++)
		{
			if (mask[j] != '?' && pattern[j] != *(base + i + j))
			{
				found = false;
				break;
			}
		}
		if (found)
		{
			return (void*)(base + i);
		}
	}
	
	return nullptr;
}

//External Wrapper
void * Patern_Scan::PatternScanEx(HANDLE hProcess, uintptr_t begin, uintptr_t end, char* pattern, char*  mask)
{

	uintptr_t currentChunk = begin;
	SIZE_T bytesRead;

	while (currentChunk < end)
	{
		char buffer[4096];

		DWORD oldprotect;
		VirtualProtectEx(hProcess, (void*)currentChunk, sizeof(buffer), PAGE_EXECUTE_READWRITE, &oldprotect);
		ReadProcessMemory(hProcess, (void*)currentChunk, &buffer, sizeof(buffer), &bytesRead);
		VirtualProtectEx(hProcess, (void*)currentChunk, sizeof(buffer), oldprotect, &oldprotect);

		if (bytesRead == 0)
		{
			return nullptr;
		}

		void* internalAddress = Patern_Scan::PatternScan((char*)&buffer, bytesRead, pattern, mask);

		if (internalAddress != nullptr)
		{
			//calculate from internal to external
			uintptr_t offsetFromBuffer = (uintptr_t)internalAddress - (uintptr_t)&buffer;
			return (void*)(currentChunk + offsetFromBuffer);
		}
		else
		{
			//advance to next chunk
			currentChunk = currentChunk + bytesRead;
			
		}
	}
	return nullptr;
}

//Module wrapper for external pattern scan
void * Patern_Scan::PatternScanExModule(HANDLE hProcess, wchar_t * exeName, wchar_t* module, char* pattern, char* mask)
{
	
		
	DWORD processID = GetProcID(exeName);
	MODULEENTRY32 modEntry = GetModule(processID, module);

	if (!modEntry.th32ModuleID)
	{
		
		return nullptr;
	}
	
	uintptr_t begin = (uintptr_t)modEntry.modBaseAddr;
	uintptr_t end = begin + modEntry.modBaseSize;
	return Patern_Scan::PatternScanEx(hProcess, begin, end, pattern, mask);
}


//just for debug
void Patern_Scan::Memory_base_address(HANDLE hProcess, wchar_t * exeName, wchar_t* module)
{
	//p("calling GetProcID again from exModule")

	Patern_Scan::processID = GetProcID(exeName);
	Patern_Scan::modEntry = GetModule(Patern_Scan::processID, module);

	if (!Patern_Scan::modEntry.th32ModuleID)
	{
		
	}
	//p("going to the patern checking function")
	Patern_Scan::begin = (uintptr_t)modEntry.modBaseAddr;
	Patern_Scan::end = begin + modEntry.modBaseSize;
}


