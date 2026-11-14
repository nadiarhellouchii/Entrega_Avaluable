/*
5.6  Números aleatorios
Escribe instrucciones que asignen a la variable n enteros aleatorios comprendidos 
en los siguientes intervalos:
a) 1 ≤ n ≤ 2
b) 1 ≤ n ≤ 100
c) 0 ≤ n ≤ 9
d) 1000 ≤ n ≤ 1112
e) −1 ≤ n ≤ 1
f) −3 ≤ n ≤ 11
*/

#include <iostream>
#include <cstdlib>   // para los números aleatorios
#include <ctime>     // usa la hora como semilla para los números aleatorios
using namespace std;

int main() {
    int n;   
    srand(time(0));

	//solo puede ser 1 o 2, hay 2 números
    n = 1 + rand() % 2;
    cout << "a) n = " << n << endl;

    // entre 1 y 100, hay 100 números
    n = 1 + rand() % 100;
    cout << "b) n = " << n << endl;

    // del 0 al 9,hay 10 números
    n = rand() % 10;
    cout << "c) n = " << n << endl;

	// del 1000 al 1112, hay 1112 - 1000 + 1 = 113 números
    n = 1000 + rand() % 113;
    cout << "d) n = " << n << endl;

    // del -1 al 1, hay 3 números (-1, 0 y 1)
    n = -1 + rand() % 3;
    cout << "e) n = " << n << endl;

    // f) del -3 al 11, hay 11 - (-3) + 1 = 15 números
    n = -3 + rand() % 15;
    cout << "f) n = " << n << endl;

    return 0;
}