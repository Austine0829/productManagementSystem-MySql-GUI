#pragma once

namespace SimpleCRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for ViewProducts
	/// </summary>
	public ref class ViewProducts : public System::Windows::Forms::Form
	{
	public:
		ViewProducts(void)
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
		~ViewProducts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ productTable;
	private: System::Windows::Forms::PictureBox^ imgProductImage;
	private: System::Windows::Forms::RichTextBox^ rtbProductDesc;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ txtNewProductName;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::NumericUpDown^ nudNewProductStock;
	private: System::Windows::Forms::RichTextBox^ rtbNewProductDesc;







	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnChangeImage;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ nudNewProductPrice;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;


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
			this->productTable = (gcnew System::Windows::Forms::DataGridView());
			this->imgProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->rtbProductDesc = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnChangeImage = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nudNewProductPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudNewProductStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->rtbNewProductDesc = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNewProductName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNewProductPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNewProductStock))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// productTable
			// 
			this->productTable->AllowUserToAddRows = false;
			this->productTable->AllowUserToDeleteRows = false;
			this->productTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->productTable->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->productTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->productTable->Location = System::Drawing::Point(144, 13);
			this->productTable->MultiSelect = false;
			this->productTable->Name = L"productTable";
			this->productTable->ReadOnly = true;
			this->productTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->productTable->Size = System::Drawing::Size(529, 326);
			this->productTable->TabIndex = 0;
			this->productTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewProducts::productTable_CellClick);
			// 
			// imgProductImage
			// 
			this->imgProductImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProductImage->Location = System::Drawing::Point(13, 13);
			this->imgProductImage->Name = L"imgProductImage";
			this->imgProductImage->Size = System::Drawing::Size(125, 129);
			this->imgProductImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProductImage->TabIndex = 1;
			this->imgProductImage->TabStop = false;
			// 
			// rtbProductDesc
			// 
			this->rtbProductDesc->Location = System::Drawing::Point(12, 175);
			this->rtbProductDesc->Name = L"rtbProductDesc";
			this->rtbProductDesc->ReadOnly = true;
			this->rtbProductDesc->Size = System::Drawing::Size(125, 164);
			this->rtbProductDesc->TabIndex = 2;
			this->rtbProductDesc->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Product Description";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 346);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(666, 100);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->btnUpdate);
			this->tabPage1->Controls->Add(this->btnChangeImage);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->nudNewProductPrice);
			this->tabPage1->Controls->Add(this->nudNewProductStock);
			this->tabPage1->Controls->Add(this->rtbNewProductDesc);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->txtNewProductName);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(658, 74);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Update Item";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(10, 46);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(81, 23);
			this->btnUpdate->TabIndex = 9;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ViewProducts::btnUpdate_Click);
			// 
			// btnChangeImage
			// 
			this->btnChangeImage->Location = System::Drawing::Point(540, 33);
			this->btnChangeImage->Name = L"btnChangeImage";
			this->btnChangeImage->Size = System::Drawing::Size(108, 23);
			this->btnChangeImage->TabIndex = 8;
			this->btnChangeImage->Text = L"Change Image";
			this->btnChangeImage->UseVisualStyleBackColor = true;
			this->btnChangeImage->Click += gcnew System::EventHandler(this, &ViewProducts::btnChangeImage_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(411, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Product Price";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(288, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Product Stock";
			// 
			// nudNewProductPrice
			// 
			this->nudNewProductPrice->Location = System::Drawing::Point(414, 36);
			this->nudNewProductPrice->Name = L"nudNewProductPrice";
			this->nudNewProductPrice->Size = System::Drawing::Size(120, 20);
			this->nudNewProductPrice->TabIndex = 5;
			// 
			// nudNewProductStock
			// 
			this->nudNewProductStock->Location = System::Drawing::Point(288, 36);
			this->nudNewProductStock->Name = L"nudNewProductStock";
			this->nudNewProductStock->Size = System::Drawing::Size(120, 20);
			this->nudNewProductStock->TabIndex = 4;
			// 
			// rtbNewProductDesc
			// 
			this->rtbNewProductDesc->Location = System::Drawing::Point(100, 23);
			this->rtbNewProductDesc->Name = L"rtbNewProductDesc";
			this->rtbNewProductDesc->Size = System::Drawing::Size(182, 41);
			this->rtbNewProductDesc->TabIndex = 3;
			this->rtbNewProductDesc->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Product Description";
			// 
			// txtNewProductName
			// 
			this->txtNewProductName->Location = System::Drawing::Point(10, 23);
			this->txtNewProductName->Name = L"txtNewProductName";
			this->txtNewProductName->Size = System::Drawing::Size(81, 20);
			this->txtNewProductName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Product Name";
			// 
			// tabPage2
			// 
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage2->Controls->Add(this->btnDelete);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(658, 74);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Delete Item";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(6, 25);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(95, 23);
			this->btnDelete->TabIndex = 0;
			this->btnDelete->Text = L"Delete Product";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ViewProducts::btnDelete_Click);
			// 
			// ViewProducts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 459);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rtbProductDesc);
			this->Controls->Add(this->imgProductImage);
			this->Controls->Add(this->productTable);
			this->Name = L"ViewProducts";
			this->Text = L"Product Information";
			this->Load += gcnew System::EventHandler(this, &ViewProducts::ViewProducts_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNewProductPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNewProductStock))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

