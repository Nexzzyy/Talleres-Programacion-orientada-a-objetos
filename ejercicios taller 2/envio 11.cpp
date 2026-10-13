
#include <iostream>
using namespace std;

int main() {
    double peso, distancia, tarifa;
    int zona;
    char fragil;

    cout << "Ingrese el peso en kg: ";
    cin >> peso;

    cout << "Ingrese la distancia en km: ";
    cin >> distancia;

    cout << "Ingrese la zona (1 nacional, 2 internacional): ";
    cin >> zona;

    cout << "El paquete es fragil? (S/N): ";
    cin >> fragil;

    if (peso <= 0 || distancia <= 0 || peso > 30 ||
        (zona != 1 && zona != 2) ||
        (fragil != 'S' && fragil != 's' &&
         fragil != 'N' && fragil != 'n')) {
        cout << "Error: los datos no son validos." << endl;
    }
    else {
        tarifa = 8000 + peso * 1200 + distancia * 50;

        if (zona == 2) {
            tarifa = tarifa * 1.5;
        }

        if (fragil == 'S' || fragil == 's') {
            tarifa = tarifa * 1.20;
        }

        cout << "Valor final del envio: " << tarifa << endl;
    }

    return 0;
}

