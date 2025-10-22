#include <iostream>

using namespace std;


int Sumar(int *ptr, int tam){
    int suma = 0;
    for (int i = 0; i < tam; suma+=[i++]);
    return suma;
}

/**
int SumarR(arr[], int tam){
    int suma = 0;
    if (tam == 0) return 0;
    if (tam == 1) return arr[0];
    else{
        return arr[tam] + SumarR(arr[], tam-1);
    }
}
**/
int main()
{
    int tam = 5;
    int *ptr = new int[tam];
    for (int i = 0; i<tam; i++){
        ptr[i] = i;
    }
    for (int i = 0; i<tam; i++){
        cout << ptr[i] << " ";
    }

    cout << Sumar(ptr, tam);

    delete[] ptr;
    return 0;
}
