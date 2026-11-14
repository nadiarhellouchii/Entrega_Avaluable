/*

3.11. ¿Qué muestra en pantalla el siguiente programa?

*/

#include <iostream>
using namespace std;

int main() {
    int count{ 1 };

    while (count <= 10) {
        cout << (count % 2 == 1 ? "****" : "++++++++") << "\n";
        ++count;
    }
}

/*
El programa muestra 10 líneas de código, alterando entre cuatro asteriscos (****) y 
ocho signos de suma (++++++++), cuando el resto de la división de count entre 2 es 
igual a 1, quiere decir que count es impar y entonces el programa muestra los 
asteriscos, después si el número es par, osea el resto de la división es diferente 
de 1, count es par y por lo tanto muestra los signos de suma. se muestran díez líneas 
porque el bucle while se repite cuando count es igual o menor a 10, count sería el
contador.


*/