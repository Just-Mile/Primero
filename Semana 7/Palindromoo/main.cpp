#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool palindromo = true;
    string cad;
    cout << "Ingrese palabra" << endl;
    cin >> cad;


    for (int i = 0, j = cad.length() - 1; i < cad.length() / 2; i++, j--) {
        if (cad.at(i) != cad.at(j)) {
            palindromo = false;
            break;
        }

    }

    if (palindromo) {
        cout << "Es palindromo" << endl;
    }
    else {
        cout << "No es palindromo" << endl;
    }

    return 0;
}
