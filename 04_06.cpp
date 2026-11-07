#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}
/*El programa utiliza dos bucles for anidados 
    para imprimir un rectángulo de símbolos. 
    El bucle externo controla las 10 filas, 
    mientras que el bucle interno imprime 5 
    símbolos @ en cada una de ellas. */
