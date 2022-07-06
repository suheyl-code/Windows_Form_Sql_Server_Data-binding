#pragma once
#include <string>
#include "About.h"

namespace CppWindowsDesktopApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	
	


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
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnAbout;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	protected:



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(636, 421);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(54, 30);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnAbout
			// 
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbout->Location = System::Drawing::Point(576, 421);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(54, 30);
			this->btnAbout->TabIndex = 1;
			this->btnAbout->Text = L"About";
			this->btnAbout->UseVisualStyleBackColor = true;
			this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::btnAbout_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 347);
			this->dataGridView1->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(702, 451);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnExit);
			this->Name = L"MyForm";
			this->Text = L"Database Connection";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Environment::Exit(0);
	}
	private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ aboutForm = gcnew About;
		aboutForm->ShowDialog();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
			String^ connectionString = L"Data Source=LENOVOTHINKBOOK\\SQLEXPRESS;Initial Catalog=Northwind;Integrated Security=True";
			SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
			

			SqlCommand^ myCommand = gcnew SqlCommand("select * from Personeller", sqlConnection);
						
			myCommand->Connection = sqlConnection;

			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter();
			sqlDataAdapter->SelectCommand = myCommand;
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);
			dataGridView1->DataSource = dataTable;
			
			sqlDataAdapter->Update(dataTable);
		
	}
};
}
