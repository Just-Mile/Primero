#include <iostream>

using namespace std;
void Cuadrado(int n){
for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                std::cout << " *";
            } // de j
            std::cout << " "<< endl;
        } // de i

}

void CuadradoH(int n){
for (int i = 1; i <= n; i++){
    if (i == 1 || i == n)
        for (int z = 1; z <= n; z++){
               std::cout << " 1";
        }

        else{

        for (int j = 1; j <= n; j++){
            if (j == 1 || j == n)
               std::cout << " 1";

            else
                std::cout << "  ";
             }// de j
        } // de else

        std::cout << " "<< endl;
        } // de i

}

void Bandera(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int z = 0; z < n; z++) {
                if (j == 1)
                    cout << " 0";
                else
                    cout << " 1";
            }
        }
        cout << endl;
    }
}

void Rombo(int n){

    if (n%2 == 0) n++;

    int pivot = n/2;
    int vacio = n - pivot -1;
    int lleno = 1;

    for (int i = 0; i < n; i++){

            for (int j = 0; j < vacio; j++){
                std::cout << "  ";}

            for (int j = 0; j < lleno; j++){
                std::cout << " 1";}

            for (int j = 0; j < vacio; j++){
                std::cout << "  ";}

        if (i < pivot){
            vacio = vacio - 1;
            lleno = lleno + 2;
        }
        else{

            vacio = vacio + 1;
            lleno = lleno - 2;
        }
          std::cout << " "<< endl;
    }
} // de la función


void RomboH(int n){

    if (n%2 == 0) n++;

    int pivot = n / 2;
    int izq = pivot;
    int der = pivot;


    for (int i = 0; i < n; i++){

        for (int j = 0; j < n; j++){

            if (j == izq || j == der)
                std::cout << " 1";

            else
                std::cout << "  ";
        }
        std::cout << " "<< endl;


        if (i < pivot){
            izq--;
            der++;
        }
        else{

            izq++;
            der--;
        }
    }


} // de la función


int main()
{


    int n = 0;
    std::cout << "Ingrese numero de lados" << endl;
    std::cin >> n;
    Bandera(n);


    return 0;
}
