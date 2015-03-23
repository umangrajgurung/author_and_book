/*Name: Umang Raj Gurung
  Roll no: 0315
  File: Book.cpp
  Program: Object oriented programming of two classes, Author and Book
*/

#include "stdafx.h"
#include "Book.h"
#include "Author.h"
#include <iostream>

using namespace std;

Book::Book(){};

Book::Book(string nameGiven, Author authorGiven, float priceGiven){
	name = nameGiven;
	author = authorGiven;
	price = priceGiven;
}

Book::Book(string nameGiven, Author authorGiven, float priceGiven, int quantityGiven){
	name = nameGiven;
	author = authorGiven;
	price = priceGiven;
	quantity = quantityGiven;
}

void Book::setPrice(float priceGiven){
	price = priceGiven;
}

void Book::setQuantity(int quantityGiven){
	quantity = quantityGiven;
}

string Book::getName(){
	return name;
}

Author Book::getAuthor(){
	return author;
}

float Book::getPrice(){
	return price;
}

int Book::getQuantity(){
	return quantity;
}

void Book::toString(){
	cout << name << " by ";
	author.toString();
}
