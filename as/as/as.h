#pragma once

namespace as {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// as ժҪ
	/// </summary>
	public ref class as : public System::Windows::Forms::Form
	{
	public:
		as(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴����ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~as()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// as
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Name = L"as";
			this->Text = L"as";
			this->Load += gcnew System::EventHandler(this, &as::as_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void as_Load(System::Object^  sender, System::EventArgs^  e) {






















































































			 }
	};
}