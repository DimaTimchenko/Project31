#include "TellBook.h"

TellBook::TellBook()
{
	object = new Contact[size];
}

TellBook::~TellBook()
{
	delete[] object;
}

void TellBook::AddContact(string f, string h, string w, string m)
{
	object[contacts].Init(f, h, w, m);
	contacts++;
	if (contacts == size) {
		size = size * 2;
	}
}

void TellBook::RemoveContact(string m)
{
	int counter = 0;
	int removingCounter = 0;
	if (contacts == counter) {
		cout << "NO CONTACTS" << endl;
	}
	else {
		while (contacts >= counter) {
			if (m == object[counter].GetMobile()) {
				object[counter].Init("0", "0", "0", "0");
				removingCounter++;
			}
			counter++;
		}


		contacts = contacts - removingCounter;
	}
}

void TellBook::PrintAll()
{
	int counter = 0;
	while (contacts > counter) {
		cout << "STUDENT NUMBER " << counter + 1 << endl;
		object[counter].Print();
		counter++;
	}
}

void TellBook::SearchContact(string f)
{
	int counter = 0;
	if (contacts == counter) {
		cout << "NO CONTACTS" << endl;
	}
	else {
		while (contacts >= counter) {
			if (f == object[counter].GetFIO()) {
				object[counter].Print();
			}
			counter++;
		}
	}
}
