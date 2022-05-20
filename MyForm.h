#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>

namespace GUIGAMMEEE1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->BackColor = System::Drawing::Color::Fuchsia;
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->BackColor = System::Drawing::Color::Fuchsia;
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->BackColor = System::Drawing::Color::Fuchsia;
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->BackColor = System::Drawing::Color::Fuchsia;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->BackColor = System::Drawing::Color::Fuchsia;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->BackColor = System::Drawing::Color::Fuchsia;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->BackColor = System::Drawing::Color::Fuchsia;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::Fuchsia;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::Color::Fuchsia;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Name = L"label4";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button10
			// 
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			resources->ApplyResources(this->button11, L"button11");
			this->button11->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->button10;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CancelButton = this->button11;
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int timme = 26;
		int majorscore = 0;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		label4->Text = "25";
	}
	void adder() {
		timme = timme - 1;
	}
	int majorscoreadder() {
		if (label4->Text != "XX") {
			majorscore = majorscore + 1;

			if (label2->Text == "0") {
				label2->Text = "1";
				return 0;
			}
			if (label2->Text == "1") {
				label2->Text = "2";
				return 0;
			}
			if (label2->Text == "2") {
				label2->Text = "3";
				return 0;

			}
			if (label2->Text == "3") {
				label2->Text = "4";
				return 0;
			}
			if (label2->Text == "4") {
				label2->Text = "5";
				return 0;
			}
			if (label2->Text == "5") {
				label2->Text = "6";
				return 0;
			}
			if (label2->Text == "6") {
				label2->Text = "7";
				return 0;
			}
			if (label2->Text == "7") {
				label2->Text = "8";
				return 0;
			}
			if (label2->Text == "8") {
				label2->Text = "9";
				return 0;
			}
			if (label2->Text == "9") {
				label2->Text = "10";
				return 0;
			}
			if (label2->Text == "10") {
				label2->Text = "11";
				return 0;
			}
			if (label2->Text == "11") {
				label2->Text = "12";
				return 0;
			}
			if (label2->Text == "12") {
				label2->Text = "13";
				return 0;
			}
			if (label2->Text == "13") {
				label2->Text = "14";
				return 0;
			}
			if (label2->Text == "14") {
				label2->Text = "15";
				return 0;
			}
			if (label2->Text == "15") {
				label2->Text = "16";
				return 0;
			}
			if (label2->Text == "16") {
				label2->Text = "17";
				return 0;
			}
			if (label2->Text == "17") {
				label2->Text = "18";
				return 0;
			}
			if (label2->Text == "18") {
				label2->Text = "19";
				return 0;
			}
			if (label2->Text == "19") {
				label2->Text = "Won :)";
				timer1->Stop();
				return 0;
			}
		}
	}
	void dne() {
		if (label4->Text != "XX") {
			srand(time(0));
			int randl1, randl2, randl3;
			while (99) {
				randl1 = rand() % 9;
				randl2 = rand() % 9;
				randl3 = rand() % 9;
				if (randl1 != randl2 && randl2 != randl3) {
					break;
				}
			}
			button1->Enabled = 0;
			button2->Enabled = 0;
			button3->Enabled = 0;
			button4->Enabled = 0;
			button5->Enabled = 0;
			button6->Enabled = 0;
			button7->Enabled = 0;
			button8->Enabled = 0;
			button9->Enabled = 0;

			button1->Text = "";
			button2->Text = "";
			button3->Text = "";
			button4->Text = "";
			button5->Text = "";
			button6->Text = "";
			button7->Text = "";
			button8->Text = "";
			button9->Text = "";

			if (randl1 == 0) {
				button1->Enabled = 1;
				button1->Text = "*";
			}
			if (randl1 == 1) {
				button2->Enabled = 1;
				button2->Text = "*";
			}
			if (randl1 == 2) {
				button3->Enabled = 1;
				button3->Text = "*";
			}
			if (randl1 == 3) {
				button4->Enabled = 1;
				button4->Text = "*";
			}
			if (randl1 == 4) {
				button5->Enabled = 1;
				button5->Text = "*";
			}
			if (randl1 == 5) {
				button6->Enabled = 1;
				button6->Text = "*";
			}
			if (randl1 == 6) {
				button7->Enabled = 1;
				button7->Text = "*";
			}
			if (randl1 == 7) {
				button8->Enabled = 1;
				button8->Text = "*";
			}
			if (randl1 == 8) {
				button9->Enabled = 1;
				button9->Text = "*";
			}
			//................................
			if (randl2 == 0) {
				button1->Enabled = 1;
				button1->Text = "*";
			}
			if (randl2 == 1) {
				button2->Enabled = 1;
				button2->Text = "*";
			}
			if (randl2 == 2) {
				button3->Enabled = 1;
				button3->Text = "*";
			}
			if (randl2 == 3) {
				button4->Enabled = 1;
				button4->Text = "*";
			}
			if (randl2 == 4) {
				button5->Enabled = 1;
				button5->Text = "*";
			}
			if (randl2 == 5) {
				button6->Enabled = 1;
				button6->Text = "*";
			}
			if (randl2 == 6) {
				button7->Enabled = 1;
				button7->Text = "*";
			}
			if (randl2 == 7) {
				button8->Enabled = 1;
				button8->Text = "*";
			}
			if (randl2 == 8) {
				button9->Enabled = 1;
				button9->Text = "*";
			}
			//......................................
			if (randl3 == 0) {
				button1->Enabled = 1;
				button1->Text = "*";
			}
			if (randl3 == 1) {
				button2->Enabled = 1;
				button2->Text = "*";
			}
			if (randl3 == 2) {
				button3->Enabled = 1;
				button3->Text = "*";
			}
			if (randl3 == 3) {
				button4->Enabled = 1;
				button4->Text = "*";
			}
			if (randl3 == 4) {
				button5->Enabled = 1;
				button5->Text = "*";
			}
			if (randl3 == 5) {
				button6->Enabled = 1;
				button6->Text = "*";
			}
			if (randl3 == 6) {
				button7->Enabled = 1;
				button7->Text = "*";
			}
			if (randl3 == 7) {
				button8->Enabled = 1;
				button8->Text = "*";
			}
			if (randl3 == 8) {
				button9->Enabled = 1;
				button9->Text = "*";
			}
		}
		else {
			button1->Text = "-";
			button2->Text = "-";
			button3->Text = "-";
			button4->Text = "-";
			button5->Text = "-";
			button6->Text = "-";
			button7->Text = "-";
			button8->Text = "-";
			button9->Text = "-";
		}
	}
	void timmewriter() {
		if (timme == 25) {
			label4->Text = "24";
		}
		if (timme == 24) {
			label4->Text = "23";
		}
		if (timme == 23) {
			label4->Text = "22";
		}
		if (timme == 22) {
			label4->Text = "21";
		}
		if (timme == 21) {
			label4->Text = "20";
		}
		if (timme == 20) {
			label4->Text = "19";
		}
		if (timme == 19) {
			label4->Text = "18";
		}
		if (timme == 18) {
			label4->Text = "17";
		}
		if (timme == 17) {
			label4->Text = "16";
		}
		if (timme == 16) {
			label4->Text = "15";
		}
		if (timme == 15) {
			label4->Text = "14";
		}
		if (timme == 14) {
			label4->Text = "13";
		}
		if (timme == 13) {
			label4->Text = "12";
		}
		if (timme == 12) {
			label4->Text = "11";
		}
		if (timme == 11) {
			label4->Text = "10";
		}
		if (timme == 10) {
			label4->Text = "09";
		}
		if (timme == 9) {
			label4->Text = "08";
		}
		if (timme == 8) {
			label4->Text = "07";
		}
		if (timme == 7) {
			label4->Text = "06";
		}
		if (timme == 6) {
			label4->Text = "05";
		}
		if (timme == 5) {
			label4->Text = "04";
		}
		if (timme == 4) {
			label4->Text = "03";
		}
		if (timme == 3) {
			label4->Text = "02";
		}
		if (timme == 2) {
			label4->Text = "01";
		}
		if (timme == 1) {
			label4->Text = "00";
		}
		if (timme == 0) {
			label4->Text = "XX";
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		adder();
		timmewriter();
		dne();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		majorscoreadder();
	}
};
}
