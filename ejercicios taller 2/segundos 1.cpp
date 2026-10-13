#include <iostream>
using namespace std;

int main() {
    int segundos;
    cout << "Ingrese los segundos:" ;
    cin >> segundos;
    
    int horas;
    int minutos;
    int segundosRestantes;
    
    
    
    if (segundos < 0) {
        cout << "El numero no puede ser negativo. ";
    } else {horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = segundos % 60;
    
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundosRestantes << endl;
    }
    

    return 0;
}