#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
    int saldo = 2500;
    int opcion;
    int pin = 4578;
    string clave = "hewitt";
    int monto;
    int pinIngresado;
    string claveIngresada;
    bool autenticado = true;

    do {
        cout << " cajero automatico" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Realizar retiro" << endl;
        cout << "3. Realizar deposito" << endl;
        cout << "4. Cambio de contrasena" << endl;
        cout << "5. Autenticarse nuevamente" << endl;
        cout << "6. Salir del sistema" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es" << saldo << endl;
				break;

            case 2:
                cout << " Ingrese monto a retirar: ";
                cin >> monto;
                if (monto <= 0)
                    cout << "Monto invalido." << endl;
                else if (monto > saldo)
                    cout << "Saldo insuficiente." << endl;
                else {
                    saldo -= monto;
                    cout << "Retiro exitoso. Saldo restante: " << saldo << endl;
                }
                break;

            case 3:
                cout << " Ingrese monto a depositar: $";
                cin >> monto;
                if (monto <= 0)
                    cout << "Monto invalido." << endl;
                else {
                    saldo += monto;
                    cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
                }
                break;

            case 4:
                cout << " Ingrese contrasena actual: ";
                cin >> claveIngresada;
                if (claveIngresada != clave) {
                    cout << "Contrasena incorrecta." << endl;
                } else {
                    cout << "Ingrese nueva contrasena: ";
                    cin >> clave;
                    cout << "Contrasena cambiada exitosamente." << endl;
                }
                break;

            case 5:
                cout << " Ingrese PIN: ";
                cin >> pinIngresado;
                cout << "Ingrese contrasena: ";
                cin >> claveIngresada;
                if (pinIngresado == pin && claveIngresada == clave) {
                    autenticado = 1;
                    cout << "Autenticacion exitosa." << endl;
                } else {
                    autenticado = 0;
                    cout << "Datos incorrectos." << endl;
                }
                break;

            case 6:
                cout << "Gracias por usar el cajero. Hasta luego." << endl;
                break;

            default:
                cout << "\nOpcion no valida." << endl;
        }

    } while (opcion != 6);
    getch ();
    return 0;
}

