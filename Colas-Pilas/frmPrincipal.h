#pragma once

namespace ColasPilas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  colasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pilasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pilasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(890, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->colasToolStripMenuItem,
					this->pilasToolStripMenuItem, this->toolStripMenuItem2, this->salirToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(84, 20);
			this->toolStripMenuItem1->Text = L"Pilas y Colas";
			// 
			// colasToolStripMenuItem
			// 
			this->colasToolStripMenuItem->Name = L"colasToolStripMenuItem";
			this->colasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->colasToolStripMenuItem->Text = L"Colas";
			this->colasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::colasToolStripMenuItem_Click);
			// 
			// pilasToolStripMenuItem
			// 
			this->pilasToolStripMenuItem->Name = L"pilasToolStripMenuItem";
			this->pilasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pilasToolStripMenuItem->Text = L"Pilas";
			this->pilasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::pilasToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(177, 6);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::salirToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 403);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"menu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void colasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmColas ^x = gcnew frmColas();
		x->MdiParent = this;
		x->Show();
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void pilasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmPilas ^x = gcnew frmPilas();
		x->MdiParent = this;
		x->Show();
	}
	};
}
