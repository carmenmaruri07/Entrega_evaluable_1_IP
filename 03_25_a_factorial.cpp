#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

int main() {
    int n;
    cpp_int factorial = 1;
    int contador = 1;

    cout << "Introduce un entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "El numero no debe ser negativo." << endl;
        return 0;
    }

    while (contador <= n) {
        factorial *= contador;
        ++contador;
    }

    cout << n << "! = " << factorial << endl;
    return 0;
}
