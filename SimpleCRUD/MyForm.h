#pragma once

#include "ViewProducts.h"

namespace SimpleCRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;


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
	private: System::Windows::Forms::PictureBox^ imgProduct;
	protected:

	private: System::Windows::Forms::Button^ btnAddImage;
	protected:

	private: System::Windows::Forms::TextBox^ txtProductName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ rtbProductDesc;
	private: System::Windows::Forms::NumericUpDown^ nudProductStock;
	private: System::Windows::Forms::NumericUpDown^ nudProductPrice;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::Button^ btnViewProducts;


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
			this->imgProduct = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddImage = (gcnew System::Windows::Forms::Button());
			this->txtProductName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rtbProductDesc = (gcnew System::Windows::Forms::RichTextBox());
			this->nudProductStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudProductPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->btnViewProducts = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductPrice))->BeginInit();
			this->SuspendLayout();
			// 
			// imgProduct
			// 
			this->imgProduct->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProduct->Location = System::Drawing::Point(13, 13);
			this->imgProduct->Name = L"imgProduct";
			this->imgProduct->Size = System::Drawing::Size(99, 106);
			this->imgProduct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProduct->TabIndex = 0;
			this->imgProduct->TabStop = false;
			// 
			// btnAddImage
			// 
			this->btnAddImage->Location = System::Drawing::Point(13, 126);
			this->btnAddImage->Name = L"btnAddImage";
			this->btnAddImage->Size = System::Drawing::Size(99, 23);
			this->btnAddImage->TabIndex = 1;
			this->btnAddImage->Text = L"Add Image";
			this->btnAddImage->UseVisualStyleBackColor = true;
			this->btnAddImage->Click += gcnew System::EventHandler(this, &MyForm::btnAddImage_Click);
			// 
			// txtProductName
			// 
			this->txtProductName->Location = System::Drawing::Point(122, 29);
			this->txtProductName->Name = L"txtProductName";
			this->txtProductName->Size = System::Drawing::Size(207, 20);
			this->txtProductName->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(119, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Product Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Product Description";
			// 
			// rtbProductDesc
			// 
			this->rtbProductDesc->Location = System::Drawing::Point(119, 81);
			this->rtbProductDesc->Name = L"rtbProductDesc";
			this->rtbProductDesc->Size = System::Drawing::Size(206, 88);
			this->rtbProductDesc->TabIndex = 5;
			this->rtbProductDesc->Text = L"";
			// 
			// nudProductStock
			// 
			this->nudProductStock->Location = System::Drawing::Point(119, 188);
			this->nudProductStock->Name = L"nudProductStock";
			this->nudProductStock->Size = System::Drawing::Size(100, 20);
			this->nudProductStock->TabIndex = 6;
			// 
			// nudProductPrice
			// 
			this->nudProductPrice->Location = System::Drawing::Point(225, 188);
			this->nudProductPrice->Name = L"nudProductPrice";
			this->nudProductPrice->Size = System::Drawing::Size(100, 20);
			this->nudProductPrice->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(119, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Product Stock";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(222, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Product Price";
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Location = System::Drawing::Point(14, 155);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(99, 27);
			this->btnAddProduct->TabIndex = 10;
			this->btnAddProduct->Text = L"Add Product";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &MyForm::btnAddProduct_Click);
			// 
			// btnViewProducts
			// 
			this->btnViewProducts->Location = System::Drawing::Point(14, 188);
			this->btnViewProducts->Name = L"btnViewProducts";
			this->btnViewProducts->Size = System::Drawing::Size(99, 27);
			this->btnViewProducts->TabIndex = 13;
			this->btnViewProducts->Text = L"View Products";
			this->btnViewProducts->UseVisualStyleBackColor = true;
			this->btnViewProducts->Click += gcnew System::EventHandler(this, &MyForm::btnViewProducts_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 217);
			this->Controls->Add(this->btnViewProducts);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nudProductPrice);
			this->Controls->Add(this->nudProductStock);
			this->Controls->Add(this->rtbProductDesc);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtProductName);
			this->Controls->Add(this->btnAddImage);
			this->Controls->Add(this->imgProduct);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductPrice))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

String^ connString = "server = localhost; port = 3306; database = dbshop; uid = root; password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void clearField() {
	txtProductName->Text = "";
	rtbProductDesc->Text = "";
	nudProductStock->Value = 0;
	nudProductPrice->Value = 0;
	imgProduct->ImageLocation = "";
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		conn->Open();
		MessageBox::Show("Succesfully Connected To Database\n");
		conn->Close();
	}
	catch (Exception^ e)
	{   
		MessageBox::Show("Failed To Connect In Database");
	}

}
private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ productName = txtProductName->Text;
	String^ productDesc = rtbProductDesc->Text;
	int productStock = Convert::ToInt32(nudProductStock->Value);
	double productPrice = Convert::ToDouble(nudProductPrice->Value);
	array<unsigned char>^ productImage{};

	try
	{
		String^ fileLocation = imgProduct->ImageLocation;
		FileStream^ fs = gcnew FileStream(fileLocation, FileMode::Open, FileAccess::Read);
		BinaryReader^ br = gcnew BinaryReader(fs);
		productImage = br->ReadBytes(fs->Length);
	}
	catch (Exception^ e)
	{
	}

	bool isValid = true;

	if (productName->Trim()->Length <= 0)
	{
		MessageBox::Show("Please Enter Product Name Before Adding The Product In Database\n");
		isValid = false;
	}

	if (productPrice <= 0)
	{
		MessageBox::Show("Please Put Product Price Before Adding The Product In Database\n");
		isValid = false;
	}

	if (isValid)
	{   
		conn->Open();

		String^ cmdString = "INSERT INTO products(productName, productDescription, productStock, productPrice, productImage) VALUES(@productName, @productDescription, @productStock, @productPrice, @productImage)";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		cmd->Parameters->AddWithValue("@productName", productName);
		cmd->Parameters->AddWithValue("@productDescription", productDesc);
		cmd->Parameters->AddWithValue("@productStock", productStock);
		cmd->Parameters->AddWithValue("@productPrice", productPrice);
		cmd->Parameters->AddWithValue("@productImage", productImage);

		try
		{
			cmd->ExecuteNonQuery();
			MessageBox::Show("Product Information Has Been Added In Database\n");
			conn->Close();
			clearField();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed To Add Product Information In Database\n");
		}
	}
}

private: System::Void btnAddImage_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ openFile = gcnew OpenFileDialog();
	openFile->Filter = "All Files *.* | *.*";

	if (openFile->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		imgProduct->ImageLocation = openFile->FileName;
	}

}

private: System::Void btnViewProducts_Click(System::Object^ sender, System::EventArgs^ e) {

	ViewProducts^ viewProduct = gcnew ViewProducts();
	viewProduct->Show();
	Hide();
}
};

}
