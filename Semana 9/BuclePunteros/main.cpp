#include <iostream>

using namespace std;

int main()
{
    int *ptr2;
    int arr[5] = {1, 2, 3, 4, 5};
    ptr2 = arr;
    for (int i=0; i<5; i++, ptr2++){
        cout << *ptr2 << " ";
    }
    cout << endl;

    cout << *(arr+0) << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;

    int *ptr3 = arr+4;
    for (int i = 0; i< 5; i++, ptr3--){
        cout << *ptr3 << " ";
    }
    cout << endl;

    cout<< "--------------------Usando WHile-------------------"<< endl;
    int *ptr4 = arr;
    while (ptr4 < (arr+5)){
           cout << *ptr4 << " ";
           ptr4++;
        }
    cout << endl;

    int *ptr5 = arr+4;
    while (ptr5>=arr){
        cout << *ptr5 << " ";
        ptr5--;
    }
    cout << endl;


    return 0;
}
