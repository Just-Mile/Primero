#include <iostream>

using namespace std;
int sumapares(int arr[], int tam){
    if (tam == 0)
        return 0;
    else{
        if (arr[tam-1] % 2 == 0)
            return arr[tam-1] + sumapares(arr, tam-1);
        return sumapares(arr, tam-1);
    }
}


int main()
{
    int arr[] = {10, 27, 30, 41, 57};

    for  (int i = 0; i < 5; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    cout << sumapares(arr, 5) << endl;
    return 0;
}
