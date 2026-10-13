
#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    int diasMes;

    cout << "Ingrese el dia: ";
    cin >> dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el anio: ";
    cin >> anio;

    if (anio <= 0 || mes < 1 || mes > 12) {
        cout << "Fecha no valida." << endl;
    }
    else {
        if (mes == 1 || mes == 3 || mes == 5 ||
            mes == 7 || mes == 8 || mes == 10 ||
            mes == 12) {
            diasMes = 31;
        }
        else if (mes == 4 || mes == 6 ||
                 mes == 9 || mes == 11) {
            diasMes = 30;
        }
        else {
            diasMes = 28;

            if ((anio % 4 == 0 && anio % 100 != 0) ||
                anio % 400 == 0) {
                diasMes = 29;
            }
        }

        if (dia >= 1 && dia <= diasMes) {
            cout << "Fecha valida." << endl;
            cout << "El mes tiene " << diasMes
                 << " dias." << endl;
        }
        else {
            cout << "Fecha no valida." << endl;
        }
    }

    return 0;
}
