#pragma once
#include <string>
#include <iostream>
#include <bitset>
#include <Windows.h>
#include <sstream>


namespace Data_processing
{
	class String_hex
	{
		std::string Sys_tostring(System::String str);
		System::String^ _voidToString(void * data);
		void Convert_Sig_toX(std::string &str_in, unsigned int str_size, char *&data, unsigned int size_of_Data);
		char Convert_Hex(std::string  &myBytel, unsigned int first, unsigned int secand);
		void Convert_StringToHexver0(std::string &str_in, unsigned int str_size, char *&data, unsigned int size_of_Data);
		unsigned int Ret_Bytes_number(std::string MyString, unsigned int String_size);
	};
	
	class Sig_generator
	{
		//Generate the X
		std::string Generate_Signature(std::string user_str);
		//Generate the Sig
		std::string Generate_XSig(std::string Sign);
	};
}