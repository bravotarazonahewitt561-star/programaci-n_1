#include <iostream>
#include <stdexcept>
using namespace std;

class Estudiante {
private:
    float promedio;

public:
    // Metodo para asignar el promedio (Setter)
    void setPromedio(float nota) {
        if (nota < 0.0 || nota > 20.0) {
            // Lanzamos una excepcion de argumento invalido
            throw invalid_argument("EXCEPCION: La nota ingresada esta fuera de rango [0-20].");
        }
        promedio = nota;
        cout << "Promedio (" << promedio << ") registrado correctamente en el sistema.\n";
    }

    // Metodo para obtener el promedio (Getter)
    float getPromedio() {
        return promedio;
    }
};

int main() {
    Estudiante alumno1;
    float notaIngresada;

    cout << "--- REGISTRO DE NOTAS ---\n";
    cout << "Ingrese el promedio del estudiante (0 al 20): ";
    cin >> notaIngresada;

    try {
        // Intentamos asignar la nota
        alumno1.setPromedio(notaIngresada);
    }
    catch (const exception& e) {
        // Atrapamos el error si el estudiante puso un 25 o un -5, por ejemplo
        cout << e.what() << "\n";
    }

    return 0;
}
