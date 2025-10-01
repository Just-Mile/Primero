#include <iostream>

using namespace std;
/*Es una variable que almacena direcciones de memoria de otra variable del mismo tipo

Declaracion de puntero TIPO_DE_DATO * nombre_del_puntero

OPERADOR DE DIRECCÓN (&)
Sirve para obtener la direccion de memoria de una variable/objeto.
Operador unari. Ejem & var --retorna la direccion de la variable var.

OPERADOR DE INDIRECCIÓN (*)
Sirve para obtener el valor de una dirección de memoria.
OPerador unario. Ejem *ptr --> retorna el valor de la direccion de mmemoria que tiene ptr.

*/




int main (){
    int *ptr; // declarando la variable de tipo enter


    int x; // declarando la variable x
    x = 10; // incializando la variable x con valor 10
    ptr = &x;

    *ptr = 1000; //cambiar el valor de x desde el puntero
    cout << x << endl;

    int *ptr2 = &x;
    cout << *ptr2 << endl;
    *ptr2 = 5000;
    cout << x << endl;
    cout << *ptr << endl;
    cout << *ptr2 << endl;

    double *ptr3;
    double z = 3.72983722;
    ptr3 = &z;
    cout << *ptr3 << endl;

    *ptr3 = 20.87264662;
    cout << z << endl;



    /*cout << "Dirección de la variable x: " << &x << endl;
    cout << "Dirección de la variable x: " << ptr << endl;
    cout << "El valor de la direccion de la variable ptr es: " << *ptr << endl; //escribimos x a traves de un puntero


    int y = 20;
    ptr = &y;
    cout << "Dirección de la variable x: " << ptr << endl;
    cout << "El valor de la direccion de la variable ptr es: " << *ptr << endl;
    cout << "El valor de la direccion de ptr es: " << &ptr << endl;


int *ptr2;
ptr2 = &y;

if (ptr == ptr2){
    cout << "El valor de ptr y ptr2 es el mismo" << endl;
    cout << "El valor de la dirección de variable de ptr: " << *ptr<< endl;
    cout << "El valor de la dirección de variable de ptr2: " << *ptr2<< endl;
}

*/
return  0;

}
