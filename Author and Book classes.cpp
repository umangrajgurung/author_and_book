/*Name: Umang Raj Gurung
  Roll no: 0315
  File: Author and Book classes.cpp
  Program: Object oriented programming of two classes, Author and Book
*/

#include "stdafx.h"
#include <iostream>
#include "Book.h"
#define MAX 2

using namespace std;

int main(){
	string authorName, authorEmail, bookName;
	char authorGender;
	float bookPrice;
	int bookQuantity;
	Book novelObjs[MAX];

	cout << "\t\t\t\tBook store\n" << endl;
	for (int i = 0; i < MAX; i++){
		cout << "\nBook no. " << (i + 1) << endl;
		cout << "Enter name of book: ";
		getline(cin, bookName);
		cout << "Enter name of author: ";
		getline(cin, authorName);
		cout << "Enter author email: ";
		getline(cin, authorEmail);
		cout << "Enter author gender: ";
		cin >> authorGender;
		cout << "Enter book price: ";
		cin >> bookPrice;
		cout << "Enter quantity of books: ";
		cin >> bookQuantity;
		
		Author newAuthor(authorName, authorEmail, authorGender);
		Book newBook(bookName, newAuthor, bookPrice, bookQuantity);
		novelObjs[i] = newBook;
		cin.get();
	}
	cout << "\n\nBooks Available:-\n" << endl;
	for (int i = 0; i < MAX; i++){
		cout << (i + 1) << ". ";
		novelObjs[i].toString();
		cout << "\t" << novelObjs[i].getPrice() << endl;
	}
}
