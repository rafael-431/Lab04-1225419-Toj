#pragma once
#include "Ejercicio1.h"
#include "Ejercicio2.h"
namespace Lab041225419RafaelToj {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(163, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 84);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ejercicio 1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(163, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 84);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Ejercicio 2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(277, 342);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 84);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(258, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Laboratorio N.4";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Turquoise;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(370, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(205, 164);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Intrucciones Generales";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(716, 447);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio1 eje1;
		
		eje1.ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Seleccionar uno de los dos ejercicos, 1.Ejercico de violencia familiar, 2. Ejercicio de Virus Sars", "INSTRUCCIONES", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Ejercicio2 eje2;
	eje2.ShowDialog();
}
};
}
