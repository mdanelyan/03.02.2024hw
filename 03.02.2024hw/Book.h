#pragma once
#include <iostream>
using namespace std;

class Book
{
public:
    Book(string name_, bool instock_)
    {
        name = name_;
        instock = instock_;
    };
    string Setn(string name_)
    {
        name = name_;
    }
    string Getn()
    {
        return name;
    }

    bool Seti(bool instock_)
    {
        instock = instock_;
    }

    bool Geti()
    {
        return instock;
    }



private:
     string name;
     bool instock;
};

