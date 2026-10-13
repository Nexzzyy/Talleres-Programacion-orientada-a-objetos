
#include <iostream>
using namespace std;

int main() {
    double valorHora;
    int horas;
    int horasNormales, horasExtra, horasDobles;
    double salarioBruto, descuento, salarioNeto;

    cout << "Ingrese el valor de la hora: ";
    cin >> valorHora;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;

    if (valorHora <= 0 || horas < 0) {
        cout << "Error: los datos no son validos." << endl;
    }
    else {
        if (horas <= 40) {
            horasNormales = horas;
            horasExtra = 0;
            horasDobles = 0;
        }
        else if (horas <= 48) {
            horasNormales = 40;
            horasExtra = horas - 40;
            horasDobles = 0;
        }
        else {
            horasNormales = 40;
            horasExtra = 8;
            horasDobles = horas - 48;
        }

        salarioBruto = horasNormales * valorHora
                     + horasExtra * valorHora * 1.5
                     + horasDobles * valorHora * 2;

        if (salarioBruto > 2000000) {
            descuento = salarioBruto * 0.08;
        }
        else {
            descuento = salarioBruto * 0.04;
        }

        salarioNeto = salarioBruto - descuento;

        cout << "Horas normales: " << horasNormales << endl;
        cout << "Horas extra: " << horasExtra << endl;
        cout << "Horas dobles: " << horasDobles << endl;
        cout << "Salario bruto: " << salarioBruto << endl;
        cout << "Descuento: " << descuento << endl;
        cout << "Salario neto: " << salarioNeto << endl;
    }

    return 0;
}
