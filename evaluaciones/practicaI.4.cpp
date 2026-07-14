//Ejercicio 4: Simulación de Inventario (Arreglos, Map, Stack y Queue)

#include <iostream>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int main() {
    map<string, int> inventario;
    stack<string> historial;
    queue<string> pedidos;
    string productos[3];

    productos[0] = "laptop";
    productos[1] = "mouse";
    productos[2] = "teclado";

    inventario["laptop"] = 2500;
    inventario["mouse"] = 80;
    inventario["teclado"] = 120;

    historial.push("se agrego laptop");
    historial.push("se agrego mouse");
    historial.push("se agrego teclado");

    pedidos.push("pedido laptop");
    pedidos.push("pedido mouse");
    pedidos.push("pedido teclado");

    cout << "productos del arreglo" << endl;
    for(int i = 0; i < 3; i++) {
        cout << productos[i] << endl;
    }

    cout << "\ninventario de productos" << endl;
    for(auto x : inventario) {
        cout << x.first << " -> " << x.second << endl;
    }

    cout << "\nhistorial" << endl;
    while(!historial.empty()) {
        cout << historial.top() << endl;
        historial.pop();
    }

    cout << "\npedidos" << endl;
    while(!pedidos.empty()) {
        cout << pedidos.front() << endl;
        pedidos.pop();
    }
    return 0;
}
