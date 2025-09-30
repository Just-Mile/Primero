#include <iostream>

using namespace std;

int maximo(int arr[], int tam, int maxi){
        if (tam == 0)
            return 0;
        else if (tam == 1)
            return arr[tam-1];
        else{
            int num = arr[tam - 1];
            if (num < maxi)
                return maximo(arr, tam-1, num);
            else
                return maximo(arr, tam-1, maxi);
        }


}
int sumar(int arr[], int tam){

    if (tam == 0)
        return 0;
    else{
        return arr[tam-1] + sumar(arr, tam -1);
    }
    }


void pasopr(int &x, int &y){
int temp = x;
    x = y;
    y = temp;}

void invertir(int arr[], int inicio, int finall){
    if (inicio >= finall)
        return;

    pasopr(arr[inicio], arr[finall]);

    invertir(arr, inicio + 1, finall - 1);
}


void swapp(int arr[], int inicio, int finall){
    if (inicio >= finall)
        return;

    swap(arr[inicio], arr[finall]); //utilizando paso por referencia swap(x, y)

    invertir(arr, inicio + 1, finall - 1);
}



int main()
{



    int arr[] = {10, 20, 30, 40, 50};

    for  (int i = 0; i < 5; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    cout << maximo(arr, 5, 50) << endl;



    return 0;
}
