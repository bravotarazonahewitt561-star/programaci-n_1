#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombres[5];
    float notas[5][4];
    float promedio[5];

    // pedir datos de los chicos
    for(int i = 0; i < 5; i++) {
        cout << "\nIngresa el nombre del alumno " << i+1 << ": ";
        cin >> nombres[i];

        float acumulador = 0;
        for(int j = 0; j < 4; j++) {
            cout << "Nota " << j+1 << ": ";
            cin >> notas[i][j];
            acumulador += notas[i][j];
        }
        // sacamos el promedio al toque
        promedio[i] = acumulador / 4;
    }

    // buscar quien tiene la nota mas alta
    float maxPromedio = promedio[0];
    string mejorAlumno = nombres[0];

    for(int i = 1; i < 5; i++) {
        if(promedio[i] > maxPromedio) {
            maxPromedio = promedio[i];
            mejorAlumno = nombres[i];
        }
    }

    // mostrar todo
    cout << "\n--- REPORTE FINAL ---\n";
    for(int i = 0; i < 5; i++) {
        cout << nombres[i] << " - Promedio: " << promedio[i] << " -> ";
        if(promedio[i] >= 10.5) {
            cout << "Aprobo\n";
        } else {
            cout << "Desaprobo\n";
        }
    }

    cout << "\nEl alumno top es " << mejorAlumno << " con " << maxPromedio << endl;

    return 0;
}
