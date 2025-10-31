#include "MyString.h"

MyString::MyString(char *data, int size)
{
   this->size = size;
   this->data = new data[size];
}

MyString::~MyString()
{
    //dtor
}
