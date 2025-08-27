#include <iostream>

using namespace std;

int main()
{
    int val1 = 65535;
    float val2 =2;
    int suma = val1 + val2;
    int resta = val1 - val2;
    int producto = val1*val2;
    float division = val1/val2; //para que la división muestre su parte deciaml es necesario declarar esta y a un valor de los dos valores como float.

    cout<< "La suma es " << suma << endl;
    cout<< "La resta es " << resta << endl;
    cout<< "La producto es " << producto << endl;
    cout<< "La división es " << division << endl;

    return 0;
}
