#include <iostream>
using namespace std;

int invertirCifras(int numero) {
    int invertido = 0;

    while (numero > 0) {
        int cifra = numero % 10;
        invertido = invertido * 10 + cifra;
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero;

    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    cout << "Numero invertido: " << invertirCifras(numero) << endl;
    return 0;
}