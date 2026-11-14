/*
3.12. ¿Qué muestra en pantalla el siguiente programa?
*/
#include <iostream>
using namespace std;

int main() {
    int row{ 10 };

    while (row >= 1) {
        int column{ 1 };

        while (column <= 10) {
            cout << (row % 2 == 1 ? "<" : ">");
            ++column;
        }

        --row;
        cout << "\n";
    }
}


/*
El programa muestra 10 líneas de código, alterando entre diez simbolos de menor que (<) y  
diez simbolos de mayor que (>), cuando el resto de la división de row entre 2 es igual a 1, 
quiere decir que row es impar y entonces el programa muestra los signos menor que (<), si el 
número es par, el resto de la división es diferente de 1, row es par y por lo tanto muestra
los signos de mayor que (>). La variable row comienza valiendo 10, y va disminuyendo hasta 
el uno, por eso el codigo comienza mostrando los simbolos mayor que (>), porque comienza 
en el diez (par) y acaba en uno (impar). El primer bucle es el que se encarga de que se
repita 10 veces y el segundo bucle es el que se encarga de que cada simbolo se repita diez 
veces en cada fila.

*/