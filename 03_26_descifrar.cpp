#include <iostream>
using namespace std;

int main() {
    int numero;
    int cifras[4];

    cout << "Introduce el numero cifrado de cuatro cifras: ";
    cin >> numero;

    if (numero < 1000 || numero > 9999) {
        cout << "El numero debe tener cuatro cifras." << endl;
        return 0;
    }

    for (int i = 3; i >= 0; --i) {
        cifras[i] = numero % 10;
        numero /= 10;
    }

    // Deshacer primero los intercambios.
    int temporal = cifras[0];
    cifras[0] = cifras[2];
    cifras[2] = temporal;

    temporal = cifras[1];
    cifras[1] = cifras[3];
    cifras[3] = temporal;

    // Deshacer la suma de 7.
    for (int i = 0; i < 4; ++i) {
        cifras[i] = (cifras[i] + 3) % 10;
    }

    cout << "Numero original: ";
    for (int i = 0; i < 4; ++i) {
        cout << cifras[i];
    }
    cout << endl;

    return 0;
}