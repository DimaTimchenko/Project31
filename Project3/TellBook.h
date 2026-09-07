#pragma once
#include "Contact.h"
class TellBook
{
Contact* object;
	int contacts=0;
	int size = 100;
public:
	TellBook();
	~TellBook();
	void AddContact(string f, string h, string w, string m);
	void RemoveContact(string m);
	void PrintAll();
	void SearchContact(string f);
};

