#include <iostream>
using namespace std;

int main() {
    int count = 1;

    while (count <= 10) {                   
        if (count % 2 == 1) {
            cout << "*****" << endl;
        }
        else {
            cout << "+++++++" << endl;
        }
        ++count;
    }

    return 0;
}
/* El programa utiliza un bucle while que se repite 10 veces. 
    En cada iteración, comprueba si la variable count es impar mediante el operador 
    condicional count % 2 == 1; si es cierto, imprime cinco asteriscos (*****), 
    y si es falso (o sea número par), imprime nueve signos de más (*********), 
    intercalando ambos patrones de forma alternada hasta que termina el ciclo. */