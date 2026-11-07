#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    int terminos;
    int contador = 1;
    double potencia = 1.0;
    double factorial = 1.0;
    double resultado = 1.0;

    cout << "Introduce el valor de x: ";
    cin >> x;
    cout << "Numero de terminos: ";
    cin >> terminos;

    if (terminos < 1) {
        cout << "Debes introducir al menos un termino." << endl;
        return 0;
    }

    while (contador < terminos) {
        potencia *= x;
        factorial *= contador;
        resultado += potencia / factorial;
        ++contador;
    }

    cout << fixed << setprecision(10);
    cout << "Aproximacion de e^" << x << ": " << resultado << endl;
    return 0;
}