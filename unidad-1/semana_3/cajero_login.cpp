#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuarioDB = "admin";
    string claveDB = "1234";
    string userIngresado, passIngresada;
    int intentos = 0;
    bool acceso = false;

    // --- SIMULACION DE LOGIN ---
    cout << "--- SISTEMA BANCARIO ---\n";
    while (intentos < 3 && !acceso) {
        cout << "Usuario: "; cin >> userIngresado;
        cout << "Clave: "; cin >> passIngresada;

        if (userIngresado == usuarioDB && passIngresada == claveDB) {
            acceso = true;
            cout << "\n[!] Acceso Concedido.\n";
        } else {
            intentos++;
            cout << "[x] Credenciales incorrectas. Intentos restantes: " << (3 - intentos) << "\n\n";
        }
    }

    // --- SIMULACION DE CAJERO (Solo entra si se logueo bien) ---
    if (acceso) {
        float saldo = 1000.0; // saldo inicial
        int accion = 0;

        while (accion != 3) {
            cout << "\n1. Ver Saldo\n2. Retirar Dinero\n3. Salir\nOpcion: ";
            cin >> accion;

            if (accion == 1) {
                cout << "Tu saldo actual es: S/ " << saldo << "\n";
            } else if (accion == 2) {
                float retiro;
                cout << "Cuanto deseas retirar?: S/ ";
                cin >> retiro;
                if (retiro > saldo) {
                    cout << "Saldo insuficiente.\n";
                } else {
                    saldo -= retiro;
                    cout << "Retiro exitoso. Nuevo saldo: S/ " << saldo << "\n";
                }
            } else if (accion == 3) {
                cout << "Retira tu tarjeta...\n";
            } else {
                cout << "Opcion invalida.\n";
            }
        }
    } else {
        cout << "Cuenta bloqueada por seguridad.\n";
    }

    return 0;
}
