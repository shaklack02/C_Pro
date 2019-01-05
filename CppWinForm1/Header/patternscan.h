#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include "processtools.h"


class Patern_Scan
{
public:
	DWORD processID;
	MODULEENTRY32 modEntry;
	uintptr_t begin;
	uintptr_t end;


	//Internal Pattern Scan
	void * PatternScan(char* base, size_t size, char* pattern, char*mask);

	//External Wrapper
	void * PatternScanEx(HANDLE hPRocess, uintptr_t begin, uintptr_t end, char* pattern, char*  mask);

	//Module wrapper for external pattern scan
	void * PatternScanExModule(HANDLE hProcess, wchar_t * exeName, wchar_t* module, char* pattern, char* mask);

	void Memory_base_address(HANDLE hProcess, wchar_t * exeName, wchar_t* module);
};





