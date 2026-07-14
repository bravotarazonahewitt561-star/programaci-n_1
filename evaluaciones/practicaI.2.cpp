#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> pila;
    queue<int> cola;
    stack<int> pilainvertida;

    pila.push(10);
    pila.push(20);
    pila.push(30);
    pila.push(40);

    cout << "pila original" << endl;
    stack<int> aux = pila;
    while(!aux.empty()) {
        cout << aux.top() << endl;
        aux.pop();
    }

    while(!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }

    while(!cola.empty()) {
        pilainvertida.push(cola.front());
        cola.pop();
    }

    cout << "\npila invertida" << endl;
    while(!pilainvertida.empty()) {
        cout << pilainvertida.top() << endl;
        pilainvertida.pop();
    }
    return 0;
}
