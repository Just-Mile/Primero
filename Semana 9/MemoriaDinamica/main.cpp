#include <iostream>
using namespace std;
/**OPERADOR NEW
    Sirve para reservar la memoria de una variables/objeto.

OPERADOR DELETE
 Sirve para liberar la memoria de una variables/objeto.
**/

int fun () {
    int *ptr = new int;
    *ptr = 10;
    return ptr;
}

int main()
{
  int *ptr = fun();
  cout << *ptr << endl;
  delete ptr;

  /*int* ptr;
    if (true){
        int x = 10; // x fuera del if no es valido
        ptr = &x;
    }

    cout << *ptr << endl;

    */
return 0;
}
