#include "memhack.h"
#include "ReadingWritingData.h"
#include <iomanip>
#include <stdlib.h> //for using function sleep

#ifndef iostream_h
#define iostream_h
#include <iostream>


#endif


PatchDATA MEMORYPATCH;

//internal patch
void Patch(void* dst, void* src, unsigned int size)
{
	DWORD oldprotect;
	VirtualProtect(dst, size, PAGE_EXECUTE_READWRITE, &oldprotect);
	memcpy(dst, src, size);
	VirtualProtect(dst, size, oldprotect, &oldprotect);
}

//external
void PatchEx(HANDLE hProcess, void* dst, void* src, unsigned int size)
{
	DWORD oldprotect;
	VirtualProtectEx(hProcess, dst, size, PAGE_EXECUTE_READWRITE, &oldprotect);
	WriteProcessMemory(hProcess, dst, src, size, NULL);
	VirtualProtectEx(hProcess, dst, size, oldprotect, &oldprotect);
}

//Internal Nop
void Nop(HANDLE hProcess, void* dst, unsigned int size)
{
	DWORD oldprotect;
	VirtualProtect(dst, size, PAGE_EXECUTE_READWRITE, &oldprotect);
	memset(dst, 0x90, size);
	VirtualProtect(dst, size, oldprotect, &oldprotect);

}

//External
void NopEx(HANDLE hProcess, void* dst, unsigned int size, unsigned int key, byte DataTowrite[][16], void * test[])
{
	DWORD oldprotect;
	DWORD oldprotect2;
	byte ary[3] = { 0 };
	byte OrginData[16] = { 0 };
	for (unsigned int i = 0; i < 3; i++)
	 	ary[i] = MEMORYPATCH.MPatchedData[key][i];

			if (0<=key && key<=7)
			{
				
				VirtualProtectEx(hProcess, dst, 3, PAGE_EXECUTE_READWRITE, &oldprotect);
				WriteProcessMemory(hProcess, dst, ary, 3, NULL);
				VirtualProtectEx(hProcess, dst, 3, oldprotect, &oldprotect);
			
			}
			else
			{
				for (int c = 0; c < 4; c++)
				{
					for (int j = 0; j < 16; j++)
						OrginData[j] = DataTowrite[c][j];
					VirtualProtectEx(hProcess, test[c], 16, PAGE_EXECUTE_READWRITE, &oldprotect2);
					WriteProcessMemory(hProcess, test[c], OrginData, 16, NULL);
					VirtualProtectEx(hProcess, test[c], 16, oldprotect2, &oldprotect2);
								
				}
			}
				
}						