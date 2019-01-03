#include "Form1.h"
#include <Windows.h>
#include "process.h"
#include "patternscan.h"
#include <stdlib.h> //for using function sleep
#include "String_To_HEX.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	

	CppWinForm1::Form1 form;
	Application::Run(%form);
}
