#pragma once
#include "Contact.h"
class TellBook
{
Contact* object;
	int size=0;
public:
	void AddContact(string f, string h, string w, string m) {
		object[size].Init(f, h, w, m);
		size++;
	}
	void RemoveContact(string m) {
		int counter=0;
		if (size == counter) {
			cout << "NO CONTACTS" << endl;
		}
		while (size >= counter) {
			if (m == object[counter].GetMobile()) {
				object[counter].Init("0", "0", "0", "0");
			}
			counter++;
		}
	}
	void PrintAll() {
		int counter = 0;
		while (size >= counter) {
			cout << "STUDENT NUMBER " << counter + 1 << endl;
			object[counter].Print();
			counter++;
		}
	}
};

