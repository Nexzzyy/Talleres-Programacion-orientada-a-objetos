
#include <iostream>
using namespace std;

int main() {
    double saldo, monto;
    int opcion;

    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;

    if (saldo < 0) {
        cout << "Error: el saldo no puede ser negativo." << endl;
    }
    else {
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Consignar dinero" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo es: " << saldo << endl;
                break;

            case 2:
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;

                if (monto <= 0) {
                    cout << "El monto debe ser positivo." << endl;
                }
                else if (monto > saldo) {
                    cout << "No tiene suficiente saldo." << endl;
                }
                else {
                    saldo = saldo - monto;
                    cout << "Saldo nuevo: " << saldo << endl;
                }
                break;

            case 3:
                cout << "Ingrese el monto a consignar: ";
                cin >> monto;

                if (monto <= 0) {
                    cout << "El monto debe ser positivo." << endl;
                }
                else {
                    saldo = saldo + monto;
                    cout << "Saldo nuevo: " << saldo << endl;
                }
                break;

            default:
                cout << "Opcion no valida." << endl;
        }
    }

    return 0;
}
