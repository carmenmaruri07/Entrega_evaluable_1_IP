#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand() % 2; // 0 = Tails, 1 = Heads
}

int main() {
    int caras = 0;
    int cruces = 0;

    srand(static_cast<unsigned int>(time(0)));

    for (int lanzamiento = 1; lanzamiento <= 100; ++lanzamiento) {
        int resultado = flip();

        if (resultado == 1) {
            cout << "Heads" << endl;
            ++caras;
        }
        else {
            cout << "Tails" << endl;
            ++cruces;
        }
    }

    cout << "\nHeads: " << caras << endl;
    cout << "Tails: " << cruces << endl;

    return 0;
}