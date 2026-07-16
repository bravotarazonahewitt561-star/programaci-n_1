#include <iostream>
#include <stdexcept> // Libreria necesaria para excepciones estandar
using namespace std;

int main() {
    double saldo = 1000.0; // Saldo inicial fijo para la simulacion
    double retiro;

    cout << "--- SISTEMA BANCARIO ---\n";
    cout << "Saldo actual: S/ " << saldo << "\n";
    cout << "Ingrese el monto a retirar: S/ ";
    cin >> retiro;

    // Bloque TRY: Intentamos ejecutar este codigo
    try {
        if (retiro > saldo) {
            // THROW: Lanzamos la excepcion si la condicion de error se cumple
            throw runtime_error("ERROR: Fondos insuficientes. El monto supera su saldo actual.");
        }

        // Si no hay error, el codigo continua normalmente
        saldo -= retiro;
        cout << "Transaccion exitosa. Retire su dinero.\n";
        cout << "Nuevo saldo: S/ " << saldo << "\n";

    }
    // Bloque CATCH: Atrapamos la excepcion lanzada y mostramos el mensaje
    catch (const exception& e) {
        cout << e.what() << "\n"; // e.what() imprime el texto que pusimos en throw
    }

    return 0;
}
