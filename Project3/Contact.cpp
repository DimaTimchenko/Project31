#include "Contact.h"
#include <iostream>
using namespace std;

Contact::Contact()
{
	FIO = "0";
	TelHom = "0";
	TelWor = "0";
	Mobile = "0";
}

Contact::Contact(string f, string h, string w, string m)
{
	FIO = f;
	TelHom = h;
	TelWor = w;
	Mobile = m;
}

Contact::~Contact()
{
	cout << "destructor";
}

string Contact::GetFIO()
{
	string f = FIO;
	return f;
}

void Contact::SetFio(string f)
{
	FIO = f;
}

string Contact::GetTelHom()
{
	string f = TelHom;
	return f;
}

void Contact::SetTelHom(string f)
{
	TelHom = f;
}

string Contact::GetTelWor()
{
	string f = TelWor;
	return f;
}

void Contact::SetTelWor(string f)
{
	TelWor = f;
}

string Contact::GetMobile()
{
	string f = Mobile;
	return f;
}

void Contact::SetMobile(string f)
{
	Mobile = f;
}

void Contact::Init(string f, string h, string w, string m)
{
	FIO = f;
	TelHom = h;
	TelWor = w;
	Mobile = m;
}

void Contact::Print()
{
	cout << "FIO:" << FIO << endl << "TELHOM:" << TelHom << endl << "TelWor" << TelWor << endl << "MOBILE:" << Mobile << endl;
}
