#include <iostream>

using namespace std;

/*
ARITMÉTICA DE PUNTEROS
A los punteros se le spuede incrementar/decrementar usando los operadores ++ y --
*/

int main()
{
    int arr[]= {1, 2, 3, 4, 5};
/*
    for (int i = 0; i<5; i++){
        cout << &arr[i] << endl;
    }
    return 0;
*/
    int *ptr2 = arr;
    for (int i = 0; i<5; i++, ptr2++){
        cout << *ptr2 << endl;
        cout << endl;

    }
return 0;
}
