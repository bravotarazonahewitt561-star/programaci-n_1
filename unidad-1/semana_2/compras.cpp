#include <iostream>
using namespace std;

int main() {
    float montoCompra, descuento = 0.0, totalPagar;

    cout << "Ingresa el monto total de la compra: S/ ";
    cin >> montoCompra;

    // Evaluamos de mayor a menor para que el IF funcione correctamente
    if (montoCompra > 500) {
        descuento = montoCompra * 0.05; // 5%
    } else if (montoCompra > 200) {
        descuento = montoCompra * 0.02; // 2%
    } else if (montoCompra > 100) {
        descuento = montoCompra * 0.01; // 1%
    }

    totalPagar = montoCompra - descuento;

    cout << "Descuento aplicado: S/ " << descuento << "\n";
    cout << "Total a pagar: S/ " << totalPagar << "\n";

    return 0;
}
