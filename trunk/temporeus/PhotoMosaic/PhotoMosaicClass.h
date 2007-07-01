// PhotoMosaicClass.h

#pragma once

using namespace System;
using namespace System::Web;
using namespace System::Web::Services;

namespace PhotoMosaic {

	[WebServiceBinding(ConformsTo=WsiProfiles::BasicProfile1_1,EmitConformanceClaims = true)]
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
    public ref class PhotoMosaicClass : public System::Web::Services::WebService
    {

    public:
		PhotoMosaicClass()
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
		~PhotoMosaicClass()
		{
			if (components)
			{
				delete components;
			}
		}

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
		void InitializeComponent()
		{
		}
#pragma endregion

		// WEB SERVICE EXAMPLE
		// The HelloWorld() example service returns the string "Hello, World!".
		// To test this web service, ensure that the .asmx file in the deployment path is
		// set as your Debug HTTP URL, in project properties.
		// and press F5.

	public:
        [System::Web::Services::WebMethod]
        String ^HelloWorld();

        // TODO: Add the methods of your Web Service here
	};
}
