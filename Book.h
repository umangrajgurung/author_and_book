/*Name: Umang Raj Gurung
  Roll no: 0315
  File: Book.h
  Program: Object oriented programming of two classes, Author and Book
*/

#include "Author.h"

#ifndef BOOK_H
#define BOOK_H

class Book
{
private:
	string name;
	Author author;
	float price;
	int quantity;

public:
	Book();
	Book(string nameGiven, Author authorGiven, float priceGiven);
	Book(string nameGiven, Author authorGiven, float priceGiven, int quantityGiven);
	void setQuantity(int quantityGiven);
	void setPrice(float priceGiven);
	string getName();
	Author getAuthor();
	float getPrice();
	int getQuantity();
	void toString();
};
#endif
