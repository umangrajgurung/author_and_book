#include <string>

#ifndef AUTHOR_H
#define AUTHOR_H 

/*Name: Umang Raj Gurung
  Roll no: 0315
  File: Author.h
  Program: Object oriented programming of two classes, Author and Book
*/

using namespace std;

class Author
{
private:
	string name;
	string email;
	char gender;
public:
	Author();
	Author(string, string, char);
	void setEmail(string emailGiven);
	void setQuantity(int quantityGiven);
	string getName();
	string getEmail();
	char getGender();
	void toString();
};
#endif // !1



