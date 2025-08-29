#include <iostream>

using namespace std;

int main()
{

    /**
    Implemente un programa que reciba por tecla un numero de 4 digitos e imprima cada numero en forma vertical**/
    int a = 0;
    cout << "Ingrese un número de 4 dígitos " << endl;
    cin >> a;
    cout << a / 1000 << endl;

    cout << a % 10 << endl;
    cout << a % 100 << endl;
    cout << a % 10 << endl;

    }
    int result1 = a  % 10;
    int result2 = a / 10;


    return 0;
}
