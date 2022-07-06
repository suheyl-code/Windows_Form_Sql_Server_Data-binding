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
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::TextBox^ tbxName;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;


	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		// Private connection string and Sql connection variables
		String^ connectionString = L"Data Source=LENOVOTHINKBOOK\\SQLEXPRESS;Initial Catalog=Northwind;Integrated Security=True";
	private: System::Windows::Forms::TextBox^ tbxLastName;
	private: System::Windows::Forms::Label^ labelLastName;
	private: System::Windows::Forms::Button^ btnDelete;
		   SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->btnExit = (gcnew System::Windows::Forms::Button());
			   this->btnAbout = (gcnew System::Windows::Forms::Button());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->labelName = (gcnew System::Windows::Forms::Label());
			   this->tbxName = (gcnew System::Windows::Forms::TextBox());
			   this->btnAdd = (gcnew System::Windows::Forms::Button());
			   this->btnUpdate = (gcnew System::Windows::Forms::Button());
			   this->tbxLastName = (gcnew System::Windows::Forms::TextBox());
			   this->labelLastName = (gcnew System::Windows::Forms::Label());
			   this->btnDelete = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // btnExit
			   // 
			   this->btnExit->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnExit->Location = System::Drawing::Point(775, 409);
			   this->btnExit->Name = L"btnExit";
			   this->btnExit->Size = System::Drawing::Size(54, 30);
			   this->btnExit->TabIndex = 0;
			   this->btnExit->Text = L"Exit";
			   this->btnExit->UseVisualStyleBackColor = false;
			   this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			   // 
			   // btnAbout
			   // 
			   this->btnAbout->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->btnAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnAbout->Location = System::Drawing::Point(715, 409);
			   this->btnAbout->Name = L"btnAbout";
			   this->btnAbout->Size = System::Drawing::Size(54, 30);
			   this->btnAbout->TabIndex = 1;
			   this->btnAbout->Text = L"About";
			   this->btnAbout->UseVisualStyleBackColor = false;
			   this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::btnAbout_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(12, 104);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->Size = System::Drawing::Size(674, 335);
			   this->dataGridView1->TabIndex = 2;
			   this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			   // 
			   // labelName
			   // 
			   this->labelName->AutoSize = true;
			   this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelName->Location = System::Drawing::Point(39, 15);
			   this->labelName->Name = L"labelName";
			   this->labelName->Size = System::Drawing::Size(44, 15);
			   this->labelName->TabIndex = 3;
			   this->labelName->Text = L"Name:";
			   // 
			   // tbxName
			   // 
			   this->tbxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tbxName->Location = System::Drawing::Point(89, 15);
			   this->tbxName->Name = L"tbxName";
			   this->tbxName->Size = System::Drawing::Size(100, 21);
			   this->tbxName->TabIndex = 4;
			   // 
			   // btnAdd
			   // 
			   this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnAdd->Location = System::Drawing::Point(417, 15);
			   this->btnAdd->Name = L"btnAdd";
			   this->btnAdd->Size = System::Drawing::Size(75, 32);
			   this->btnAdd->TabIndex = 5;
			   this->btnAdd->Text = L"Add";
			   this->btnAdd->UseVisualStyleBackColor = true;
			   this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			   // 
			   // btnUpdate
			   // 
			   this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnUpdate->Location = System::Drawing::Point(417, 53);
			   this->btnUpdate->Name = L"btnUpdate";
			   this->btnUpdate->Size = System::Drawing::Size(75, 34);
			   this->btnUpdate->TabIndex = 6;
			   this->btnUpdate->Text = L"Update";
			   this->btnUpdate->UseVisualStyleBackColor = true;
			   // 
			   // tbxLastName
			   // 
			   this->tbxLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tbxLastName->Location = System::Drawing::Point(89, 53);
			   this->tbxLastName->Name = L"tbxLastName";
			   this->tbxLastName->Size = System::Drawing::Size(100, 21);
			   this->tbxLastName->TabIndex = 7;
			   // 
			   // labelLastName
			   // 
			   this->labelLastName->AutoSize = true;
			   this->labelLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelLastName->Location = System::Drawing::Point(13, 53);
			   this->labelLastName->Name = L"labelLastName";
			   this->labelLastName->Size = System::Drawing::Size(70, 15);
			   this->labelLastName->TabIndex = 8;
			   this->labelLastName->Text = L"Last Name:";
			   // 
			   // btnDelete
			   // 
			   this->btnDelete->BackColor = System::Drawing::Color::IndianRed;
			   this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnDelete->Location = System::Drawing::Point(498, 14);
			   this->btnDelete->Name = L"btnDelete";
			   this->btnDelete->Size = System::Drawing::Size(75, 34);
			   this->btnDelete->TabIndex = 9;
			   this->btnDelete->Text = L"Delete";
			   this->btnDelete->UseVisualStyleBackColor = false;
			   this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->ClientSize = System::Drawing::Size(841, 451);
			   this->Controls->Add(this->btnDelete);
			   this->Controls->Add(this->labelLastName);
			   this->Controls->Add(this->tbxLastName);
			   this->Controls->Add(this->btnUpdate);
			   this->Controls->Add(this->btnAdd);
			   this->Controls->Add(this->tbxName);
			   this->Controls->Add(this->labelName);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->btnAbout);
			   this->Controls->Add(this->btnExit);
			   this->Name = L"MyForm";
			   this->Text = L"Database Connection";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void RefreshPersonelList()
	{
		SqlCommand^ myCommand = gcnew SqlCommand("select PersonelID,SoyAdi,Adi,UnvanEki,DogumTarihi,IseBaslamaTarihi from Personeller", sqlConnection);

		myCommand->Connection = sqlConnection;

		SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter();
		sqlDataAdapter->SelectCommand = myCommand;
		DataTable^ dataTable = gcnew DataTable();
		sqlDataAdapter->Fill(dataTable);
		dataGridView1->DataSource = dataTable;

		sqlDataAdapter->Update(dataTable);
	}

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Environment::Exit(0);
	}

	private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ aboutForm = gcnew About;
		aboutForm->ShowDialog();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			RefreshPersonelList();
		}
		catch (Exception^)
		{
			MessageBox::Show("Error! Not Connected!");
		}
	}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbxName->Text;
		String^ lastName = tbxLastName->Text;

		if (name == "" || lastName == "")
		{
			MessageBox::Show("Fill all items!");
		}
		else
		{
			sqlConnection->Open();

			String^ myInsertCommand = "Insert Personeller (Adi,SoyAdi) values(@name,@lastName)";

			SqlCommand^ cmd = gcnew SqlCommand(myInsertCommand, sqlConnection);
			cmd->Parameters->AddWithValue("@name", name);
			cmd->Parameters->AddWithValue("@lastName", lastName);

			try
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show("Person Added!");

				RefreshPersonelList();
			}
			catch (Exception^)
			{
				MessageBox::Show("Error inserting values!");
			}
			finally
			{
				sqlConnection->Close();
			}

		}
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView1 != nullptr)
		{
			sqlConnection->Open();

			String^ myDeleteCommand = "delete Personeller where PersonelID=@personelID";
			int id = System::Convert::ToInt16(dataGridView1->CurrentRow->Cells["PersonelID"]->Value);
			SqlCommand^ cmd = gcnew SqlCommand(myDeleteCommand, sqlConnection);
			cmd->Parameters->AddWithValue("@personelID", id);
			try
			{
				cmd->ExecuteNonQuery();
				MessageBox::Show("Person Deleted!");

				RefreshPersonelList();
			}
			catch (Exception^)
			{
				MessageBox::Show("Error inserting values!");
			}
			finally
			{
				sqlConnection->Close();
			}
		}
		
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		tbxLastName->Tag = dataGridView1->CurrentRow->Cells["PersonelID"]->Value;
		tbxLastName->Text = dataGridView1->CurrentRow->Cells["SoyAdi"]->Value->ToString();
		tbxName->Text = dataGridView1->CurrentRow->Cells["Adi"]->Value->ToString();
	}
};
}
