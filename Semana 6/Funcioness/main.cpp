#include <iostream>

using namespace std;

int potencia(int base, int expo){
    int result = 1;

    for (int i = 0; i < expo; i++){
        result = result * base;
    }
return result;

}

int main()
{
    int resultado = potencia (4, 4);
    cout << resultado << endl;
    return 0;
}
