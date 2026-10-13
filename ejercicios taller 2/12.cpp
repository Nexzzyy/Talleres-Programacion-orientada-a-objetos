
#include <iostream>
using namespace std;

int main() {
    double ingreso, deuda;
    double relacion, capacidad;
    int edad, historial;

    cout << "Ingrese el ingreso mensual: ";
    cin >> ingreso;

    cout << "Ingrese la deuda mensual: ";
    cin >> deuda;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "Tiene historial crediticio? (1 si, 0 no): ";
    cin >> historial;

    if (ingreso <= 0 || deuda < 0 ||
        edad < 18 || edad > 100 ||
        (historial != 0 && historial != 1)) {
        cout << "Error: los datos no son validos." << endl;
    }
    else {
        relacion = deuda / ingreso;
        capacidad = ingreso - deuda;

        cout << "Relacion deuda/ingreso: "
             << relacion << endl;

        cout << "Capacidad de pago: "
             << capacidad << endl;

        if (relacion > 0.5 || capacidad < 0) {
            cout << "Riesgo alto." << endl;
        }
        else if (relacion <= 0.3 &&
                 edad >= 25 && historial == 1) {
            cout << "Riesgo bajo." << endl;
        }
        else {
            cout << "Riesgo medio." << endl;
        }
    }

    return 0;
}