String^ connString = "server = localhost; port = 3306; database = dbshop; uid = root; password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void loadTable() {

	try
	{
		conn->Open();
		MySqlDataAdapter^ dataAdapt = gcnew MySqlDataAdapter("SELECT productID, productName, productStock, productPrice FROM products", conn);
		DataTable^ table = gcnew DataTable();
		dataAdapt->Fill(table);
		productTable->DataSource = table;

		conn->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed To Read From Database");
	}
}

private: System::Void ViewProducts_Load(System::Object^ sender, System::EventArgs^ e) {

	loadTable();
}

private: System::Void productTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ currProductID = productTable->Rows[productTable->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		imgProductImage->Image = nullptr;
		rtbProductDesc->Text = "";
		txtNewProductName->Text = "";
		rtbNewProductDesc->Text = "";
		nudNewProductStock->Value = 0;
		nudNewProductPrice->Value = 0;

		MySqlDataAdapter^ dataAdapt = gcnew MySqlDataAdapter("SELECT productImage, productDescription FROM products WHERE productID = " + currProductID, conn);
		DataTable^ table = gcnew DataTable();
		dataAdapt->Fill(table);

		String^ productDesc = table->Rows[0]->ItemArray[1]->ToString();
		rtbProductDesc->Text = productDesc;

		rtbNewProductDesc->Text = productDesc;
		txtNewProductName->Text = productTable->Rows[productTable->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
		nudNewProductStock->Value = Convert::ToInt32(productTable->Rows[productTable->CurrentCell->RowIndex]->Cells[2]->Value);
		nudNewProductPrice->Value = Convert::ToDecimal(productTable->Rows[productTable->CurrentCell->RowIndex]->Cells[3]->Value);

		array<unsigned char>^ productImage = (array<unsigned char>^)table->Rows[0]->ItemArray[0];
		MemoryStream^ memoryStream = gcnew MemoryStream(productImage);
		imgProductImage->Image = Image::FromStream(memoryStream);

		conn->Close();
	}
	catch (Exception^ e)
	{
		conn->Close();
	}
}

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currProductID = productTable->Rows[productTable->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ newProductName = txtNewProductName->Text;
	String^ newProductDesc = rtbNewProductDesc->Text;
	int newProductStock = Convert::ToInt32(nudNewProductStock->Value);
	double newProductPrice = Convert::ToDouble(nudNewProductPrice->Value);
	array<unsigned char>^ newProductImage{};


	try
	{  
		MemoryStream^ memoryStreamTwo = gcnew MemoryStream();
		
		if (imgProductImage->Image != nullptr)
		{
			imgProductImage->Image->Save(memoryStreamTwo, System::Drawing::Imaging::ImageFormat::Jpeg);
			newProductImage = memoryStreamTwo->ToArray();
		}
	}

	catch (Exception^ e)
	{
	}

	try
	{
		conn->Open();

		MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE products SET productName = @productName, productDescription = @productDescription, productStock = @productStock, productPrice = @productPrice, productImage = @productImage WHERE productID =" + currProductID, conn);

		cmd->Parameters->AddWithValue("@productName", newProductName);
		cmd->Parameters->AddWithValue("@productDescription", newProductDesc);
		cmd->Parameters->AddWithValue("@productStock", newProductStock);
		cmd->Parameters->AddWithValue("@productPrice", newProductPrice);
		cmd->Parameters->AddWithValue("@productImage", newProductImage);

		cmd->ExecuteNonQuery();

		MessageBox::Show("Product Data Has Been Succesfully Updated\n");
		
		conn->Close();

		loadTable();
	}

	catch (Exception^ e)
	{
		MessageBox::Show("Failed To Update Product Data\n");
	}
}
private: System::Void btnChangeImage_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ openFile = gcnew OpenFileDialog();
	openFile->Filter = "All Files *.* | *.*";

	if (openFile->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		imgProductImage->ImageLocation = openFile->FileName;
	}
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ currProductID = productTable->Rows[productTable->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are You Sure Your Want To Delete This Product Data In Database?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (dialogResult == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM products WHERE productID =" + currProductID, conn);

			cmd->ExecuteNonQuery();

			MessageBox::Show("Product Data Has Succesfully Deleted\n");

			conn->Close();

			loadTable();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed To Delete Product Details In Database\n");
		}
	}
}

};

}
