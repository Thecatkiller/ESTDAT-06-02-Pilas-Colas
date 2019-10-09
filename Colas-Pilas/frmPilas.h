#pragma once

namespace ColasPilas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPilas
	/// </summary>
	public ref class frmPilas : public System::Windows::Forms::Form
	{
	public:
		frmPilas(void)
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
		~frmPilas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnApilar;
	private: System::Windows::Forms::Button^  btnDesapilar;
	protected:

	protected:

	private: System::Windows::Forms::Button^  Eliminar;
	private: System::Windows::Forms::DataGridView^  dgvLista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colGenero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colSueldo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colFechaNacimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colEdad;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  dtFechaNacimiento;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  cmbSexo;
	private: System::Windows::Forms::TextBox^  txtSueldo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtDNI;
	private: System::Windows::Forms::Label^  label1;

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
			this->btnApilar = (gcnew System::Windows::Forms::Button());
			this->btnDesapilar = (gcnew System::Windows::Forms::Button());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colGenero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colSueldo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFechaNacimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEdad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtFechaNacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbSexo = (gcnew System::Windows::Forms::ComboBox());
			this->txtSueldo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// btnApilar
			// 
			this->btnApilar->Location = System::Drawing::Point(554, 19);
			this->btnApilar->Name = L"btnApilar";
			this->btnApilar->Size = System::Drawing::Size(91, 33);
			this->btnApilar->TabIndex = 29;
			this->btnApilar->Text = L"Apilar";
			this->btnApilar->UseVisualStyleBackColor = true;
			this->btnApilar->Click += gcnew System::EventHandler(this, &frmPilas::btnApilar_Click);
			// 
			// btnDesapilar
			// 
			this->btnDesapilar->Location = System::Drawing::Point(554, 60);
			this->btnDesapilar->Name = L"btnDesapilar";
			this->btnDesapilar->Size = System::Drawing::Size(91, 33);
			this->btnDesapilar->TabIndex = 28;
			this->btnDesapilar->Text = L"Desapilar";
			this->btnDesapilar->UseVisualStyleBackColor = true;
			this->btnDesapilar->Click += gcnew System::EventHandler(this, &frmPilas::btnDesapilar_Click);
			// 
			// Eliminar
			// 
			this->Eliminar->Location = System::Drawing::Point(554, 101);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(91, 33);
			this->Eliminar->TabIndex = 27;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &frmPilas::Eliminar_Click);
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colDNI, this->colNombre,
					this->colGenero, this->colSueldo, this->colFechaNacimiento, this->colEdad
			});
			this->dgvLista->Location = System::Drawing::Point(12, 164);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(637, 428);
			this->dgvLista->TabIndex = 26;
			this->dgvLista->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPilas::dgvLista_CellClick);
			// 
			// colDNI
			// 

			this->txtSueldo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmPilas::txtPermitirSoloNumerosyDecimales);
			this->txtDNI->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmPilas::txtPermitirSoloNumeros);

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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Fecha Nacimiento;";
			// 
			// dtFechaNacimiento
			// 
			this->dtFechaNacimiento->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFechaNacimiento->Location = System::Drawing::Point(135, 118);
			this->dtFechaNacimiento->Name = L"dtFechaNacimiento";
			this->dtFechaNacimiento->Size = System::Drawing::Size(118, 20);
			this->dtFechaNacimiento->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Sexo :";
			// 
			// cmbSexo
			// 
			this->cmbSexo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbSexo->FormattingEnabled = true;
			this->cmbSexo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Femenino", L"Masculino", L"Otros" });
			this->cmbSexo->Location = System::Drawing::Point(134, 88);
			this->cmbSexo->Name = L"cmbSexo";
			this->cmbSexo->Size = System::Drawing::Size(121, 21);
			this->cmbSexo->TabIndex = 22;
			// 
			// txtSueldo
			// 
			this->txtSueldo->Location = System::Drawing::Point(134, 62);
			this->txtSueldo->Name = L"txtSueldo";
			this->txtSueldo->Size = System::Drawing::Size(118, 20);
			this->txtSueldo->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Sueldo :";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(134, 36);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(254, 20);
			this->txtNombre->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Nombres Completos :";
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(134, 10);
			this->txtDNI->MaxLength = 8;
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(100, 20);
			this->txtDNI->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"DNI :";
			// 
			// frmPilas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 604);
			this->Controls->Add(this->btnApilar);
			this->Controls->Add(this->btnDesapilar);
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
			this->Name = L"frmPilas";
			this->Text = L"frmPilas";
			this->Load += gcnew System::EventHandler(this, &frmPilas::frmPilas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnApilar_Click(System::Object^  sender, System::EventArgs^  e) {
		char* Dni = StringToChar(txtDNI);
		if (buscarPila(topePila, limite, Pila, Dni) == false) {
			if (ValidarCampos() == true) {
				Trabajador trabajador;
				strcpy(trabajador.dni, StringToChar(txtDNI));
				strcpy(trabajador.nombresCompletos, StringToChar(txtNombre));
				trabajador.sueldo = Convert::ToDouble(txtSueldo->Text);
				trabajador.genero = cmbSexo->SelectedIndex;
				trabajador.fn.dia = dtFechaNacimiento->Value.Day;
				trabajador.fn.mes = dtFechaNacimiento->Value.Month;
				trabajador.fn.año = dtFechaNacimiento->Value.Year;

				apilar(topePila, limite, trabajador, Pila);
				imprimir();
			}
		}
		else {
			MessageBox::Show("Ya existe un elemento en la pila con ese DNI");
		}


	}
	private: bool ValidarCampos() {
		bool isValid = true;
		txtDNI->Text = "";
		txtNombre->Text = "";
		txtSueldo->Text = "";

		if (txtDNI->Text->Trim() == "" || txtNombre->Text->Trim() == "" || txtSueldo->Text->Trim() == "" ||
			cmbSexo->SelectedIndex == -1) {

			MessageBox::Show("Complete los campos");

			isValid = false;
		}
		return isValid;
	}

	private: void imprimir() {
		int ta = 0;
		Trabajador Ca[50];
		dgvLista->Rows->Clear();
		while (!estaVacia(topePila))
		{
			Trabajador ex = desapilar(topePila, Pila);
			dgvLista->Rows->Add(
				gcnew String(ex.dni),
				gcnew String(ex.nombresCompletos),
				ex.genero == 0 ? "Femenino" : ex.genero == 1 ? "Masculino" : "Otros",
				ex.sueldo,
				DateTime(ex.fn.año, ex.fn.mes, ex.fn.dia).ToString("dd/MM/yyyy"),
				CalcularEdad(ex.fn)
			);

			apilar(ta, limite, ex, Ca);
		}
		while (!estaVacia(ta))
		{
			Trabajador ex = desapilar(ta, Ca);
			apilar(topePila, limite, ex, Pila);
		}
	}

	private:char *StringToChar(System::Windows::Forms::TextBox^ textBox) {
		String^ val = textBox->Text;
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
		char* r = static_cast<char*>(ptrToNativeString.ToPointer());
		return r;
	}
	private: System::Void btnDesapilar_Click(System::Object^  sender, System::EventArgs^  e) {
		desapilar(topePila, Pila);
		imprimir();
	}
	private: void LimpiarCampos() {
		txtDNI->Text = "";
		txtNombre->Text = "";
		txtSueldo->Text = "";
		DateTime fechaHoy = DateTime::Now;
		dtFechaNacimiento->Value = DateTime(fechaHoy.Year, fechaHoy.Month, fechaHoy.Day, 0, 0, 0);
	}
	private: System::Void Eliminar_Click(System::Object^  sender, System::EventArgs^  e) {
		char* dni = StringToChar(txtDNI);
		int topeAux = topePila;
		eliminarPila(topePila, limite, Pila, dni);

		if (topeAux != topePila)
		{
			LimpiarCampos();
			imprimir();
		}
	}
	private: System::Void dgvLista_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int indiceSeleccionado = dgvLista->SelectedCells[0]->RowIndex;
		String^ Dni = Convert::ToString(dgvLista->Rows[indiceSeleccionado]->Cells[0]->Value);
		txtDNI->Text = Dni;
	}
	private: System::Void txtPermitirSoloNumerosyDecimales(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		System::Windows::Forms::TextBox^ txtBox = (System::Windows::Forms::TextBox^)sender;
		int a = (txtBox->Text)->IndexOf(".");
		if ((e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 8 || e->KeyChar == 46) {
			if (a != -1 && e->KeyChar == 46) e->Handled = (true);
			else e->Handled = (false);
		}
		else e->Handled = (true);
	}
	private: System::Void txtPermitirSoloNumeros(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == 8)
			e->Handled = (false);
		else e->Handled = (true);
	}
	private: System::Void frmPilas_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dtFechaNacimiento->MaxDate = DateTime::Now;
		imprimir();
	}
	};
}
