
#include <iostream>
using namespace std;

int main() {
    double peso, estatura, imc;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    if (peso <= 0 || estatura <= 0) {
        cout << "Error: los datos deben ser mayores que cero." << endl;
    }
    else {
        imc = peso / (estatura * estatura);

        cout << "Su IMC es: " << imc << endl;

        if (imc < 18.5) {
            cout << "Bajo peso" << endl;
        }
        else if (imc < 25) {
            cout << "Normal" << endl;
        }
        else if (imc < 30) {
            cout << "Sobrepeso" << endl;
        }
        else {
            cout << "Obesidad" << endl;
        }
    }

    return 0;
}

