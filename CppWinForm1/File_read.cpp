#include "File_read.h"


//Counting the number for setting up the dynamic memory later on 
int _GetNumberOfLines(std::string fileName)
{
	int counter = 0;
	std::string temp;
	std::ifstream file(fileName);
	if (file.is_open())
	{
		while (getline(file, temp))
			counter++;
		file.close();
	}
	else
	{
		std::cout << "error failed to open File" << std::endl;
		return NULL;
	}
	return counter;
}

//Reads the data in to a dynamic array
void _ReadFileData(std::string *&File_data, std::string _fileName, unsigned int data_count)
{
	int counter = 0;
	std::string temp;
	std::ifstream file(_fileName);
	if (file.is_open())
	{
		while (getline(file, File_data[counter]))
			counter++;
		file.close();
	}
	else 
		std::cout << "error while open File" << std::endl;
}