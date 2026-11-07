#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_TERMINOS = 200000;
    double pi = 0.0;
    double signo = 1.0;
    int termino = 1;
    int primero = 0;

    cout << "Precision: " << MAX_TERMINOS << " terminos" << endl;
    cout << "Termino\tPi aproximado" << endl;

    while (termino <= MAX_TERMINOS) {
        pi += signo * 4.0 / (2 * termino - 1);

        // Mostrar los primeros cinco valores y despues cada 10000.
        if (termino <= 5 || termino % 10000 == 0) {
            cout << termino << "\t" << fixed << setprecision(8) << pi << endl;
        }

        if (primero == 0 && pi >= 3.14159 && pi < 3.14160) {
            primero = termino;
        }

        signo = -signo;
        ++termino;
    }

    cout << "Primer termino cuyo valor empieza por 3.14159: "
        << primero << endl;

    return 0;
}