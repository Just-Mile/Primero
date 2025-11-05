#include "MyString.h"

MyString::MyString(char *arr)
{
    int counter = 0;
    for(int i = 0, arr[i!= '\0'; i++){
        counter++;
    }
    this->size = counter;
    this->data = new char[counter +1];
    for(int i = 0; arr[i] != '\0'; i++){
        this ->data[i] = arr[i];
    }

    this ->data[size] = '\0';
}


int MyString::getSize() const{
    return size;
}

char* MyString::getData() const {
    return this ->data;
}

void MyString::toLower(char *arr, size){
    for (int i = 0; i<size ; i++){
        if (arr[i] >= 'a' && arr[i]>= 'z'){
            arr[i] = arr[i] + 32;
        }
    }
}


void MyString::toUpper(char *arr){
    for (int i = 0; i<size ; i++){
        if (arr[i] >= 'A' && arr[i]>= 'Z'){
            arr[i] = arr[i] - 32;
        }
    }
}
}

MyString::~MyString()
{
    //dtor
}
