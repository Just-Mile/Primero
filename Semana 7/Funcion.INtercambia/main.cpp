#include <iostream>

using namespace std;

void intercambiar(int &a, int &b){ //Paso por referencia para guardar los valores
    int c = a;
    a = b;
    b = c;


    }


int main()
{

    int a = 31;
    int b = 48;
    intercambiar(a, b);


    cout << a <<endl;
    cout << b <<endl;
    return 0;
}
