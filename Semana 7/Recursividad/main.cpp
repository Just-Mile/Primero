#include <iostream>

using namespace std;

long long factorial(long n) {
    if(n == 0 || n == 1)
       return 1;
    else
        return n * factorial(n-1);
}

long long fibonacci(long n){
    if(n == 0 || n == 1)
       return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

long long contar (long n){
    if ( n < 10)
        return 1;
    else
        return 1 + contar(n/10);
    }

int capi(long n){
    int canti = contar(n);
    if (n<10)
        return 1;

    else{
        int ini = n/(10*(canti-1));
        int finall = n % 10;

        if( ini != finall)
            return 0;

        n = n % (10 * (canti-1));
        n = n / 10;
        return capi(n);
        }

}

int main(){
    if (capi(13231) == 1)
        cout << "SI" << endl;

    else
        cout << "NO" << endl;

    return 0;
}
