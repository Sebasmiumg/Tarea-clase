#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool d = true;

    cout << "Ingrese un numero: ";
    cin >> n;

    //   0 y   1 no son numeros primos
    if (n ==   0 || n ==   1) {
        d = false;
    } else {
        // Loop para verificar si n es primo
        for (i =   2; i <= n/2; ++i) {
            if (n % i ==   0) {
                d = false;
                break;
            }
        }
    }

    if (d) {
        cout << n << " es un numero primo" << endl;
    } else {
        cout << n << " no es un numero primo" << endl;
    }

    return   0;
}



