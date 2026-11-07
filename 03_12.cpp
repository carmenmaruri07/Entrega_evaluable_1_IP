#include <iostream>
using namespace std;

int main() {
    int row = 10;

    while (row >= 1) {
        int column = 1;

        while (column <= 10) {
            if (row % 2 == 1) {
                cout << "<";
            }
            else {
                cout << ">";
            }
            ++column;
        }

        --row;
        cout << endl;
    }

    return 0;
}
/* El programa utiliza dos bucles para generar una cuadrícula de 10 por 10. 
    El bucle externo controla las filas de forma descendente, 
    dependiendo de si el número de la fila es impar o par, 
    imprime una línea completa con diez símbolos < o diez símbolos >, 
    respectivamente.*/