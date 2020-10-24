#pragma once

namespace Lab041225419RafaelToj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Ejercicio2
	/// </summary>
	public ref class Ejercicio2 : public System::Windows::Forms::Form
	{
	public:

		//static array<String^, 2>^ datos = gcnew array<String^, 2>{ {"0","1","0"}};
		String^ TipoOrdenado = "";
		array<String^, 2>^ datos = gcnew array<String^, 2>(241, 3);

	public:
		Ejercicio2(void)
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
		~Ejercicio2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BDemandas;
	protected:
	private: System::Windows::Forms::Button^ BAño;
	private: System::Windows::Forms::Button^ BDepartamento;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtParametro;
	private: System::Windows::Forms::TextBox^ txtorden;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ BAscendente;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Bsubir;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::OpenFileDialog^ SubirArchivo;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BDemandas = (gcnew System::Windows::Forms::Button());
			this->BAño = (gcnew System::Windows::Forms::Button());
			this->BDepartamento = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtParametro = (gcnew System::Windows::Forms::TextBox());
			this->txtorden = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->BAscendente = (gcnew System::Windows::Forms::Button());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Bsubir = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->SubirArchivo = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// BDemandas
			// 
			this->BDemandas->Enabled = false;
			this->BDemandas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BDemandas->Location = System::Drawing::Point(157, 45);
			this->BDemandas->Name = L"BDemandas";
			this->BDemandas->Size = System::Drawing::Size(118, 60);
			this->BDemandas->TabIndex = 27;
			this->BDemandas->Text = L"Casos totales";
			this->BDemandas->UseVisualStyleBackColor = true;
			// 
			// BAño
			// 
			this->BAño->Enabled = false;
			this->BAño->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BAño->Location = System::Drawing::Point(298, 47);
			this->BAño->Name = L"BAño";
			this->BAño->Size = System::Drawing::Size(117, 56);
			this->BAño->TabIndex = 28;
			this->BAño->Text = L"Muertes totales";
			this->BAño->UseVisualStyleBackColor = true;
			// 
			// BDepartamento
			// 
			this->BDepartamento->Enabled = false;
			this->BDepartamento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BDepartamento->Location = System::Drawing::Point(16, 45);
			this->BDepartamento->Name = L"BDepartamento";
			this->BDepartamento->Size = System::Drawing::Size(121, 56);
			this->BDepartamento->TabIndex = 29;
			this->BDepartamento->Text = L"País";
			this->BDepartamento->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(1281, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 25);
			this->label8->TabIndex = 24;
			this->label8->Text = L"------------>";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(727, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 25);
			this->label6->TabIndex = 25;
			this->label6->Text = L"------------>";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(273, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 25);
			this->label5->TabIndex = 26;
			this->label5->Text = L"------------>";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(986, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(274, 64);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Escoja el parametros por el cual desea ordenar";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(424, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(245, 64);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Luego seleccionar como lo deseea ordenar";
			// 
			// txtParametro
			// 
			this->txtParametro->Location = System::Drawing::Point(1025, 104);
			this->txtParametro->Name = L"txtParametro";
			this->txtParametro->ReadOnly = true;
			this->txtParametro->Size = System::Drawing::Size(242, 22);
			this->txtParametro->TabIndex = 20;
			// 
			// txtorden
			// 
			this->txtorden->Location = System::Drawing::Point(412, 104);
			this->txtorden->Name = L"txtorden";
			this->txtorden->ReadOnly = true;
			this->txtorden->Size = System::Drawing::Size(242, 22);
			this->txtorden->TabIndex = 21;
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(548, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 69);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Descendente";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// BAscendente
			// 
			this->BAscendente->Enabled = false;
			this->BAscendente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BAscendente->Location = System::Drawing::Point(360, 158);
			this->BAscendente->Name = L"BAscendente";
			this->BAscendente->Size = System::Drawing::Size(121, 69);
			this->BAscendente->TabIndex = 19;
			this->BAscendente->Text = L"Ascendente";
			this->BAscendente->UseVisualStyleBackColor = true;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(99, 104);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(164, 22);
			this->txtDireccion->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 18);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Direccion";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 72);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Debe ingresar un archivo ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Bsubir
			// 
			this->Bsubir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bsubir->Location = System::Drawing::Point(16, 158);
			this->Bsubir->Name = L"Bsubir";
			this->Bsubir->Size = System::Drawing::Size(118, 79);
			this->Bsubir->TabIndex = 14;
			this->Bsubir->Text = L"Subir Archivo";
			this->Bsubir->UseVisualStyleBackColor = true;
			this->Bsubir->Click += gcnew System::EventHandler(this, &Ejercicio2::Bsubir_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(249, 261);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(615, 367);
			this->dataGridView1->TabIndex = 30;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(16, 652);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 52);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Salir";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Ejercicio2::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->BDepartamento);
			this->groupBox1->Controls->Add(this->BDemandas);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->BAño);
			this->groupBox1->Location = System::Drawing::Point(906, 149);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(443, 336);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones ";
			// 
			// button10
			// 
			this->button10->Enabled = false;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(240, 254);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(117, 66);
			this->button10->TabIndex = 28;
			this->button10->Text = L"Población";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(84, 254);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(117, 66);
			this->button9->TabIndex = 28;
			this->button9->Text = L"Puebas/ 1M pop";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(298, 182);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(117, 66);
			this->button8->TabIndex = 28;
			this->button8->Text = L"Total de Pruebas";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(158, 182);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(117, 66);
			this->button7->TabIndex = 28;
			this->button7->Text = L"Deaths casos / 1M Pop";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(16, 182);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 66);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Tot Casos/1M Pop";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(298, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 56);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Estados criticos";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(158, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 56);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Casos activos";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 56);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Total recuperados";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Enabled = false;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(1664, 101);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(94, 57);
			this->button12->TabIndex = 36;
			this->button12->Text = L"Quick Sort";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Enabled = false;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(1511, 101);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(94, 57);
			this->button13->TabIndex = 37;
			this->button13->Text = L"Bubble Sort";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1495, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 29);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Tipos de ordenamientos";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(1474, 28);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(339, 185);
			this->button14->TabIndex = 38;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// Ejercicio2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1857, 731);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtParametro);
			this->Controls->Add(this->txtorden);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->BAscendente);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Bsubir);
			this->Name = L"Ejercicio2";
			this->Text = L"Ejercicio2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Bsubir_Click(System::Object^ sender, System::EventArgs^ e) {


		button6->Enabled = true;

		BAscendente->Enabled = true;
		SubirArchivo->Filter = "Archivso separados por como (csv)| *.csv";
		SubirArchivo->FileName = "";

		if (SubirArchivo->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			txtDireccion->Text = SubirArchivo->FileName;
			array<String^>^ archivoLineas = File::ReadAllLines(SubirArchivo->FileName);
			if (archivoLineas->Length > 0) {

				//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
				array<String^>^ archivoColumna = archivoLineas[0]->Split(',');

				if (archivoColumna->Length > 0) {
					int cantidadColumnas = archivoColumna->Length;


					//Agrega las columnas
					for (int i = 0; i < cantidadColumnas; i++) {
						//Crea una columna
						DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
						nuevacolumna->Width = 100;
						//Le agrega el tipo de columna que será
						DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
						nuevacolumna->CellTemplate = cellTemplate;
						//Inserta la columna
						dataGridView1->Columns->Add(nuevacolumna);
					}

					//Agrega las filas de manera dinámica
					for (int i = 0; i < archivoLineas->Length; i++) {
						dataGridView1->Rows->Add();
					}

					//Llena el DatagridView
					for (int i = 0; i < archivoLineas->Length; i++) {
						array<String^>^ fila = archivoLineas[i]->Split(',');
						int j = 0;

						//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
						while ((j < cantidadColumnas) && (j < fila->Length)) {
							dataGridView1->Rows[i]->Cells[j]->Value = fila[j];
							j++;

						}
					}
				}

				//array<String^, 2>^ datos = gcnew array<String^, 2>(241, 3);//Cracion de matriz e intancia
					////LLnera matriz 
				for (size_t i = 0; i < 241; i++)
				{
					array<String^>^ archivoColumna = archivoLineas[i]->Split(',');

					for (size_t j = 0; j < 3; j++)
					{
						datos[i, j] = archivoColumna[j];

					}
				}
			}
			////Finaliazcion de llenado de matriz
		}

	}
	};
}
