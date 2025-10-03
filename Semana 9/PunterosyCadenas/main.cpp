#include <iostream>

using namespace std;
int contarCaracteres(char *ptr, char car){
    if (*ptr == '\0'){
        return 0;
    }

    else{
        if (*ptr == car)
            return 1 + contarCaracteres(++ptr, char car);
    }
}

int main()
{
    char cad[] = "Ciencia de la COmputacion";
    contarCaracteres(cad, 'e');
    return 0;
}
