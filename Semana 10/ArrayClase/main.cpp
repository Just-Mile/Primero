#include <iostream>

using namespace std;

int main()
{
    IntegerArray ia(3); //Crea un array dando un entero para el tamaño de la lista
    ia.SetData(10, 0); //Da (valor, posicion)
    ia.SetData(20, 1);
    ia.SetData(30, 2);

    ia.print();
    return 0;
}
