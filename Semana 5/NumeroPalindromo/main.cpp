#include <iostream>

using namespace std;

int main()
{

    long long n;
    cout << "Ingrese un numero de 3 a 9 digitos" << endl;
    cin>> n;
    int original = n;
    int revertido = 0;


    while (n > 0){
        int digito = n % 10;
        revertido = revertido * 10 + digito;
        n /= 10;

    }

    if (original == revertido){
        cout << "Es palindromo" << endl;
    }
    else {
        cout << "No es palindromo" << endl;
    }

    //while
    //Toma primer y ultimo digito, comparalos  2002  1000
//while y for para todos


    return 0;
}
