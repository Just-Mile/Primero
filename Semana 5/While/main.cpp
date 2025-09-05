#include <iostream>

using namespace std;

int main()
{


     /**int i = 1;
    while (i*3 < 100){
        cout << i*3 << endl;
        i = i + 1;
    }
    **/
    long long n; i = 2; d=0;
    while (i*i <= n){
        if (n%i==0){
            d++;
            break;
        }
        i++;
    }
    cout << ( (d==0) ? << "primo": "No primo");


   return 0;
}
