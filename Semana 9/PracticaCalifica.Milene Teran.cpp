#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

//funcion para saber si es minuscula, mayuscula o num
int tipoCaracter(char c) {
    if (c >= 'a' && c <= 'z') return 1; // minúscula
    if (c >= 'A' && c <= 'Z') return 2; // mayúscula
    if (c >= '0' && c <= '9') return 3; // número
    return 0;
}


//funcion para ordenar los caracteres, ya sea ascendente o descendente
void ordenarCaracteres(char arr[], int n, bool ascendente = true) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            bool condicion;
            if (ascendente) {
                condicion = arr[j] > arr[j+1];
            } else {
                condicion = arr[j] < arr[j+1];}

            if (condicion) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//func. para imprimir la matriz
void imprimirMatriz(char matriz[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}


int main()
{
    char matriz[8][8];
    char mayu[64];
    char minu[64];
    char num[64];

    srand(time(0));

    //llenar los arrays unidimensionales aleatoriamente
    for (int i = 0; i < 64; i++) {
        int tipo = rand() % 3;
        switch (tipo) {
          case 0: // Mayúsculas
            mayu[i] = 'A' + rand() % 26;
            break;
          case 1: // Minúsculas
            minu[i] = 'a' + rand() % 26;
            break;
          case 2: // Números
            num[i] = '0' + rand() % 10;
            break;
        }
    }

    int iMayu = 0;
    int iMinu = 0;  // Corregido: era iMin
    int iNum = 0;

    //llenar matriz con caracteres aleatorios
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int option = rand() % 3;
            switch (option) {
                case 0:
                    matriz[i][j] = mayu[iMayu];
                    iMayu++;
                    break;
                case 1:
                    matriz[i][j] = minu[iMinu];  // Corregido: era iMin
                    iMinu++;  // Corregido: era iMin
                    break;
                case 2:
                    matriz[i][j] = num[iNum];
                    iNum++;
                    break;
                default:
                    cout << "Nunca debio pasar" << endl;
          }
        }
    }

    cout << "Matriz original" << endl;
    imprimirMatriz(matriz);

    int contMin = 0;
    int contMay = 0;
    int contNum = 0;
    char minusculas[64];
    char mayusculas[64];
    char numeros[64];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int tipo = tipoCaracter(matriz[i][j]);
            switch (tipo) {
               case 1: // minúscula
                    minusculas[contMin] = matriz[i][j];
                    contMin++;
                     break;
              case 2: // mayúscula
                    mayusculas[contMay] = matriz[i][j];
                    contMay++;
                     break;
              case 3: // número
                    numeros[contNum] = matriz[i][j];
                    contNum++;
                     break;
           }
        }
    }

    // ordenar los arrayas de minusuclas, mayusculas y numeros, dependiendo si van en orden ascendente o descendente
    ordenarCaracteres(minusculas, contMin, true);        // ascendente
    ordenarCaracteres(mayusculas, contMay, false);       // descendente
    ordenarCaracteres(numeros, contNum, true);           // ascendente


   // Reconstruir la matriz
    int indice = 0;
    for (int i = 0; i < contMin; i++) {
        matriz[indice / 8][indice % 8] = minusculas[i];
        indice++;
    }

    for (int i = 0; i < contMay; i++) {
        matriz[indice / 8][indice % 8] = mayusculas[i];
        indice++;
    }

    for (int i = 0; i < contNum; i++) {
        matriz[indice / 8][indice % 8] = numeros[i];
        indice++;
    }

    cout << "Matriz ordenada:" << endl;
    imprimirMatriz(matriz);


    return 0;
}
