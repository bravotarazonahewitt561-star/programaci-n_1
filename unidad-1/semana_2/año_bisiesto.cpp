#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Ingresa el anio para saber si es bisiesto: ";
    cin >> anio;

    // Regla: Divisible por 4, pero no por 100, a menos que sea divisible por 400
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El anio " << anio << " SI es bisiesto.\n";
    } else {
        cout << "El anio " << anio << " NO es bisiesto.\n";
    }

    return 0;
}
