
#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3;
    double promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    if (nota1 < 0 || nota1 > 5 ||
        nota2 < 0 || nota2 > 5 ||
        nota3 < 0 || nota3 > 5) {
        cout << "Error: las notas deben estar entre 0 y 5." << endl;
    }
    else {
        promedio = nota1 * 0.30 + nota2 * 0.30 + nota3 * 0.40;

        cout << "Promedio: " << promedio << endl;

        if (promedio >= 4.5) {
            cout << "Excelente" << endl;
        }
        else if (promedio >= 4.0) {
            cout << "Bueno" << endl;
        }
        else if (promedio >= 3.0) {
            cout << "Aceptable" << endl;
        }
        else {
            cout << "Reprobado" << endl;
        }
    }

    return 0;
}
