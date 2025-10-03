#include <iostream>

using namespace std;

void printArray(int *arr, int size) {
    cout << "[";
    for (int i = 0; i < size; i++, arr++) {
        cout << *arr << " ";
    }
    cout << "]" << endl;
}

void Intercambio(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void invertirArray(int *ini, int *fin) { //ini es un puntero que se dirige al primer elemento
    if (ini >= fin) {
        return;
    } else {
        Intercambio(ini, fin);
        return invertirArray(ini + 1, fin - 1); //++in, --fin
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr) / sizeof(arr[0]);


    printArray(arr, tam);


    cout << "-----------------------" << endl;
    int x = 10;
    int y = 20;
    Intercambio(&x, &y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;


    invertirArray(arr, arr + tam - 1);

    printArray(arr, tam);

    return 0;
}

