#pragma once	 
#include <Windows.h>
#include "../Header/Include_h.h"





//using namespace msclr::interop;
namespace CppWinForm1 {


	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		bool win_size_check;
		Form1(void)
		{

			InitializeComponent();
			//

			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label4;



	private:
			/// <summary>
		/// Required designer variable.
		/// </summary>

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->maskedTextBox1->Location = System::Drawing::Point(172, 29);
			this->maskedTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBox1->MaximumSize = System::Drawing::Size(376, 30);
			this->maskedTextBox1->MinimumSize = System::Drawing::Size(301, 10);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(376, 26);
			this->maskedTextBox1->TabIndex = 1;
			this->maskedTextBox1->Text = L"80 7D FC 00 74 07 8B 4D F8 83 61 70 FD";
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Form1::maskedTextBox1_MaskInputRejected);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->richTextBox1->Location = System::Drawing::Point(172, 96);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(376, 438);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(9, 25);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Find Memory Hex";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(9, 72);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Read Hex From File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(169, 72);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->MaximumSize = System::Drawing::Size(150, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Console";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(169, 6);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->MaximumSize = System::Drawing::Size(375, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 21);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Hex To Find In Memory";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(9, 505);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 28);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(9, 140);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 32);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Clear Console";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ControlText;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->ForeColor = System::Drawing::Color::Red;
			this->richTextBox2->Location = System::Drawing::Point(9, 344);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(144, 143);
			this->richTextBox2->TabIndex = 10;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 311);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 18);
			this->label1->TabIndex = 11;
			this->label1->Text = L"LOGER";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(9, 254);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaximumSize = System::Drawing::Size(144, 40);
			this->textBox1->MinimumSize = System::Drawing::Size(4, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 20);
			this->textBox1->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(9, 191);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 27);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Write To Memory";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::WindowText;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->ForeColor = System::Drawing::Color::Lime;
			this->richTextBox3->Location = System::Drawing::Point(560, 60);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(285, 477);
			this->richTextBox3->TabIndex = 14;
			this->richTextBox3->Text = L"";
			this->richTextBox3->WordWrap = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(760, 25);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 27);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Close";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(570, 34);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"label4";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(856, 548);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->maskedTextBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		//def
#define dbglog(name) richTextBox2->Text += "DBG:"+ name + Environment::NewLine;
#define p(name_1) richTextBox1->Text +=  name_1 + Environment::NewLine;
#define nl richTextBox1->Text +=  Environment::NewLine;
#define _PrintText(name0,name1) richTextBox1->Text +=  ("<Loger> " + name0 + " " + name1 + Environment::NewLine);
#define _loger(n_name1,name2) richTextBox3->Text += ("<Loger> " + n_name1 + " " + name2 + Environment::NewLine);
#define loger(name_2) richTextBox1->Text += name_2 + Environment::NewLine;
		
	    wchar_t * Process_name = L"ForgedAlliance.exe";


