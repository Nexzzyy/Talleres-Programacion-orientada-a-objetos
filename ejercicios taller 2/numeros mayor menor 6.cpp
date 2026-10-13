
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int mayor, menor;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    mayor = num1;
    menor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    }

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    if (num1 == num2 && num2 == num3) {
        cout << "Los tres numeros son iguales." << endl;
    }
    else if (num1 == num2 || num1 == num3 ||
             num2 == num3) {
        cout << "Hay dos iguales y uno distinto." << endl;
    }
    else {
        cout << "Los tres numeros son distintos." << endl;
    }

    return 0;
}