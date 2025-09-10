#include <iostream>
#include <Cmath>
using namespace std;

int main()
{
    long n;
    cout << "Ingrese numero: ";
    cin >> n;

    int numC = n;
    int numDigits = 0;
    while(numC > 0) {
        numC /= 10;
        numDigits++;}

    while(n != 0){
        int ini = n/pow(10, numDigits-1);
        int fin = n % 10;
        n = (n % static_cast<int>(pow(10, numDigits-1))/10); //convertir numero0
        numDigits -= 2;
        cout << ini << endl;
        cout << fin << endl;
        cout << n << endl;
        }



    return 0;
}
