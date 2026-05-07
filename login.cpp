#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
    string usuario = "admin";
    string clave = "1234";
    string u, c;
    int intentos = 3;

    while (intentos > 0) {
        cout << "Usuario: "; cin >> u;
        cout << "Contrasena: "; cin >> c;

        if (u == usuario && c == clave) {
            cout << "Acceso concedido" << endl;
            return 0;
        } else {
            intentos--;
            cout << "Datos incorrectos. Intentos restantes: " << intentos << endl;
        }
    }

    cout << "Cuenta bloqueada" << endl;
    
    getch();
    return 0;
}
