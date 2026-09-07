#pragma once
#include <iostream>
using namespace std;
class Contact {
	
		string FIO;
		string TelHom;
		string TelWor;
		string Mobile;
	public:
		Contact();
		Contact(string f, string h, string w, string m);
		~Contact();
		string GetFIO();
		void SetFio(string f);
		string GetTelHom();
		void SetTelHom(string f);
		string GetTelWor();
		void SetTelWor(string f);
		string GetMobile();
		void SetMobile(string f);
		void Init(string f, string h, string w, string m);
		void Print();
	
};

