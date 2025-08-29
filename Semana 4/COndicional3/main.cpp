#include <iostream>

using namespace std;

int main()
{

    char val = 0;

    cout << "Ingrese un caracter ";
    cin >> val;

    cout << "El caracter ingresado es: " << val << endl;
    int num = static_cast<int>(val);
    cout << "El valor numerico es: " << num << endl;

    if (num >= 48 && num <= 57) {
        cout << "Es un numero ;0" << endl;
    } else {
        cout << "No es un numero :p" << endl;
    }


    /*if ((isupper(a))!= 0){
        cout << "El caracter es una mayuscula" << endl;
    }*/
    return 0;
}
