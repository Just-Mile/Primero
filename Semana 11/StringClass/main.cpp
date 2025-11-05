#include <iostream>

using namespace std;
//solo crea un arreglo fijo
int main()
{
    MyString ms("ciencia de LA COMPUTACION");
    cout << ms.getSize() << endl;
    cout << ms.getData() << endl;
    ms.toLower();
    cout<< ms.getData() << endl;
    ms.toUpper();
    cout << ms.toUpper() << endl;
    return 0;
}
