#include "Contact.h"
#include "TellBook.h"
#include <iostream>
using namespace std;
int main() {
	TellBook book;
	book.AddContact("fdgfkdlgf", "1234567", "9876543", "5551234");
	book.AddContact("fdgfkdlgf", "1234567", "9876543", "5551234");
	book.AddContact("fdgfkdlgf", "1234567", "9876543", "5551234");
	book.RemoveContact("5551234");
	book.AddContact("fdgfkdlgf", "1234567", "9876543", "5551634");
	book.PrintAll();
	book.SearchContact("fdgfkdlgf");	cout << "123";
}