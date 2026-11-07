#include <iostream>
using namespace std;

int main() {
    int producto = 1;

    for (int numero = 1; numero <= 15; numero += 2) {
        producto *= numero;
    }

    cout << "Producto de los impares del 1 al 15: "
        << producto << endl;

    return 0;
}