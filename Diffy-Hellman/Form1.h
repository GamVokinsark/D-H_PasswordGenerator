#pragma once

char *convert(System::String^ string) 
{
	return (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(string);
}

namespace DiffyHellman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  run1;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  In1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  error1;
	private: System::Windows::Forms::Label^  error2;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  In2;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  Out2;


	private: System::Windows::Forms::TextBox^  Out3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  TxG;
	private: System::Windows::Forms::TextBox^  TxN;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  TxXa;
	private: System::Windows::Forms::TextBox^  TxYa;
	private: System::Windows::Forms::TextBox^  TxKa;
	private: System::Windows::Forms::TextBox^  TxKb;


	private: System::Windows::Forms::TextBox^  TxYb;

	private: System::Windows::Forms::TextBox^  TxXb;
	private: System::Windows::Forms::CheckBox^  Au;
	private: System::Windows::Forms::Button^  clean;
	private: System::Windows::Forms::Label^  Out1;
	private: System::Windows::Forms::Label^  label4;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->run1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->In1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->error1 = (gcnew System::Windows::Forms::Label());
			this->error2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->In2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Out2 = (gcnew System::Windows::Forms::Label());
			this->Out3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TxG = (gcnew System::Windows::Forms::TextBox());
			this->TxN = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->TxXa = (gcnew System::Windows::Forms::TextBox());
			this->TxYa = (gcnew System::Windows::Forms::TextBox());
			this->TxKa = (gcnew System::Windows::Forms::TextBox());
			this->TxKb = (gcnew System::Windows::Forms::TextBox());
			this->TxYb = (gcnew System::Windows::Forms::TextBox());
			this->TxXb = (gcnew System::Windows::Forms::TextBox());
			this->Au = (gcnew System::Windows::Forms::CheckBox());
			this->clean = (gcnew System::Windows::Forms::Button());
			this->Out1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// run1
			// 
			this->run1->Location = System::Drawing::Point(15, 102);
			this->run1->Name = L"run1";
			this->run1->Size = System::Drawing::Size(101, 23);
			this->run1->TabIndex = 0;
			this->run1->Text = L"Сгенерировать";
			this->run1->UseVisualStyleBackColor = true;
			this->run1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Входные данные:";
			// 
			// In1
			// 
			this->In1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->In1->Location = System::Drawing::Point(153, 24);
			this->In1->MaxLength = 3;
			this->In1->Name = L"In1";
			this->In1->Size = System::Drawing::Size(42, 24);
			this->In1->TabIndex = 2;
			this->In1->Text = L"60";
			this->In1->WordWrap = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label2->Location = System::Drawing::Point(12, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"k (количество бит):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label3->Location = System::Drawing::Point(243, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 18);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Рабина-Миллера тест:";
			// 
			// error1
			// 
			this->error1->AutoSize = true;
			this->error1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->error1->ForeColor = System::Drawing::Color::DarkRed;
			this->error1->Location = System::Drawing::Point(12, 45);
			this->error1->Name = L"error1";
			this->error1->Size = System::Drawing::Size(173, 18);
			this->error1->TabIndex = 1;
			this->error1->Text = L"k должна быть числом!";
			this->error1->Visible = false;
			// 
			// error2
			// 
			this->error2->AutoSize = true;
			this->error2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->error2->ForeColor = System::Drawing::Color::DarkRed;
			this->error2->Location = System::Drawing::Point(12, 81);
			this->error2->Name = L"error2";
			this->error2->Size = System::Drawing::Size(169, 18);
			this->error2->TabIndex = 1;
			this->error2->Text = L"t должна быть числом!";
			this->error2->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label6->Location = System::Drawing::Point(12, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 18);
			this->label6->TabIndex = 1;
			this->label6->Text = L"t (итерации):";
			// 
			// In2
			// 
			this->In2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->In2->Location = System::Drawing::Point(105, 60);
			this->In2->MaxLength = 3;
			this->In2->Name = L"In2";
			this->In2->Size = System::Drawing::Size(33, 24);
			this->In2->TabIndex = 2;
			this->In2->Text = L"5";
			this->In2->WordWrap = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label5->Location = System::Drawing::Point(243, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Итераций:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label7->Location = System::Drawing::Point(243, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 18);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Число:";
			// 
			// Out2
			// 
			this->Out2->AutoSize = true;
			this->Out2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Out2->Location = System::Drawing::Point(324, 45);
			this->Out2->Name = L"Out2";
			this->Out2->Size = System::Drawing::Size(13, 18);
			this->Out2->TabIndex = 1;
			this->Out2->Text = L"-";
			// 
			// Out3
			// 
			this->Out3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Out3->Location = System::Drawing::Point(305, 63);
			this->Out3->MaxLength = 3;
			this->Out3->Multiline = true;
			this->Out3->Name = L"Out3";
			this->Out3->ReadOnly = true;
			this->Out3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Out3->Size = System::Drawing::Size(177, 70);
			this->Out3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(214, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label8->Location = System::Drawing::Point(114, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(209, 18);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Алгоритм Диффи-Хеллмана";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label9->Location = System::Drawing::Point(12, 170);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 18);
			this->label9->TabIndex = 1;
			this->label9->Text = L"g:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label10->Location = System::Drawing::Point(253, 170);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 18);
			this->label10->TabIndex = 1;
			this->label10->Text = L"n:";
			// 
			// TxG
			// 
			this->TxG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxG->Location = System::Drawing::Point(38, 171);
			this->TxG->Name = L"TxG";
			this->TxG->ReadOnly = true;
			this->TxG->Size = System::Drawing::Size(209, 24);
			this->TxG->TabIndex = 4;
			// 
			// TxN
			// 
			this->TxN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxN->Location = System::Drawing::Point(279, 171);
			this->TxN->Name = L"TxN";
			this->TxN->ReadOnly = true;
			this->TxN->Size = System::Drawing::Size(209, 24);
			this->TxN->TabIndex = 4;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label11->Location = System::Drawing::Point(122, 200);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 24);
			this->label11->TabIndex = 1;
			this->label11->Text = L"A";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label12->Location = System::Drawing::Point(375, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 24);
			this->label12->TabIndex = 1;
			this->label12->Text = L"B";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label13->Location = System::Drawing::Point(12, 230);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 18);
			this->label13->TabIndex = 1;
			this->label13->Text = L"X";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label14->Location = System::Drawing::Point(12, 258);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 18);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Y";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label15->Location = System::Drawing::Point(2, 286);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 18);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Key";
			// 
			// TxXa
			// 
			this->TxXa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxXa->Location = System::Drawing::Point(35, 227);
			this->TxXa->Name = L"TxXa";
			this->TxXa->ReadOnly = true;
			this->TxXa->Size = System::Drawing::Size(209, 24);
			this->TxXa->TabIndex = 4;
			// 
			// TxYa
			// 
			this->TxYa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxYa->Location = System::Drawing::Point(35, 255);
			this->TxYa->Name = L"TxYa";
			this->TxYa->ReadOnly = true;
			this->TxYa->Size = System::Drawing::Size(209, 24);
			this->TxYa->TabIndex = 4;
			// 
			// TxKa
			// 
			this->TxKa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxKa->Location = System::Drawing::Point(35, 283);
			this->TxKa->Name = L"TxKa";
			this->TxKa->ReadOnly = true;
			this->TxKa->Size = System::Drawing::Size(209, 24);
			this->TxKa->TabIndex = 4;
			// 
			// TxKb
			// 
			this->TxKb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxKb->Location = System::Drawing::Point(279, 283);
			this->TxKb->Name = L"TxKb";
			this->TxKb->ReadOnly = true;
			this->TxKb->Size = System::Drawing::Size(209, 24);
			this->TxKb->TabIndex = 4;
			// 
			// TxYb
			// 
			this->TxYb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxYb->Location = System::Drawing::Point(279, 255);
			this->TxYb->Name = L"TxYb";
			this->TxYb->ReadOnly = true;
			this->TxYb->Size = System::Drawing::Size(209, 24);
			this->TxYb->TabIndex = 4;
			// 
			// TxXb
			// 
			this->TxXb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxXb->Location = System::Drawing::Point(279, 227);
			this->TxXb->Name = L"TxXb";
			this->TxXb->ReadOnly = true;
			this->TxXb->Size = System::Drawing::Size(209, 24);
			this->TxXb->TabIndex = 4;
			// 
			// Au
			// 
			this->Au->AutoSize = true;
			this->Au->Checked = true;
			this->Au->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Au->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Au->Location = System::Drawing::Point(354, 139);
			this->Au->Name = L"Au";
			this->Au->Size = System::Drawing::Size(130, 22);
			this->Au->TabIndex = 5;
			this->Au->Text = L"Автогенерация";
			this->Au->UseVisualStyleBackColor = true;
			this->Au->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// clean
			// 
			this->clean->Location = System::Drawing::Point(409, 313);
			this->clean->Name = L"clean";
			this->clean->Size = System::Drawing::Size(75, 23);
			this->clean->TabIndex = 6;
			this->clean->Text = L"Очистить";
			this->clean->UseVisualStyleBackColor = true;
			this->clean->Click += gcnew System::EventHandler(this, &Form1::clean_Click);
			// 
			// Out1
			// 
			this->Out1->AutoSize = true;
			this->Out1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Out1->Location = System::Drawing::Point(333, 27);
			this->Out1->Name = L"Out1";
			this->Out1->Size = System::Drawing::Size(13, 18);
			this->Out1->TabIndex = 1;
			this->Out1->Text = L"-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label4->Location = System::Drawing::Point(243, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Время, мс:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 343);
			this->Controls->Add(this->clean);
			this->Controls->Add(this->Au);
			this->Controls->Add(this->TxN);
			this->Controls->Add(this->TxKa);
			this->Controls->Add(this->TxYa);
			this->Controls->Add(this->TxXb);
			this->Controls->Add(this->TxYb);
			this->Controls->Add(this->TxKb);
			this->Controls->Add(this->TxXa);
			this->Controls->Add(this->TxG);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Out3);
			this->Controls->Add(this->In2);
			this->Controls->Add(this->In1);
			this->Controls->Add(this->Out1);
			this->Controls->Add(this->Out2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->run1);
			this->Controls->Add(this->error1);
			this->Controls->Add(this->error2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Diffy-Hellman";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Кнопка Запустить для алгоритма Рабина-Миллера
				 this->Out1->Text="";
				 this->Out2->Text="";
				 this->Out3->Text="";
				 
				 bool flag=true; // Флаг ошибок
				 char* str=convert(this->In1->Text);
				 for(int i=0; i<strlen(str); i++) // Проверка на правильность ввода k
					 if(str[i]<'0'||str[i]>'9') {this->error1->Visible=true; flag=false;}
				 if(flag) // Если без ошибок
				 {
					 this->error1->Visible=false; // Не отображать текст ошибки
					 k=stringToBigUnsigned(str); // Считать k
					 if(k<10) {k=60; this->In1->Text="60";} // Ограничения на k
					 if(k>600) {k=60; this->In1->Text="60";}
					 str=convert(this->In2->Text);
					 for(int i=0; i<strlen(str); i++) // Проверка на правильность ввода N
						if(str[i]<'0'||str[i]>'9') {this->error2->Visible=true; flag=false;}
					 if(flag) // Если без ошибок
					 {
						 this->error2->Visible=false; // Не отображать текст ошибки
						 N=stringToBigUnsigned(str); // Считать N
						 if(N==0) {N=5; this->In2->Text="5";}  // Ограничения на N
						 if(N>30) {N=5; this->In2->Text="5";}
						 String^ str1 = gcnew String(bigUnsignedToString(generateSimpleNum(k)).c_str());
						 this->Out3->Text=str1; // Записать число
						 String^ str2 = gcnew String(bigUnsignedToString(num).c_str());
						 this->Out2->Text=str2; // Записать количество итераций
						 if(timer>0) // Если время > 1 мс
						 {
							 String^ str3 = gcnew String(bigUnsignedToString(timer).c_str());
							 this->Out1->Text=str3; // Записать время
						 }
						 else this->Out1->Text="<1"; // Если < 1 мс
					 }
				 }
				 else // Если с ошибками
				 {
					 str=convert(this->In2->Text);
					 for(int i=0; i<strlen(str); i++) // Проверить ввод и для N
						if(str[i]<'0'||str[i]>'9') {this->error2->Visible=true; flag=false;}
				 }
			 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 // Кнопка Запустить для алгоритма Диффи-Хеллмана
			 if(autoGen==false) // Если выключена Автогенерация
			 {
				 char* str;
				 str=convert(this->TxG->Text);
				 for(int i=0; i<strlen(str); i++) // Проверка на правильность входных данных g
					 if(str[i]<'0'||str[i]>'9') {MessageBox::Show("g должно быть числом!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return;}
				 g=stringToBigUnsigned(str); // Считать g
				 str=convert(this->TxN->Text);
				 for(int i=0; i<strlen(str); i++) // Проверка на правильность входных данных n
					 if(str[i]<'0'||str[i]>'9') {MessageBox::Show("n должно быть числом!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return;}
				 n=stringToBigUnsigned(str); // Считать n
				 str=convert(this->TxXa->Text);
				 for(int i=0; i<strlen(str); i++) // Проверка на правильность входных данных Xa
					 if(str[i]<'0'||str[i]>'9') {MessageBox::Show("Xa должно быть числом!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return;}
				 Xa=stringToBigUnsigned(str); // Считать Xa
				 str=convert(this->TxXb->Text);
				 for(int i=0; i<strlen(str); i++) // Проверка на правильность входных данных Xb
					 if(str[i]<'0'||str[i]>'9') {MessageBox::Show("Xb должно быть числом!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return;}
				 Xb=stringToBigUnsigned(str); // Считать Xb

			 }
			 else // Если Автогенерация включена
			 {
				 bool flag=true; // Флаг ошибок
				 char* str=convert(this->In1->Text);
				 for(int i=0; i<strlen(str); i++) // Проверка на правильность ввода k
					 if(str[i]<'0'||str[i]>'9') {this->error1->Visible=true; flag=false;}
				 if(flag) // Если без ошибок
				 {
					 this->error1->Visible=false; // Не отображать текст ошибки
					 k=stringToBigUnsigned(str); // Считать k
					 if(k<10) {k=60; this->In1->Text="60";} // Ограничения на k
					 if(k>600) {k=60; this->In1->Text="60";}
				 }
				 str=convert(this->In2->Text);
				 for(int i=0; i<strlen(str); i++) // Проверка на правильность ввода N
					 if(str[i]<'0'||str[i]>'9') {this->error2->Visible=true; flag=false;}
				 if(flag) // Если без ошибок
				 { 
					 this->error2->Visible=false; // Не отображать текст ошибки
					 N=stringToBigUnsigned(str); // Считать N
					 if(N==0) {N=5; this->In2->Text="5";}  // Ограничения на N
					 if(N>30) {N=5; this->In2->Text="5";}
				 }
				 else return; // Если с ошибками
			 }
			 diffyHellman(); // Запуск алгоритма Диффи-Хеллмана
			 if(autoGen) // Если Автогенерация включена
			 {
				 String^ str1 = gcnew String(bigUnsignedToString(g).c_str());
				 this->TxG->Text=str1; //Записать g
				 String^ str2 = gcnew String(bigUnsignedToString(n).c_str());
				 this->TxN->Text=str2; //Записать N
				 String^ str3 = gcnew String(bigUnsignedToString(Xa).c_str());
				 this->TxXa->Text=str3; //Записать Xa
				 String^ str4 = gcnew String(bigUnsignedToString(Xb).c_str());
				 this->TxXb->Text=str4; //Записать Xb
			 }
			 String^ str5 = gcnew String(bigUnsignedToString(Ya).c_str());
			 this->TxYa->Text=str5; //Записать Ya
			 String^ str6 = gcnew String(bigUnsignedToString(Yb).c_str());
			 this->TxYb->Text=str6; //Записать Yb
			 String^ str7 = gcnew String(bigUnsignedToString(KeyA).c_str());
			 this->TxKa->Text=str7; //Записать Ka
			 String^ str8 = gcnew String(bigUnsignedToString(KeyB).c_str());
			 this->TxKb->Text=str8; //Записать Kb
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 // Срабатывание галочки
			 if(this->Au->Checked==false)
			 {
				 autoGen=false; // Поставить флаг Автогенерации "ложь"
				 // Сделать поля для g, n, Xa, Xb доступными для записи
				 this->TxG->ReadOnly=false;
				 this->TxN->ReadOnly=false;
				 this->TxXa->ReadOnly=false;
				 this->TxXb->ReadOnly=false;
				 
			 }
			 else
			 {
				 autoGen=true; // Поставить флаг Автогенерации "истина"
				 // Сделать поля для g, n, Xa, Xb только для чтения
				 this->TxG->ReadOnly=true;
				 this->TxN->ReadOnly=true;
				 this->TxXa->ReadOnly=true;
				 this->TxXb->ReadOnly=true;
			 }
		 }
private: System::Void clean_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Кнопка Очистить
			 //Очищение полей
			 this->Out2->Text="";
			 this->Out3->Text="";
			 this->TxG->Text="";
			 this->TxN->Text="";
			 this->TxXa->Text="";
			 this->TxXb->Text="";
			 this->TxYa->Text="";
			 this->TxYb->Text="";
			 this->TxKa->Text="";
			 this->TxKb->Text="";
		 }
};
}