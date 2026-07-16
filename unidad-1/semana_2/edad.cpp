#include <iostream>
using namespace std;

int main() {
    int anios;
    cout << "Ingresa la edad de la persona: ";
    cin >> anios;

    if (anios >= 0 && anios <= 12) {
        cout << "Categoria: Nino(a)\n";
    } else if (anios >= 13 && anios <= 17) {
        cout << "Categoria: Adolescente\n";
    } else if (anios >= 18 && anios <= 59) {
        cout << "Categoria: Adulto\n";
    } else if (anios >= 60 && anios <= 90) {
        cout << "Categoria: Adulto Mayor\n";
    } else {
        cout << "Edad fuera de rango o invalida.\n";
    }
    return 0;
}
