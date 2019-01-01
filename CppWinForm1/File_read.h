#pragma once
#include <string>
#include <iostream>
#include <fstream>


int _GetNumberOfLines(std::string fileName);
void _ReadFileData(std::string *&File_data, std::string _fileName, unsigned int data_count);