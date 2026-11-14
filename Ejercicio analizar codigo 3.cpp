/*
4.6 ¿Qué hace este código?
¿Qué hace el siguiente programa?
*/

#include <iostream>
using namespace std;

int main() {
    for (int i{ 1 }; i <= 10; i++) {
        for (int j{ 1 }; j <= 5; j++) {
            cout << '@';
        }

        cout << '\n';
    }
}

/*
Este programa lo que hace es mostrar un total de 50 veces el caracter “@”, en 10 filas
y 5 veces por fila. El primer for se encarga de repetir lo 10 veces, y el segundo for 
se encarga de reproducir en cada fila 5 veces el caracter, se reproduce 5 veces por fila
porque el segundo for se encuentra dentro del primero, y muestra “@” porque el cout dentro 
del bucle lo manda.


*/