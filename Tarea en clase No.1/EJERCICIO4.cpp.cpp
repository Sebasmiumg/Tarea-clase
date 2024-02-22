#include <iostream>
using namespace std;

int main() {
    int n, x =   0, y =   1, z;

    cout << "Ingrese el numero de elementos de la serie de Fibonacci: ";
    cin >> n;

    cout << "Serie de Fibonacci: ";

    // Imprimir los primeros dos números de la serie de Fibonacci
    if (n >   0) {
        cout << x << ", ";
    }
    if (n >   1) {
        cout << y << ", ";
    }

    // Generar y mostrar el resto de la serie de Fibonacci
    for(int i =   2; i < n; ++i) {
        z = x + y;
        x = y;
        y = z;

        cout << z << ", ";
    }

    return   0;
}



