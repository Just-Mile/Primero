#include <iostream>
#include "DynamicIntegerArray.h"
using namespace std;

int main()
{
    DynamicIntegerArray dia;
    cout << dia.getSize() << endl;

    int arr[] = {1, 2, 3, 4, 5};
    DynamicIntegerArray dia2(arr, 5);
    cout << dia2.getSize() << endl;
    cout<< endl;


    dia2.pushBack(10);
    cout << dia2.getData << endl;

    return 0;
}
