#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

//funcion para saber si es primo
bool EsPrimo(int n){
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i*i <= n; i += 2){
        if (n % i == 0)
            return false;
    }
    return true;
}

//funcion para ordenar
void OrdenarDes(int arr[], int n){
    for(int i = 0; i < n-1; i++){
      for(int j = 0; j < n-1; j++){
        if (arr[j] < arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j+1] = temp;
        }
    }
  }
}

int main(){
    srand(time(0));
    int matriz[10][10];
    int Primos[100];
    int noPrimos[100];

    //crear matriz aleatoria
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            matriz[i][j] = rand() % 101;
        }
    }

    //imprimir dicha matriz
    cout << "Matriz de 10x10 con numeros aleatorios"<< endl;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    int iPrimos = 0;
    int iNoPrimos = 0;

    //para separar los numeros primos y no primos en dos arrays unidimensionales
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (EsPrimo(matriz[i][j])){
                Primos[iPrimos] = matriz[i][j];
                iPrimos++;
            } else {
                noPrimos[iNoPrimos] = matriz[i][j];
                iNoPrimos++;
            }
        }
    }

    //Ordenar de mayor a menor
    OrdenarDes(Primos, iPrimos);
    OrdenarDes(noPrimos, iNoPrimos);

    //UNificarlo todo en la matriz
    int indice = 0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (indice < iPrimos){
                matriz[i][j] = Primos[indice];
                indice++;
            }
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (indice < iNoPrimos + iPrimos){
                matriz[i][j] = noPrimos[indice - iPrimos];
                indice++;
            }
        }
    }


    /* Tambien se puede trabajar para unificarlop
    for (int i = 0; i < iPrimos; i++){
        matriz[indice / 10][indice % 10] = Primos[i];
        indice++;
    }

    // Colocar los números no primos
    for (int i = 0; i < iNoPrimos; i++){
        matriz[indice / 10][indice % 10] = noPrimos[i];
        indice++;
    }

    */

    // IMprimir la matriz
    cout << "Matriz de 10x10 ordenada de mayor a menor (No primos - primos)"<< endl;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
