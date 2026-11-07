#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand() % 2; // 0 = cruz, 1 = cara
}

int main() {
    int caras = 0;
    int cruces = 0;

    srand(static_cast<unsigned int>(time(0)));

    for (int lanzamiento = 1; lanzamiento <= 100; ++lanzamiento) {
        int resultado = flip();

        if (resultado == 1) {
            cout << "caras" << endl;
            ++caras;
        }
        else {
            cout << "cruces" << endl;
            ++cruces;
        }
    }

    cout << "\nCaras: " << caras << endl;
    cout << "Cruces: " << cruces << endl;

    return 0;
}
