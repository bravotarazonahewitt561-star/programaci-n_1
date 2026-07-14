//Ejercicio 3: Arreglo de 10 Números (Aleatorios, Ordenados y Máximo)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numeros[10];
    srand(time(NULL));

    for(int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100;
    }

    cout << "numeros generados" << endl;
    for(int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(numeros[i] > numeros[j]) {
                int aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    cout << "\narreglo ordenado" << endl;
    for(int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\nnumero mayor: " << numeros[9] << endl;
    return 0;
}
