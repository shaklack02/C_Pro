#include <Windows.h>
#include "process.h"
#include "patternscan.h"std::string
//#include <stdlib.h> //for using function sleep
#include "Generate_X.h"
#include "String_To_HEX.h"


//constexpr auto NumberOfBytesToReadWrite = 16;



#ifndef iostream_h
#define iostream_h
#include <iostream>

#endif



int main()
{



std::string str_data = Generate_Signature(); // 80 7D FC 00 74 07 8B 4D F8 83 61 70 FD
										// \x80\x7D\xFC\x00\x74\x07\x8B\x4D\xF8\x83\x61

//char *patern_n = const_cast<char*>( Check_data.c_str());

std::string Data_sigX = Generate_XSig(str_data);
	
//char *SigX_n = const_cast<char*>(Data_sigX.c_str());
unsigned int char_size = Ret_Bytes_number(str_data, str_data.size());

char *Hex_sig_data = new char[char_size];
char *Hex_x_data = new char[char_size+1];



Convert_StringToHexver0(str_data, str_data.size(), Hex_sig_data,char_size); //\x80\x7D\xFC\x00\x74\x07\x8B\x4D\xF8\x83\x61
Convert_Sig_toX(str_data, str_data.size(), Hex_x_data, char_size);

//Get Process ID by enumerating the processes using tlhelp32snapshot
	DWORD processID = GetProcID(L"ForgedAlliance.exe");
	//Get handle by OpenProcess
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, processID);
	//PatternScan



		void * healthDecAddress = PatternScanExModule(hProcess, L"ForgedAlliance.exe", L"ForgedAlliance.exe", Hex_sig_data, Hex_x_data);
		if (healthDecAddress != nullptr)
		{
	
			Sleep(100);
		}
		else
		{
			Sleep(100);
		}

		
	delete[] Hex_sig_data;

		getchar();
	return  0;
}
