#include <iostream>

using namespace std;

/*
CONSTRUCTOR (tiene el mismo nombre que la clase):
    Es el método que se invoca cuando se creo una instancia.
    Es el método que se invoca cuando se libera la memoria en una istancia-

DESTRUCTOR (tiene el mismo nombre que la clase con un signo negativo dicionalmente):
    Es el método que se invoca cuando se libera la memoria en una instancia.

*/

int main()
{
    Point p1;
    Point* ptr = new Point;
    cout << endl;

    Point* ptr = new Point;
    cout << endl;
    ptr->print();

    (*ptr).print() // aqui ya es un objeto
    cout << endl;

    Point p3(4, 5);
    cout<<endl;

    p3.print();
    cout<<endl;


    delete ptr;
    return 0;
}
