#include <iostream>
using namespace std;

int main() {
    float num[4];
    float sumatoria = 0.0;

    cout << "Ingresa 4 numeros:\n";
    for(int i = 0; i < 4; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> num[i];
        sumatoria += num[i];
    }

    // Ordenar de menor a mayor usando el metodo burbuja (sencillo)
    for(int i = 0; i < 4 - 1; i++) {
        for(int j = 0; j < 4 - i - 1; j++) {
            if(num[j] > num[j + 1]) {
                float temporal = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temporal;
            }
        }
    }

    cout << "\n--- RESULTADOS ---\n";
    cout << "Numero menor: " << num[0] << "\n";
    cout << "Numero mayor: " << num[3] << "\n";
    cout << "Sumatoria: " << sumatoria << "\n";
    cout << "Promedio: " << (sumatoria / 4.0) << "\n";

    cout << "Lista ordenada: ";
    for(int i = 0; i < 4; i++) {
        cout << num[i] << " ";
    }
    cout << "\n";

    return 0;
}
