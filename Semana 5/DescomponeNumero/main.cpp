#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> num;
// 67989
    cout << num/1000 << endl;
    cout << (num%1000)/100 << endl;
    cout << (num%100)/10; << endl;
    cout << num%10;
    return 0;
}
