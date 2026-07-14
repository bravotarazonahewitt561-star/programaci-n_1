
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    double a, b;
    int opcion;
    double suma = 0;
    double resta = 0;
    double multiplicacion = 0;
    double division = 0;

    do {
        cout << "\nMENU" << endl;
        cout << "1. sumar" << endl;
        cout << "2. restar" << endl;
        cout << "3. multiplicar" << endl;
        cout << "4. dividir" << endl;
        cout << "5. resultados acumulados" << endl;
        cout << "6. salir" << endl;
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "ingrese 2 numeros" << endl;
                cin >> a >> b;
                suma = a + b;
                cout << "resultado: " << suma << endl;
                break;
            case 2:
                cout << "ingrese 2 numeros" << endl;
                cin >> a >> b;
                resta = a - b;
                cout << "resultado: " << resta << endl;
                break;
            case 3:
                cout << "ingrese 2 numeros" << endl;
                cin >> a >> b;
                multiplicacion = a * b;
                cout << "resultado: " << multiplicacion << endl;
                break;
            case 4:
                cout << "ingrese 2 numeros" << endl;
                cin >> a >> b;
                if (b != 0) {
                    division = a / b;
                    cout << "resultado: " << division << endl;
                } else {
                    cout << "no se puede dividir entre 0" << endl;
                }
                break;
            case 5:
                cout << "\nresultados acumulados" << endl;
                cout << "suma: " << suma << endl;
                cout << "resta: " << resta << endl;
                cout << "multiplicacion: " << multiplicacion << endl;
                cout << "division: " << division << endl;
                break;
            case 6:
                cout << "saliendo..." << endl;
                break;
            default:
                cout << "opcion incorrecta" << endl;
        }
    } while(opcion != 6);

    getch();
    return 0;
}
