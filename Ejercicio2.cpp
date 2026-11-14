/* 
c) Escribe un programa que calcule el valor de eˣ mediante la fórmula:
eˣ = 1 + x/1! + x²/2! + x³/3! + …
Solicita al usuario la precisión deseada para e, es decir, el número de términos de la suma.    
*/

#include <iostream>
using namespace std;

int main() {
    double x;
    int numTerminos;

	//Valor del exponente y cantidad de terminos a calcular
    cout << "Introduce el valor de x: ";
    cin >> x;
    cout << "Introduce el numero de terminos de la serie: ";
    cin >> numTerminos;

	// Necesitamos al menos un término para calcular la serie
    if (numTerminos < 1) {
        cout << "Error: debe haber al menos 1 termino.\n";
		cout << "Introduce un número de terminos mayor o igual a 1: ";
		cin >> numTerminos;
    }

    // La serie es e^x = x^0/0! + x^1/1! + x^2/2! + x^3/3! + ...
    // El primer término es x^0/0! = 1/1 = 1, así que empezamos con la suma en 1.
    double resultado = 1.0;  

    // Aquí guardamos el valor del último término calculado (x^i / i!)
    double termino = 1.0;   

    for (int i = 1; i < numTerminos; ++i) {

        // En vez de calcular x^i y i! enteros cada vez, usamos el término anterior.
        // x^i/i! = (x^(i-1)/(i-1)!) * (x/i)
        // Multiplicamos el término anterior por x y lo dividimos entre i.
        termino = termino * (x / i);

		// Sumamos el nuevo término al resultado, que seria el termino anterior más el nuevo término calculado.
        resultado = resultado + termino;
    }

    cout << "e^" << x << " con " << numTerminos << " terminos: " << resultado << endl;
}

