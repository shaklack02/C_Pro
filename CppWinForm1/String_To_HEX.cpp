#include "String_To_HEX.h"

namespace Data_processing {

	class String_hex{

	// Convrt string \x33\xc0.. to hex. Better use with Convert_StringToHexver0() 
	//(Mybytel) string (First) first Char (secand) secand Char Out put is the hex byte use with Convert_StringToHexver0()
	char Convert_Hex(std::string  &myBytel, unsigned int first, unsigned int secand)
	{
		char temp1 = myBytel[first];
		char temp2 = myBytel[secand];
		char Hex_c;
		if ('0' <= temp1 && temp1 <= 'f' && '0' <= temp2 && temp1 <= 'f')
		{
			if (temp1 >= 0x41 | temp1 >= 0x61)
				temp1 += 0x09;

			if (temp2 >= 0x41 | temp1 >= 0x61)
				temp2 += 0x09;

			temp1 = temp1 << 4;     //\x33\xc0\x89\x47\x00
			temp2 = temp2 & 0x0f;
			Hex_c = temp1 | temp2;
			return Hex_c;
		}
		else
			return NULL;
	}

	// Convrting string to hex needs Saving the Data in "char *data = new Char"
	void Convert_StringToHexver0(std::string &str_in, unsigned int str_size, char *&data, unsigned int size_of_Data)
	{
		unsigned int j = 0;
		for (unsigned int i = 0; i < str_size; i++)
		{
			if (str_in[i] == '\\' && str_in[i + 1] == 'x')
			{

				data[j] = Convert_Hex(str_in, i + 2, i + 3); //\x33\xc0\x89\x47\x00
				j++;
			}
		}
		data[size_of_Data - 1] = '\0'; // adding null terminator to the array
	}

	//count the numbe of bytes in a string "\x33\xc0..."
	unsigned int Ret_Bytes_number(std::string MyString, unsigned int String_size) {
		unsigned int num = 0;
		for (unsigned int i = 0; i < String_size; i++)
			if (MyString[i] == '\\' && MyString[i + 1] == 'x')
				num++;
		return num;
	}

	//Converting \x33\xc0... to "xxxx??xxx..." saving data in "char " data = new char" 
	void Convert_Sig_toX(std::string &str_in, unsigned int str_size, char *&data, unsigned int size_of_Data)
	{


		unsigned int j = 0;
		for (unsigned int i = 0; i < str_size; i++)
		{

			if (str_in[i] == '\\' & str_in[i + 1] == 'x')
			{

				if (str_in[i + 2] == 0x30 && str_in[i + 3] == 0x30)
				{
					data[j] = 0x3f;
				}
				else
				{
					data[j] = 0x78;
				}
				j++;
			}
		}
		data[size_of_Data - 1] = '\0'; // Putting null terminator to the array
	}

	std::string Sys_tostring(System::String str)
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(str); //converting the System string to std string 

		return unmanaged;
		
	}

	System::String^ _voidToString(void * data)
	{
		std::stringstream ssdata;
		ssdata << data;
		System::String^ MyString = marshal_as<System::String^>(ssdata.str());;
		return  MyString;
	}
   };
}