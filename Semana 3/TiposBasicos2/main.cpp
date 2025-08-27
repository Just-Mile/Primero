#include <iostream>

using namespace std;

int main()
{
    /*tipos de datos apra eneteros
    comentario largo

    -short (en memoria RAM ocupa 2 bytes) MAX 65535
    -int = long  (en memoria RAM ocupa 4 bytes)
    -long long  (en memoria RAM ocupa 8 bytes)
    - Bool 1 bye
    - Char 1 byte


    en binario:
    2 = 10
    3 = 011
    4 = 100
    10 =1010
    255 = 11111111
    256 = 00000001 00000000

    */

    //unsigned short val1 = 65534;  //sin signo
    char car = '0';
    int val = static_cast <int>(car);
    cout <<sizeof(car) << endl;

    int result = val - '0';
    cout << "El valor entero es "<< val << endl;
    cout << result << endl;


    return 0;
}
