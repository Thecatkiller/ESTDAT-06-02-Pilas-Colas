#pragma once

namespace ColasPilas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	Trabajador Cola[50];
	int tope = 0;
	int limite = 5;
	/// <summary>
	/// Resumen de frmColas
	/// </summary>
	public ref class frmColas : public System::Windows::Forms::Form
	{
	public:
		frmColas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmColas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtDNI;
	private: System::Windows::Forms::TextBox^  txtNombre;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtSueldo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  cmbSexo;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DateTimePicker^  dtFechaNacimiento;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dgvLista;






	private: System::Windows::Forms::Button^  Eliminar;

	private: System::Windows::Forms::Button^  btnDesencolar;

	private: System::Windows::Forms::Button^  btnEncolar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colGenero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colSueldo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colFechaNacimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colEdad;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtSueldo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbSexo = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtFechaNacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colGenero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colSueldo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFechaNacimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEdad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->btnDesencolar = (gcnew System::Windows::Forms::Button());
			this->btnEncolar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DNI :";
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(137, 13);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 20);
			this->txtDNI->TabIndex = 1;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(137, 39);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(254, 20);
			this->txtNombre->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombres Completos :";
			// 
			// txtSueldo
			// 
			this->txtSueldo->Location = System::Drawing::Point(137, 65);
			this->txtSueldo->Name = L"txtSueldo";
			this->txtSueldo->Size = System::Drawing::Size(118, 20);
			this->txtSueldo->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sueldo :";
			// 
			// cmbSexo
			// 
			this->cmbSexo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbSexo->FormattingEnabled = true;
			this->cmbSexo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Femenino", L"Masculino", L"Otros" });
			this->cmbSexo->Location = System::Drawing::Point(137, 91);
			this->cmbSexo->Name = L"cmbSexo";
			this->cmbSexo->Size = System::Drawing::Size(121, 21);
			this->cmbSexo->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Sexo :";
			// 
			// dtFechaNacimiento
			// 
			this->dtFechaNacimiento->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFechaNacimiento->Location = System::Drawing::Point(138, 121);
			this->dtFechaNacimiento->Name = L"dtFechaNacimiento";
			this->dtFechaNacimiento->Size = System::Drawing::Size(118, 20);
			this->dtFechaNacimiento->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Fecha Nacimiento;";
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colDNI, this->colNombre,
					this->colGenero, this->colSueldo, this->colFechaNacimiento, this->colEdad
			});
			this->dgvLista->Location = System::Drawing::Point(15, 171);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(633, 246);
			this->dgvLista->TabIndex = 10;
			this->dgvLista->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmColas::dgvLista_CellClick);
			// 
			// colDNI
			// 
			this->colDNI->HeaderText = L"DNI";
			this->colDNI->Name = L"colDNI";
			this->colDNI->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombres Completos";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			// 
			// colGenero
			// 
			this->colGenero->HeaderText = L"Género";
			this->colGenero->Name = L"colGenero";
			this->colGenero->ReadOnly = true;
			// 
			// colSueldo
			// 
			this->colSueldo->HeaderText = L"Sueldo";
			this->colSueldo->Name = L"colSueldo";
			this->colSueldo->ReadOnly = true;
			// 
			// colFechaNacimiento
			// 
			this->colFechaNacimiento->HeaderText = L"Fecha Nacimiento";
			this->colFechaNacimiento->Name = L"colFechaNacimiento";
			this->colFechaNacimiento->ReadOnly = true;
			// 
			// colEdad
			// 
			this->colEdad->HeaderText = L"Edad";
			this->colEdad->Name = L"colEdad";
			this->colEdad->ReadOnly = true;
			// 
			// Eliminar
			// 
			this->Eliminar->Location = System::Drawing::Point(557, 104);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(91, 33);
			this->Eliminar->TabIndex = 13;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmColas::Eliminar_Click);
			// 
			// btnDesencolar
			// 
			this->btnDesencolar->Location = System::Drawing::Point(557, 63);
			this->btnDesencolar->Name = L"btnDesencolar";
			this->btnDesencolar->Size = System::Drawing::Size(91, 33);
			this->btnDesencolar->TabIndex = 14;
			this->btnDesencolar->Text = L"Desencolar";
			this->btnDesencolar->UseVisualStyleBackColor = true;
			this->btnDesencolar->Click += gcnew System::EventHandler(this, &frmColas::btnDesencolar_Click);
			// 
			// btnEncolar
			// 
			this->btnEncolar->Location = System::Drawing::Point(557, 22);
			this->btnEncolar->Name = L"btnEncolar";
			this->btnEncolar->Size = System::Drawing::Size(91, 33);
			this->btnEncolar->TabIndex = 15;
			this->btnEncolar->Text = L"Encolar";
			this->btnEncolar->UseVisualStyleBackColor = true;
			this->btnEncolar->Click += gcnew System::EventHandler(this, &frmColas::btnEncolar_Click);
			// 
			// frmColas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 429);
			this->Controls->Add(this->btnEncolar);
			this->Controls->Add(this->btnDesencolar);
			this->Controls->Add(this->Eliminar);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dtFechaNacimiento);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbSexo);
			this->Controls->Add(this->txtSueldo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->label1);
			this->Name = L"frmColas";
			this->Text = L"frmColas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	private:char *StringToChar(System::Windows::Forms::TextBox^ textBox) {
		String^ val = textBox->Text;
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
		char* r = static_cast<char*>(ptrToNativeString.ToPointer());
		return r;
	}
#pragma endregion
	private: void imprimir() {
		int ta = 0;
		Trabajador Ca[50];
		dgvLista->Rows->Clear();
		while (!estaVacia(tope))
		{
			Trabajador ex = desenColar(tope, Cola);
			dgvLista->Rows->Add(
				gcnew String(ex.dni),
				gcnew String(ex.nombresCompletos),
				ex.genero == 0 ? "Femenino" : ex.genero == 1 ? "Masculino" : "Otros",
				ex.sueldo,
				DateTime(ex.fn.año, ex.fn.mes, ex.fn.dia).ToString("dd/MM/yyyy"),
				CalcularEdad(ex.fn)
			);

			enColar(ta, limite, ex, Ca);
		}
		while (!estaVacia(ta))
		{
			Trabajador ex = desenColar(ta, Ca);
			enColar(tope, limite, ex, Cola);
		}
	}
	private: System::Void btnEncolar_Click(System::Object^  sender, System::EventArgs^  e) {
		Trabajador trabajador;
		strcpy(trabajador.dni, StringToChar(txtDNI));
		strcpy(trabajador.nombresCompletos, StringToChar(txtNombre));
		trabajador.sueldo = Convert::ToDouble(txtSueldo->Text);
		trabajador.genero = cmbSexo->SelectedIndex;
		trabajador.fn.dia = dtFechaNacimiento->Value.Day;
		trabajador.fn.mes = dtFechaNacimiento->Value.Month;
		trabajador.fn.año = dtFechaNacimiento->Value.Year;

		enColar(tope, limite, trabajador, Cola);
		imprimir();
	}
	private: System::Void btnDesencolar_Click(System::Object^  sender, System::EventArgs^  e) {
		desenColar(tope, Cola);
		imprimir();
	}
	private: System::Void Eliminar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (indiceSeleccionado != -1) {
			eliminarColaEnIndice(tope,limite, indiceSeleccionado, Cola);
			indiceSeleccionado = -1;
			imprimir();
		}
	}
			 int indiceSeleccionado = -1;
	private: System::Void dgvLista_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		indiceSeleccionado = dgvLista->SelectedCells[0]->RowIndex;



	}
	};
}
