#include "String_To_HEX.h"


	

	// Convrt string \x33\xc0.. to hex. Better use with Convert_StringToHexver0() 
	//(Mybytel) string (First) first Char (secand) secand Char Out put is the hex byte use with Convert_StringToHexver0()
	char String_hex::Convert_Hex(std::string  &myBytel, unsigned int first, unsigned int secand)
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
	void String_hex::Convert_StringToHexver0(std::string &str_in, unsigned int str_size, char *&data, unsigned int size_of_Data)
	{
		unsigned int j = 0;
		for (unsigned int i = 0; i < str_size; i++)
		{
			if (str_in[i] == '\\' && str_in[i + 1] == 'x')
			{

				data[j] = String_hex::Convert_Hex(str_in, i + 2, i + 3); //\x33\xc0\x89\x47\x00
				j++;
			}
		}
		data[size_of_Data - 1] = '\0'; // adding null terminator to the array
	}

	//count the numbe of bytes in a string "\x33\xc0..."
	unsigned int String_hex::Ret_Bytes_number(std::string MyString, unsigned int String_size) {
		unsigned int num = 0;
		for (unsigned int i = 0; i < String_size; i++)
			if (MyString[i] == '\\' && MyString[i + 1] == 'x')
				num++;
		return num;
	}

	// Generating "\x33\xc0\x89\x47..." from input Data: "89 47 0C 89 47 10 89..."
	std::string String_hex::Generate_Signature(std::string user_str)
	{


		std::string str = user_str;
		std::string str2 = user_str;
		std::string sig;
		unsigned int n = 0;

		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] == ' ')
			{
				i++;
				str.insert(i, "\\x");
			}
		}
		//adding 0x to the code
		for (int i = 0; i < str.length(); ++i)
		{
			if (str2[i] == ' ')
			{
				i++;
				str2.insert(i, "0x");
			}
		}


		//removing the space from the code
		for (unsigned int i = 0; i < str.length(); ++i)
		{
			if (str[i] != ' ')
				str[n++] = str[i];
		}
		str.resize(n);
		str.insert(0, "\\x");

		return str; //return the signature
	}


	//Converting \x33\xc0... to "xxxx??xxx..." saving data in "char " data = new char" 
	void String_hex::Convert_Sig_toX(std::string &str_in, unsigned int str_size, char *&data, unsigned int size_of_Data)
	{


		unsigned int j = 0;
		for (unsigned int i = 0; i < str_size; i++)
		{

			if (str_in[i] == '\\' && str_in[i + 1] == 'x')
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
	
	//Generats std::string "xxxx??xxx..." from "\x33\xc0\x89\x47..." Input: "\x33\xc0\x89\x47..."
	std::string String_hex::Generate_XSig(std::string Str_Sign)
	{
		unsigned int _size = 0;
		std::string str;
		for (unsigned i = 0; i < Str_Sign.length(); i++)
		{
			if (Str_Sign[i] == 'x')
			{
				if (Str_Sign[i + 1] == '0' && Str_Sign[i + 2] == '0')
				{
					str = str + "?";
					_size++;
				}
				else
				{
					str = str + "x";
					_size++;
				}
			}

		}
		str.resize(_size);
		return str;
	}



	//converting the System string to std string 
	std::string String_hex::Sys_tostring(System::String^ str)
	{
		std::string unmanaged = msclr::interop::marshal_as<std::string>(str); 

		return unmanaged;
		
	}

	//converting void data to string 
	System::String^ String_hex::_voidToString(void * data)
	{
		std::stringstream ssdata;
		ssdata << data;
		System::String^ MyString = msclr::interop::marshal_as<System::String^>(ssdata.str());;
		return  MyString;
	}
	
