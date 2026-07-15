#include <iostream>
#include <string>

using namespace std;

int main() {
    int accion = 0;

    while (accion != 4) {
        cout << "\n--- CALCULADORA MATEMATICA ---\n";
        cout << "1. Hallar Numero Triangular\n";
        cout << "2. Convertir a Binario\n";
        cout << "3. Convertir a Hexadecimal\n";
        cout << "4. Salir\n";
        cout << "Tu eleccion: ";
        cin >> accion;

        if (accion == 1) {
            int limite, sumatoria = 0;
            cout << "Ingresa el limite (n): ";
            cin >> limite;
            // el numero triangular es la suma de los numeros hasta n
            for (int i = 1; i <= limite; i++) {
                sumatoria += i;
            }
            cout << "-> El numero triangular es: " << sumatoria << "\n";

        } else if (accion == 2) {
            int numBase;
            string numBinario = "";
            cout << "Ingresa numero base 10: ";
            cin >> numBase;

            if (numBase == 0) {
                numBinario = "0";
            } else {
                while (numBase > 0) {
                    // concatenamos el residuo al inicio de la cadena
                    numBinario = to_string(numBase % 2) + numBinario;
                    numBase = numBase / 2;
                }
            }
            cout << "-> En binario es: " << numBinario << "\n";

        } else if (accion == 3) {
            int numDec;
            cout << "Ingresa numero base 10: ";
            cin >> numDec;
            // C++ tiene la magia de convertir a hexadecimal con "hex" de frente
            cout << "-> En hexadecimal es: " << hex << uppercase << numDec << dec << "\n";

        } else if (accion == 4) {
            cout << "Cerrando programa...\n";
        } else {
            cout << "Opcion incorrecta.\n";
        }
    }

    return 0;
}
