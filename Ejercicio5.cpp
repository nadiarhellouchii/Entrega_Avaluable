/*
4.15  Cálculo del valor de π
Calcula el valor de π a partir de la serie infinita:
π = 4 − 4/3 + 4/5 − 4/7 + 4/9 − 4/11 + …
Muestra una tabla como la que aparece a continuación con las aproximaciones de π obtenidas al calcular los
primeros 200 000 términos de esta serie. ¿Cuántos términos debes utilizar hasta obtener por primera vez un
valor que empiece por 3.14159?

*/

#include <iostream>
#include <iomanip>   // Para mostrar 6 decimales
using namespace std;

int main() {
    double pi = 0;         // Aquí se suman los términos
	int denominador;       // para guardar los números impares 1, 3, 5, 7...
	int primeraVez = 0;    // Cuantos terminos han hecho faltahasta que apareca 3.14159

    cout << fixed << setprecision(6);  

    // La serie es: pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - ...
    for (int i = 1; i <= 200000; ++i) {

        //para que el denominador sea impar
        denominador = 2 * i - 1;

		// los terminos impares se suman y los pares se restan
        if (i % 2 == 1) {
            pi = pi + 4.0 / denominador;
        }
        else {
            pi = pi - 4.0 / denominador;
        }

        // Mostramos una fila de la tabla cada término
        if (i % 1 == 0) {
            cout << i << " terminos: " << pi << endl;
        }

        // Primer valor que empieza por 3.14159

        if (primeraVez == 0 && pi >= 3.14159 && pi < 3.14160) {
            primeraVez = i;
        }
    }
  
    cout << endl;
    cout << "Primer valor que empieza por 3.14159 con " << primeraVez << " terminos." << endl;

    return 0;
}
