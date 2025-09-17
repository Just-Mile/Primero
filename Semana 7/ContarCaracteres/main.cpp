#include <iostream>

using namespace std;

int main()
{
    string cad = "ciencia de la computacion";
    char letra = 'c';

    int contador = 0;

    for (int i = 0; i < cad.length(); i++){
        if (cad.at(i) == letra){
            contador++;
        }
    }


    cout << contador << endl;
}