//#define DEBUG_MBOX //turn on off the message box

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//System::String^ const str1 = gcnew System::String(Process_name); //Converting White char to System String

		_loger("Process ", gcnew System::String(Process_name))

		String_hex Data_Pro;
		Patern_Scan P_S;

		String ^ str_data = maskedTextBox1->Text;
		std::string unmanaged = Data_Pro.Sys_tostring(str_data);//converting the System string to std string 
		richTextBox1->Text += str_data + Environment::NewLine;
		
	

		std::string te = unmanaged;
		//std::string te;
		te = Data_Pro.Generate_Signature(te); 
		String^ s;
		s = msclr::interop::marshal_as<String^>(te);

			richTextBox1->Text += Environment::NewLine;

		unsigned int char_size = Data_Pro.Ret_Bytes_number(te, te.size());
		char *Hex_sig_data = new char[char_size];
		char *Hex_x_data = new char[char_size + 1];

		try {
			Data_Pro.Convert_StringToHexver0(te, te.size(), Hex_sig_data, char_size); //\x80\x7D\xFC\x00\x74\x07\x8B\x4D\xF8\x83\x61
			Data_Pro.Convert_Sig_toX(te, te.size(), Hex_x_data, char_size);

		}
		catch (Exception())
		{
			p("CONVERTONG ERROR")
		}

		try {
			//Get Process ID by enumerating the processes using tlhelp32snapshot
			DWORD processID = GetProcID(Process_name);
			//Get handle by OpenProcess
			HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, processID);
			//PatternScan

	//debug---------------------------------------------------------------------------------------------------------------------------------
			P_S.Memory_base_address(hProcess, Process_name, Process_name);

			//TODO fix the printing of the base address
			void* start_base_address = (void*)P_S.begin;
			void* end_base_address = (void*)P_S.end;

			#ifdef DEBUG_MBOX MessageBox::Show(Data_Pro._voidToString((void*)P_S.begin), " Notification", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
				#endif // DEBUG

			_loger("begin ", Data_Pro._voidToString((void*)P_S.begin)) // Show the base address of the Process
			_loger("end ", Data_Pro._voidToString((void*)P_S.end)) // Show the end address of the Process

				loger("Stop")

				std::getchar();
	//---------------------------------------------------------------------------------------------------------------------------------------
			void * healthDecAddress = P_S.PatternScanExModule(hProcess, Process_name, Process_name, Hex_sig_data, Hex_x_data);
			if (healthDecAddress != nullptr)
			{
				 healthDecAddress;
				_PrintText("Found The Address", Data_Pro._voidToString(healthDecAddress))
				Sleep(100);
			}
			else
			{
				String^ s;
				s = msclr::interop::marshal_as<String^>("NOT FOUND");
				richTextBox1->Text += s + Environment::NewLine;
				Sleep(100);
			}
		}
		catch (...)
		{
			std::exception_ptr p = std::current_exception();
			std::clog << p._Current_exception << std::endl;
		}
			delete[] Hex_sig_data;
			delete[] Hex_x_data;
	}

 //read from file
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			String_hex Data_Pro;
			Patern_Scan P_S;

			loger("------------------------------------------")
				
				loger("READING FROM FILE:")
				//process name
				

			//Get Process ID by enumerating the processes using tlhelp32snapshot
			DWORD processID = GetProcID(Process_name);
			if ((processID == NULL))
			{
				p("Process Not Found Exiting The Program");
			}
			//Get handle by OpenProcess
			HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, processID);

			//PatternScan
			std::string _fileName = "Memorylist.txt";
			unsigned int _LineNumber = _GetNumberOfLines(_fileName);
			if ((_LineNumber == NULL))
			{
				p("0 Lines File is empty");
					#ifdef DEBUG_MBOX MessageBox::Show("The operation has been completed ", "Notification", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
						#endif
			}
			else
			{

				std::string* str_data = new std::string[_LineNumber];
				std::string* Data_sigX = new  std::string[_LineNumber];
				

				unsigned int* char_size = new unsigned int[_LineNumber];
				_ReadFileData(str_data, _fileName, _LineNumber);



				for (unsigned int i = 0;i < _LineNumber;i++)
					str_data[i] = Data_Pro.Generate_Signature(str_data[i]); // 80 7D FC 00 74 07 8B 4D F8 83 61 70 FD
																   // \x80\x7D\xFC\x00\x74\x07\x8B\x4D\xF8\x83\x61

																   //char *patern_n = const_cast<char*>( Check_data.c_str());
				for (unsigned int i = 0;i < _LineNumber;i++) {
					Data_sigX[i] = Data_Pro.Generate_XSig(str_data[i]);
				}

				//char *SigX_n = const_cast<char*>(Data_sigX.c_str());
				for (unsigned int i = 0;i < _LineNumber;i++) {
					char_size[i] = Data_Pro.Ret_Bytes_number(str_data[i], str_data[i].size());

				}
				loger("DONE")


					//void * healthDecAddr[2];

					for (unsigned int i = 0;i < _LineNumber;i++) {
						char *Hex_sig_data = new char[char_size[i]];
						char *Hex_x_data = new char[char_size[i]];
						
						Data_Pro.Convert_StringToHexver0(str_data[i], str_data[i].size(), Hex_sig_data, char_size[i]); //\x80\x7D\xFC\x00\x74\x07\x8B\x4D\xF8\x83\x61
						Data_Pro.Convert_Sig_toX(str_data[i], str_data[i].size(), Hex_x_data, char_size[i]);


						void * healthDecAddress = P_S.PatternScanExModule(hProcess, Process_name, Process_name, Hex_sig_data, Hex_x_data);
						if (healthDecAddress != nullptr)
						{
							nl
							_PrintText("Address Found:", Data_Pro._voidToString(healthDecAddress))

								Sleep(100);
						}
						else
						{
							_PrintText("Address no found/error ", Data_Pro._voidToString(healthDecAddress))
								Sleep(100);
						}


						delete[] Hex_sig_data;
						delete[] Hex_x_data;
					}
				delete[] str_data;
				delete[] Data_sigX; 
				delete[] char_size;

				nl
					dbglog("Delete complit")
			}
		}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Text = "";
	//	richTextBox2->Text = "S: " + _voidToString(_testm1);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		Application::Exit();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
	{ //Write to memory
		if (win_size_check){
			Form1::Width += 290;
			this->richTextBox3->Show();
			this->button6->Show();
			win_size_check = false;
		}
	}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	
	Form1::Width = 580;
	Form1::Height = 590;
	this->richTextBox3->Hide();
	this->button6->Hide();
	win_size_check = true;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!win_size_check) {
		Form1::Width -= 290;
		richTextBox3->Clear();
		this->richTextBox3->Hide();
		this->button6->Hide();
		win_size_check = true;
	}
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
};
	}




