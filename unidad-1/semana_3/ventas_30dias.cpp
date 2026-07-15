#include <iostream>

using namespace std;

int main() {
    float ingresos[30];
    float totalMes = 0.0;
    float picoVenta = 0.0;
    int diaPico = 0;

    cout << "--- REGISTRO DE VENTAS MENSUALES (30 DIAS) ---\n";

    // Ciclo para llenar las ventas
    for (int i = 0; i < 30; i++) {
        cout << "Venta del dia " << i + 1 << ": ";
        cin >> ingresos[i];

        totalMes += ingresos[i];

        // Validamos si es la venta mas alta hasta el momento
        if (ingresos[i] > picoVenta) {
            picoVenta = ingresos[i];
            diaPico = i + 1; // guardamos el dia real (i+1)
        }
    }

    // Mostramos resultados
    cout << "\n--- RESUMEN DEL MES ---\n";
    cout << "Ingreso total acumulado: S/ " << totalMes << "\n";
    cout << "Promedio de venta diaria: S/ " << (totalMes / 30.0) << "\n";
    cout << "El mejor dia fue el dia " << diaPico << " con S/ " << picoVenta << "\n";

    return 0;
}
