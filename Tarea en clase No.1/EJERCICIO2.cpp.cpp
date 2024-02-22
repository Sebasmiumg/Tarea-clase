#include <iostream>
using namespace std;
int main() {
    int tabla1=6;
    int contador=0;

    while(contador<=10){
        cout<< contador;
        cout<<"es :"<< tabla1 * contador<< endl;
        contador= contador + 1;
    }
    return 0;
}
