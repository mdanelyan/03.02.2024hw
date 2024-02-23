#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
#include "User.h"
using namespace std;

class Library
{
public:

	Book* add(Book* book_)
	{
		bookcase.push_back(book_);
	}

	int remove(int location)
	{
		if (location < bookcase.size())
		{
			auto iter = bookcase.cbegin();
			bookcase.erase(iter + location);
		}
	}

	string rename(int location, string newname) {
		if (location < bookcase.size())
		{
			bookcase[location]->Setn(newname);
		}

	}

	bool status(int location, bool newstatus) {
		if (location < bookcase.size())
		{
			bookcase[location]->Seti(newstatus);
		}
	}

	vector<Book*> getlistavaible()
	{
		vector<Book*> container;
		for (size_t i = 0; i < bookcase.size(); i++)
		{
			if (bookcase[i]->Geti())
			{
				container.push_back(bookcase[i]);
			}
		}
		return container;
	}

	vector<Book*> getlist()
	{	
	   return bookcase;		
	}


private:
	vector<Book*> bookcase;
};

