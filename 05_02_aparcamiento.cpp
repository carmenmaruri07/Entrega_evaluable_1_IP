#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharges(double horas) {
    if (horas <= 3.0) {
        return 20.0;
    }

    int horasAdicionales = static_cast<int>(horas - 3.0);
    if (horas - 3.0 > horasAdicionales) {
        ++horasAdicionales;
    }

    double importe = 20.0 + horasAdicionales * 5.0;

    if (importe > 50.0) {
        importe = 50.0;
    }

    return importe;
}

int main() {
    double horas[3];
    double importes[3];
    double totalHoras = 0.0;
    double totalImporte = 0.0;

    for (int i = 0; i < 3; ++i) {
        cout << "Horas del cliente " << i + 1 << ": ";
        cin >> horas[i];

        importes[i] = calculateCharges(horas[i]);
        totalHoras += horas[i];
        totalImporte += importes[i];
    }

    cout << fixed << setprecision(2);
    cout << "\\nCoche\\tHoras\\tImporte" << endl;

    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << "\\t" << horas[i] << "\\t"
            << importes[i] << endl;
    }

    cout << "TOTAL\\t" << totalHoras << "\\t"
        << totalImporte << endl;

    return 0;
}