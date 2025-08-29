#include <iostream>

using namespace std;

int main()
{
    /* CONDICIONAL IF
    if (condicion){
        //Sentencia A. SI verdadero
    } else {
    //Sentencia B. SI falso
    }
    *Operadores lógicos
    && -  and
    || - or
    ! = dieferente
    ==
    < less than
    > greater than



        (a>10 && b< 10) ->1

    */

    int a = 62;
    int b = 10;

    cout << "Ingrese un numero ";
    cin >> a;

    cout << "Ingrese otro numero ";
    cin >> b;


    if ( a>b){
        cout << "El numero " << a << " es mayor que " << b << endl;

    } else {
        cout << "El numero " << a << " no es mayor que " << b << endl;
    }
    return 0;
}
