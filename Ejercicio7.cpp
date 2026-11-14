/*
5.1  Evaluación de expresiones
Indica el valor de x después de ejecutar cada una de las instrucciones siguientes.

5.1 Show the value of x after each of the following statements is performed:
a) x = fabs(7.5);
b) x = floor(7.5);
c) x = fabs(0.0);
d) x = ceil(0.0);
e) x = fabs(-6.4);
f) x = ceil(-6.4);
g) x = ceil(-fabs(-8 + floor(-5.5)));

*/

#include <iostream>
#include <cmath>   // Para usar fabs, floor y ceil
using namespace std;

int main() {
    double x;   // Aquí guardamos el resultado de cada apartado

    // fabs(): valor absoluto (quita el signo negativo)
    // floor(): redondea hacia abajo
    // ceil(): redondea hacia arriba

    // a)
    x = fabs(7.5);
    cout << "a) x = " << x << endl;

	//b)
    x = floor(7.5);
    cout << "b) x = " << x << endl;

	//c)
    x = fabs(0.0);
    cout << "c) x = " << x << endl;

	//d)
    x = ceil(0.0);
    cout << "d) x = " << x << endl;

	//e)
    x = fabs(-6.4);
    cout << "e) x = " << x << endl;
    
	//f)
    x = ceil(-6.4);
    cout << "f) x = " << x << endl;

	//g)
    //lo hacemos por partes 
    x = floor(-5.5);      
    x = -8 + x;
    x = - (fabs(x));
    x = ceil(x);
    cout << "g) x = " << x << endl;

    return 0;
}