#pragma once
#include <string>

namespace Lab041225419RafaelToj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Ejercicio1
	/// </summary>
	/// 	
	static int Ascendente = 0;
	static int Descendente = 0;
	//static std::string datos[141][3];

	///static String^ Datos[241][3];
	public ref class Ejercicio1 : public System::Windows::Forms::Form
	{

	public:

		//static array<String^, 2>^ datos = gcnew array<String^, 2>{ {"0","1","0"}};
		String^ TipoOrdenado = "";
		array<String^, 2>^ datos = gcnew array<String^, 2>(241, 3);
	public:
		Ejercicio1(void)
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
		~Ejercicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::OpenFileDialog^ SubirArchivo;

	private: System::Windows::Forms::Button^ Bsubir;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtDireccion;

	private: System::Windows::Forms::Button^ BAscendente;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ txtorden;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ BDepartamento;
	private: System::Windows::Forms::Button^ BAño;
	private: System::Windows::Forms::Button^ BDemandas;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtParametro;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SubirArchivo = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Bsubir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->BAscendente = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->txtorden = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BDepartamento = (gcnew System::Windows::Forms::Button());
			this->BAño = (gcnew System::Windows::Forms::Button());
			this->BDemandas = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtParametro = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1278, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tipos de ordenamientos";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1294, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Bubble Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ejercicio1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1447, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 57);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Quick Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ejercicio1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1385, 166);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Merge sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Ejercicio1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1257, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(348, 254);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(64, 647);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 52);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Salir";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Ejercicio1::button5_Click);
			// 
			// SubirArchivo
			// 
			this->SubirArchivo->FileName = L"openFileDialog1";
			// 
			// Bsubir
			// 
			this->Bsubir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bsubir->Location = System::Drawing::Point(12, 149);
			this->Bsubir->Name = L"Bsubir";
			this->Bsubir->Size = System::Drawing::Size(118, 79);
			this->Bsubir->TabIndex = 4;
			this->Bsubir->Text = L"Subir Archivo";
			this->Bsubir->UseVisualStyleBackColor = true;
			this->Bsubir->Click += gcnew System::EventHandler(this, &Ejercicio1::Bsubir_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 72);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Debe ingresar un archivo ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Direccion";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(95, 95);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(164, 22);
			this->txtDireccion->TabIndex = 7;
			// 
			// BAscendente
			// 
			this->BAscendente->Enabled = false;
			this->BAscendente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BAscendente->Location = System::Drawing::Point(356, 149);
			this->BAscendente->Name = L"BAscendente";
			this->BAscendente->Size = System::Drawing::Size(121, 69);
			this->BAscendente->TabIndex = 8;
			this->BAscendente->Text = L"Ascendente";
			this->BAscendente->UseVisualStyleBackColor = true;
			this->BAscendente->Click += gcnew System::EventHandler(this, &Ejercicio1::BAscendente_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(544, 149);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 69);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Descendente";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Ejercicio1::button6_Click);
			// 
			// txtorden
			// 
			this->txtorden->Location = System::Drawing::Point(408, 95);
			this->txtorden->Name = L"txtorden";
			this->txtorden->ReadOnly = true;
			this->txtorden->Size = System::Drawing::Size(242, 22);
			this->txtorden->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(420, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(245, 64);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Luego seleccionar como lo deseea ordenar";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(269, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"------------>";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(671, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"------------>";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Location = System::Drawing::Point(317, 277);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(685, 422);
			this->dataGridView1->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(811, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(274, 64);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Escoja el parametros por el cual desea ordenar (Departamento, año,demandas)";
			// 
			// BDepartamento
			// 
			this->BDepartamento->Enabled = false;
			this->BDepartamento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BDepartamento->Location = System::Drawing::Point(789, 123);
			this->BDepartamento->Name = L"BDepartamento";
			this->BDepartamento->Size = System::Drawing::Size(137, 56);
			this->BDepartamento->TabIndex = 13;
			this->BDepartamento->Text = L"Departamento";
			this->BDepartamento->UseVisualStyleBackColor = true;
			this->BDepartamento->Click += gcnew System::EventHandler(this, &Ejercicio1::BDepartamento_Click);
			// 
			// BAño
			// 
			this->BAño->Enabled = false;
			this->BAño->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BAño->Location = System::Drawing::Point(968, 117);
			this->BAño->Name = L"BAño";
			this->BAño->Size = System::Drawing::Size(117, 56);
			this->BAño->TabIndex = 13;
			this->BAño->Text = L"Año";
			this->BAño->UseVisualStyleBackColor = true;
			this->BAño->Click += gcnew System::EventHandler(this, &Ejercicio1::BAño_Click);
			// 
			// BDemandas
			// 
			this->BDemandas->Enabled = false;
			this->BDemandas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BDemandas->Location = System::Drawing::Point(884, 185);
			this->BDemandas->Name = L"BDemandas";
			this->BDemandas->Size = System::Drawing::Size(118, 65);
			this->BDemandas->TabIndex = 13;
			this->BDemandas->Text = L"Demandas";
			this->BDemandas->UseVisualStyleBackColor = true;
			this->BDemandas->Click += gcnew System::EventHandler(this, &Ejercicio1::BDemandas_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(1091, 22);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 25);
			this->label8->TabIndex = 11;
			this->label8->Text = L"------------>";
			// 
			// txtParametro
			// 
			this->txtParametro->Location = System::Drawing::Point(814, 89);
			this->txtParametro->Name = L"txtParametro";
			this->txtParametro->ReadOnly = true;
			this->txtParametro->Size = System::Drawing::Size(242, 22);
			this->txtParametro->TabIndex = 9;
			// 
			// Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 732);
			this->Controls->Add(this->BDemandas);
			this->Controls->Add(this->BAño);
			this->Controls->Add(this->BDepartamento);
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
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Name = L"Ejercicio1";
			this->Text = L"Ejercicio1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Bubble() {
			int aux, i, j;
			
		

		}

		void ordenamiento(String^ orden) {
			char letra;
			array<String^, 2>^ MatrizAux = gcnew array<String^, 2>(241, 3);
			int tamaño = datos->GetLength(0);
			letra = Convert::ToChar(orden);

			switch (letra)
			{

			case 'D':
				if (Ascendente > 0)
				{

				}

				else {

				}
				break;

			case 'A':
				if (Ascendente > 0)
				{



				}
				else {

				}
				break;

			case 'N':
				if (Ascendente > 0)
				{

				}
				else {

				}
				break;


			default:
				break;
			}
		}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {// Quick sort
		//MessageBox::Show("asas");


	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {// Boton Bubble sort

		ordenamiento(TipoOrdenado);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {// Merge sort


	}


	private: System::Void BAscendente_Click(System::Object^ sender, System::EventArgs^ e) {
		txtorden->Text = "Ascendente";
		Ascendente++;
		Descendente = 0;
		BDepartamento->Enabled = true;
		BDemandas->Enabled = true;
		BAño->Enabled = true;

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		txtorden->Text = "Descendente";
		Descendente++;
		Ascendente = 0;
		BDepartamento->Enabled = true;
		BDemandas->Enabled = true;
		BAño->Enabled = true;
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

				////Finaliazcion de llenado de matriz
			}

		}

	}

	private: System::Void BDepartamento_Click(System::Object^ sender, System::EventArgs^ e) {
		TipoOrdenado = "D";
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;

	}
	private: System::Void BAño_Click(System::Object^ sender, System::EventArgs^ e) {

		TipoOrdenado = "A";
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
	}


	private: System::Void BDemandas_Click(System::Object^ sender, System::EventArgs^ e) {

		TipoOrdenado = "N";
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
	}
	};
}
