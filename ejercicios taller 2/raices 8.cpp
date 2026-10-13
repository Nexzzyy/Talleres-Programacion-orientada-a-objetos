
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double discriminante;
    double x1, x2;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    if (a == 0 && b == 0) {
        cout << "No es una ecuacion lineal ni cuadratica." << endl;
    }
    else if (a == 0) {
        x1 = -c / b;
        cout << "Es una ecuacion lineal." << endl;
        cout << "Valor de x: " << x1 << endl;
    }
    else {
        discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);

            cout << "Primera raiz: " << x1 << endl;
            cout << "Segunda raiz: " << x2 << endl;
        }
        else if (discriminante == 0) {
            x1 = -b / (2 * a);
            cout << "La unica raiz es: " << x1 << endl;
        }
        else {
            cout << "Las raices son complejas." << endl;
        }
    }

    return 0;
}
