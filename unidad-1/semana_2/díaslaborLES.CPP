#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingresa un numero del 1 al 7: ";
    cin >> dia;

    if (dia >= 1 && dia <= 5) {
        if (dia == 1) cout << "Lunes";
        else if (dia == 2) cout << "Martes";
        else if (dia == 3) cout << "Miercoles";
        else if (dia == 4) cout << "Jueves";
        else if (dia == 5) cout << "Viernes";
        cout << " -> Es un dia laborable.\n";
    } else if (dia == 6 || dia == 7) {
        if (dia == 6) cout << "Sabado";
        else cout << "Domingo";
        cout << " -> NO es laborable (Fin de semana).\n";
    } else {
        cout << "Error: Numero fuera de rango.\n";
    }

    return 0;
}
