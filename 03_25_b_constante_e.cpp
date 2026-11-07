#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos;
    int contador = 1;
    double factorial = 1.0;
    double e = 1.0;

    cout << "Numero de terminos: ";
    cin >> terminos;

    if (terminos < 1) {
        cout << "Debes introducir al menos un termino." << endl;
        return 0;
    }

    while (contador < terminos) {
        factorial *= contador;
        e += 1.0 / factorial;
        ++contador;
    }

    cout << fixed << setprecision(10);
    cout << "Aproximacion de e: " << e << endl;
    return 0;
}