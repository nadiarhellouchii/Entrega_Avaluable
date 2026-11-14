/*

5.18  Inversión de cifras
Escribe una función que reciba un valor entero y devuelva el número con sus cifras en orden inverso. Por ejemplo, si recibe el número 7631, la función debe devolver 1367.

*/

#include <iostream>
using namespace std;

//para invertir el numero que el usuario introduzca
int invertir(int numero) {
    int invertido = 0;   
    int cifra;           

	//repite la inversión hasta que el numero sea 0
    while (numero > 0) {
		cifra = numero % 10; //coge la última cifra del número
		numero = numero / 10; //quita la última cifra del número
		invertido = invertido * 10 + cifra; //ponle la cifra al final del número invertido
    }

    return invertido;
}

int main() {
    int numero;

    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: el numero tiene que ser positivo." << endl;
		cout << "Introduce un numero entero positivo: ";
		cin >> numero;
    }

    cout << "El numero invertido es: " << invertir(numero) << endl;

    return 0;
}