#include <iostream>
using namespace std;

void torresHanoi(int discos, int origen, int destino, int auxiliar) {
    if (discos == 1) {
        cout << origen << " -> " << destino << endl;
    }
    else {
        torresHanoi(discos - 1, origen, auxiliar, destino);
        cout << origen << " -> " << destino << endl;
        torresHanoi(discos - 1, auxiliar, destino, origen);
    }
}

int main() {
    int discos;

    cout << "Numero de discos: ";
    cin >> discos;

    if (discos < 1) {
        cout << "Debe haber al menos un disco." << endl;
        return 0;
    }

    cout << "Movimientos para trasladar los discos de la varilla 1 a la 3:"
        << endl;
    torresHanoi(discos, 1, 3, 2);

    return 0;
}
