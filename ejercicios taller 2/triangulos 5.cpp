
#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3;
    double perimetro;

    cout << "Ingrese el primer lado: ";
    cin >> lado1;

    cout << "Ingrese el segundo lado: ";
    cin >> lado2;

    cout << "Ingrese el tercer lado: ";
    cin >> lado3;

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Error: los lados deben ser positivos." << endl;
    }
    else if (lado1 + lado2 <= lado3 ||
             lado1 + lado3 <= lado2 ||
             lado2 + lado3 <= lado1) {
        cout << "Los lados no forman un triangulo." << endl;
    }
    else {
        perimetro = lado1 + lado2 + lado3;

        cout << "Perimetro: " << perimetro << endl;

        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Triangulo equilatero" << endl;
        }
        else if (lado1 == lado2 ||
                 lado1 == lado3 ||
                 lado2 == lado3) {
            cout << "Triangulo isosceles" << endl;
        }
        else {
            cout << "Triangulo escaleno" << endl;
        }
    }

    return 0;
}
