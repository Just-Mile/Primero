#include <iostream>
# include <cctype>
using namespace std;


int main()
{

    char val = 0;

    cout << "Ingrese un caracter ";
    cin >> val;

    cout << "El caracter ingresado es: " << val << endl;
    int num = static_cast<int>(val);
    cout << "El valor numerico es: " << num << endl;

    if (num >= 65 && num <= 90) {
        cout << "Es una letra mayuscula" << endl;
    } else {
        cout << "No es una letra mayuscula" << endl;
    }

    if (num >= 97 && num <= 122) {
        cout << "Es una letra minuscula" << endl;
    } else {
        cout << "No es una letra minuscula" << endl;
    }

    /*if ((isupper(a))!= 0){
        cout << "El caracter es una mayuscula" << endl;
    }*/

    return 0;
}
