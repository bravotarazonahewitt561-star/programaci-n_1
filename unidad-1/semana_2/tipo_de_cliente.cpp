#include <iostream>
using namespace std;

int main() {
    int tipo;
    float tarifaBase, descuento = 0.0;

    cout << "Ingresa la tarifa base: S/ ";
    cin >> tarifaBase;

    cout << "Selecciona el tipo de cliente (1: Normal, 2: VIP, 3: Premium): ";
    cin >> tipo;

    if (tipo == 2) {
        descuento = tarifaBase * 0.20; // 20% VIP
    } else if (tipo == 3) {
        descuento = tarifaBase * 0.30; // 30% Premium
    } // Si es 1 (Normal), el descuento se queda en 0.0

    cout << "El cliente tiene un descuento de: S/ " << descuento << "\n";
    cout << "Tarifa final a cobrar: S/ " << (tarifaBase - descuento) << "\n";

    return 0;
}
