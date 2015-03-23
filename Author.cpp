/*Name: Umang Raj Gurung
  Roll no: 0315
  File: Author.cpp
  Program: Object oriented programming of two classes, Author and Book
*/

#include "stdafx.h"
#include "Author.h"
#include <iostream>

using namespace std;

Author::Author(){};

Author::Author(string nameGiven, string emailGiven, char genderGiven){
	name = nameGiven;
	email = emailGiven;
	gender = genderGiven;
}

void Author::setEmail(string emailGiven){
	email = emailGiven;
}

string Author::getName(){
	return name;
}

string Author::getEmail(){
	return email;
}

char Author::getGender(){
	return gender;
}

void Author::toString(){
	cout << name << " at " << email << endl;
}