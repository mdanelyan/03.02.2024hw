#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
#include "library.h"
using namespace std;






class User
{
public:
    string set(string name_) 
	{
		this->name = name_;
	}
	User(string name_)
	{
		this->name = name_;
	}
private:
	string name;
};



class Userwithrights : public User
{
public:
	Userwithrights(string name_) : User(name_) {};
	Library add(Book* book_, Library lib)
	{
		lib.add(book_);
	}

	int remove(int location, Library lib)
	{
		lib.remove(location);
	}

	string rename(int location, string newname, Library lib) {
		lib.rename(location, newname);
	}

	bool status(int location, bool newstatus, Library lib) {
		lib.status(location, newstatus);
	}

	Library getlistavaible(Library lib)
	{
		lib.getlistavaible();
	}

	Library getlist(Library lib)
	{
		lib.getlist();
	}


private:
	
};

class Userwithoutrights :public User
{
public:

	Userwithoutrights(string name_) : User(name_) {};

	Library getlistavaible(Library lib)
	{
		lib.getlistavaible();
	}

	Library getlist(Library lib)
	{
		lib.getlist();
	}


private:


};