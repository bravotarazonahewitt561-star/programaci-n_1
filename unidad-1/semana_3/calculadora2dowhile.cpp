#include <iostream>
using namespace std;

int main() {
    int opcion;
    double a, b, resultado;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if(opcion >= 1 && opcion <= 4) {
            cout << "Ingresa dos numeros: ";
            cin >> a >> b;
        }

        switch(opcion) {
            case 1:
                resultado = a + b;
                cout << "Resultado: " << resultado << endl;
                break;

            case 2:
                resultado = a - b;
                cout << "Resultado: " << resultado << endl;
                break;

            case 3:
                resultado = a * b;
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                if(b != 0) {
                    resultado = a / b;
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Error: division por cero" << endl;
                }
                break;

            case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida" << endl;
        }

    } while(opcion != 5);

    return 0;
}
