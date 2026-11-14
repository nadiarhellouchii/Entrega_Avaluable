/* 3.26 Protección de la privacidad mediante criptografía
Una empresa que desea enviar datos por Internet te ha pedido 
que escribas un programa que los cifre para transmitirlos de 
forma más segura. Todos los datos se transmiten como enteros 
de cuatro cifras. Tu aplicación debe leer un entero de cuatro 
cifras introducido por el usuario y cifrarlo de la siguiente 
manera: sustituye cada cifra por el resto de dividir entre 10 
el resultado de sumarle 7. Después, intercambia la primera cifra 
con la tercera y la segunda con la cuarta. A continuación,
muestra el entero cifrado. Escribe otra aplicación que lea un 
entero cifrado de cuatro cifras y lo descifre, invirtiendo el 
procedimiento de cifrado, para recuperar el número original. 
*/ 

#include <iostream>
using namespace std;

int main() {
    int opcion;          
    int numero;          
	int resultado = 0;   // Para construir el resultado
    int ordenador = 1; // Para colocar las cifras en su sitio
    int cifra;           

   
    cout << "1. Cifrar un numero de 4 cifras" << endl;
    cout << "2. Descifrar un numero de 4 cifras" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    if (opcion != 1 && opcion != 2) {
        cout << "Error: opcion no valida." << endl;
		cout << "Elige 1 para cifrar o 2 para descifrar." << endl;
		cin >> opcion;
    }

    cout << "Introduce un numero de 4 cifras (0000-9999): ";
    cin >> numero;

    if (numero < 0 && numero > 9999) {
        cout << "Error: el numero tiene que tener 4 cifras." << endl;
		cout << "Introduce un numero de 4 cifras (0000-9999): ";
		cin >> numero;
    }

    if (opcion == 1) {

    
        // 
        for (int i = 0; i < 4; ++i) {
			cifra = numero % 10;    // Para consegui la última cifra del número
			numero = numero / 10;   // Para quedarnos solo con con el número sin la última cifra
            cifra = (cifra + 7) % 10;  // Sumamos 7 y nos quedamos con el resto de dividir entre 10
			resultado = resultado + cifra * ordenador;  // Para poner la cifra en su sitio
            ordenador = ordenador * 10;  // Pasamos a la siguiente posición
        }

        //Intercambiamos las dos primeras cifras con las dos últimas
        resultado = (resultado % 100) * 100 + resultado / 100;

		// Mostramos las cifras una a una para que en caso de que haya un 0 al principio se vea.
        cout << "Numero cifrado: " << resultado / 1000 << (resultado / 100) % 10 << (resultado / 10) % 10 << resultado % 10 << endl;
    }

  
    if (opcion == 2) {

		// Recolocamos las dos primeras cifras con las dos últimas para volver a la posición original
        numero = (numero % 100) * 100 + numero / 100;

        // Después deshacemos la suma de 7 sumando 3 (porque 7 + 3 = 10)
        for (int i = 0; i < 4; ++i) {
            cifra = numero % 10; // Para conseguir la última cifra del número
			numero = numero / 10; // Para quedarnos solo con con el número sin la última cifra
			cifra = (cifra + 3) % 10; // sumamos 3 para que nos de la cifra original
			resultado = resultado + cifra * ordenador; // Para poner la cifra en su sitio
			ordenador = ordenador * 10; // Pasamos a la siguiente posición
        }

        // Mostramos las cifras una a una para que en caso de que haya un 0 al principio se vea.
        cout << "Numero original: " << resultado / 1000  << (resultado / 100) % 10 << (resultado / 10) % 10 << resultado % 10 << endl;
    }

    return 0;
}