#include "ReadingWritingData.h"
#include <iostream>
#include <string>

using namespace std;

void PrintCheatOptions() {
	PatchDATA patch;
	cout << endl;
	cout << "--------------------CHEAT OPTIONS-------------------" << endl;
	cout <<  endl;
	for(unsigned int i = 0; i < 9; i++ )
	cout << "CHOOSE NUMBER "<<i<<" FOR " << patch.Options[i] << endl;
	cout << endl;
	cout << endl;
}

int Checking_The_key(unsigned int key)
{
	if (0 <= key && key <= 1)
		return 0;
	else if (2 <= key && key <= 3)
		return 1;
	else if (4 <= key && key <= 5)
		return 2;
	else if (6 <= key && key <= 7)
		return 3;
	else
		return 0;
}




void ReadMemoryData(HANDLE hProcess, void * healthDecAddress,unsigned int Raw , unsigned int NumberOfBytes, byte MData[][16])
{
	DWORD oldprotect;
	SIZE_T bytesRead;
	byte  * MDataIX = new byte[NumberOfBytes];

	VirtualProtectEx(hProcess, healthDecAddress, NumberOfBytes, PAGE_EXECUTE_READWRITE, &oldprotect);
	ReadProcessMemory(hProcess, healthDecAddress, MDataIX, NumberOfBytes, &bytesRead);
	VirtualProtectEx(hProcess, healthDecAddress, NumberOfBytes, oldprotect, &oldprotect);

	for (unsigned int i = 0; i < NumberOfBytes; i++) //coping Data
		MData[Raw][i] = MDataIX[i];

	delete[] MDataIX;
}
