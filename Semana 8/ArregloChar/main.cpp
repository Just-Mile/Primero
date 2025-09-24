#include <iostream>

using namespace std;

int cantidad(char cad[], int tam){
if (cad[0]=='\0')
    return 0;

else{
    return 1 + cantidad(cad, tam-1);
}
}



int main()
{
    int arr[]= {10, 20, 30, 40, 50};
    char cad[]= {'a', 'q', 'e', 'h', 'f', '\0'}; //'\0' fin de caden
    cout << arr << endl; // direccion de memoria
    cout << cad << endl; // cadena str

    cout << cantidad(cad, 6);
    return 0;
}
