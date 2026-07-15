#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> pilaCaracteres;
    string textoOriginal, textoInvertido = "";

    cout << "Escribe una palabra para verificar si es palindromo: ";
    cin >> textoOriginal;

    // Metemos letra por letra a la pila
    for (int i = 0; i < textoOriginal.length(); i++) {
        pilaCaracteres.push(textoOriginal[i]);
    }

    // Sacamos las letras (saldran al reves por la naturaleza de la pila)
    while (!pilaCaracteres.empty()) {
        textoInvertido += pilaCaracteres.top();
        pilaCaracteres.pop(); // la eliminamos despues de leerla
    }

    cout << "Palabra volteada: " << textoInvertido << "\n";

    // Verificamos si son iguales
    if (textoOriginal == textoInvertido) {
        cout << "-> RESULTADO: Si es un palindromo.\n";
    } else {
        cout << "-> RESULTADO: No es palindromo.\n";
    }

    return 0;
}
