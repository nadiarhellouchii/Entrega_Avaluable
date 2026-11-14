/* 
b) Escribe un programa que estime el valor de la constante matemática e mediante la fórmula: 
e = 1 + 1/1! + 1/2! + 1/3! + … 
Solicita al usuario la precisión deseada para e, es decir, el número de términos de la suma. 
*/


#include <iostream>   
using namespace std;  

int main() {
   
    int numTerminos;  

    cout << "Introduce el numero de terminos que quieres calcular: ";
    cin >> numTerminos;  

    // Necesitamos al menos 1 término para poder calcular algo
    if (numTerminos < 1) {
        cout << "Error: debe haber al menos 1 termino." << endl;
		cout << "Introduce otro numero de terminos mayor o igual a 1: ";
		cin >> numTerminos;
    }


    // La serie es: e = 1/0! + 1/1! + 1/2! + 1/3! + ...
    // El primer término es 1/0! = 1, así que empezamos con la suma en 1.
    double e = 1.0;
    double termino = 1.0;

    for (int i = 1; i < numTerminos; ++i) {

        // en vez de calcular el factorial entero cada vez, usamos el término anterior.
        // 1/i! = (1/(i-1)!) / i
        termino = termino / i;

        // Sumamos el término nuevo al resultado
        e = e + termino;
    }

    cout << "Aproximacion de e con " << numTerminos << " terminos: " << e << endl;

    return 0;  
}