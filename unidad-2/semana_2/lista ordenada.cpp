#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;

int main() {
    int n[4];
    for (int i = 0; i < 4; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> n[i];
    }

    int mayor = n[0], menor = n[0], suma = 0;
    for (int i = 0; i < 4; i++) {
        if (n[i] > mayor) mayor = n[i];
        if (n[i] < menor) menor = n[i];
        suma += n[i];
    }

    sort(n, n + 4);

    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << suma / 4.0 << endl;
    cout << "Ordenados: ";
    for (int i = 0; i < 4; i++) cout << n[i] << " ";
    cout << endl;
     getch ();
    return 0;
}
