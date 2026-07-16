#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Ingresa tres numeros separados por espacio: ";
    cin >> n1 >> n2 >> n3;

    int mayor = n1;
    int menor = n1;

    // Buscar el mayor
    if (n2 > mayor) mayor = n2;
    if (n3 > mayor) mayor = n3;

    // Buscar el menor
    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;

    cout << "\nEl numero mayor es: " << mayor;
    cout << "\nEl numero menor es: " << menor << "\n";

    // Verificar si hay iguales
    if (n1 == n2 && n2 == n3) {
        cout << "Los tres numeros son iguales.\n";
    } else if (n1 == n2 || n1 == n3 || n2 == n3) {
        cout << "Hay al menos dos numeros iguales entre si.\n";
    } else {
        cout << "Todos los numeros son diferentes.\n";
    }

    return 0;
}
