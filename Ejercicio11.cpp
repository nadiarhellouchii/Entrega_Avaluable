/*
5.21  Lanzamiento de una moneda 
Escribe un programa que simule lanzamientos de una moneda. 
En cada lanzamiento, el programa debe mostrar Heads o Tails 
(«cara» o «cruz»). Haz que lance la moneda 100 veces y cuente 
cuántas veces aparece cada cara de la moneda. Muestra los resultados. 

El programa debe llamar a una función independiente llamada flip, que no reciba 
argumentos y devuelva 0 para cruz y 1 para cara. [Nota: si el programa simula de 
forma realista el lanzamiento de una moneda, cada cara debería aparecer aproximadamente 
la mitad de las veces.]
*/

#include <iostream>
#include <cstdlib> //para generar números aleatorios
#include <ctime> //para usar el tiempo como semilla para generar números aleatorios
using namespace std;

//para generar un nimero aleatorio que solo puede ser 1 y 0
int flip() {
    return rand() % 2;
}

int main() {
    int resultado;
    int vecesCara = 0;
    int vecesCruz = 0;

	//usa la hora actual como semilla 
    srand(time(0));

    for (int i = 1; i <= 100; ++i) {

        resultado = flip();

        if (resultado == 1) {
            cout << "Cara" << endl;
            vecesCara = vecesCara + 1;
        }
        else {
            cout << "Cruz" << endl;
            vecesCruz = vecesCruz + 1;
        }
    }

    cout << endl;
    cout << "Resultados de 100 lanzamientos:" << endl;
    cout << "Cara: " << vecesCara << endl;
    cout << "Cruz: " << vecesCruz << endl;

    return 0;
}