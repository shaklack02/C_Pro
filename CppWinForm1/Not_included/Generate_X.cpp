#include "String_To_HEX.h"

namespace String_hex
{
	class Sig_generator
	{
	// Generating "\x33\xc0\x89\x47..." from input Data: "89 47 0C 89 47 10 89..."
	std::string Generate_Signature(std::string user_str)
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

	//Generats std::string "xxxx??xxx..." from "\x33\xc0\x89\x47..." Input: "\x33\xc0\x89\x47..."
	std::string Generate_XSig(std::string Str_Sign)
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

	};
}