#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Estudiante
class Estudiante {
private:
    string nombre;
    int edad;
    string codigo;

public:
    // Constructor por defecto necesario para inicializar el arreglo
    Estudiante() {
        nombre = "";
        edad = 0;
        codigo = "";
    }

    // Método para registrar los datos
    void registrarDatos() {
        cout << "Ingrese codigo del estudiante: ";
        cin >> codigo;
        cin.ignore(); // Limpia el buffer del salto de línea anterior
        cout << "Ingrese nombre del estudiante: ";
        getline(cin, nombre);
        cout << "Ingrese edad del estudiante: ";
        cin >> edad;
    }

    // Método para mostrar los datos
    void mostrarDatos() {
        cout << "Codigo: " << codigo << " | Nombre: " << nombre << " | Edad: " << edad << " anios" << endl;
    }

    // Método getter para poder buscar por código al eliminar
    string getCodigo() {
        return codigo;
    }
};

int main() {
    Estudiante estudiantes[5]; // Arreglo limitado a 5 estudiantes
    int contadorActivos = 0;   // Controla cuántos estudiantes reales se han registrado
    int opcion;
    string codigoBuscar;
    bool encontrado;

    do {
        // Renderizado del menú basado en la imagen image_c2d948.png
        cout << "\n--- MENU DE OPCIONES ---" << endl;
        cout << "1) Registrar" << endl;
        cout << "2) Mostrar estudiantes" << endl;
        cout << "3) Eliminar" << endl;
        cout << "4) Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << "------------------------\n" << endl;

        switch (opcion) {
            case 1:
                // Verificar si aún queda espacio en el arreglo de 5
                if (contadorActivos < 5) {
                    cout << "--- Registrar Estudiante [" << contadorActivos + 1 << "/5] ---" << endl;
                    estudiantes[contadorActivos].registrarDatos();
                    contadorActivos++;
                    cout << "\n¡Estudiante registrado con exito!" << endl;
                } else {
                    cout << "Error: El limite de 5 estudiantes ha sido alcanzado." << endl;
                }
                break;

            case 2:
                // Mostrar la lista si hay alumnos registrados
                if (contadorActivos == 0) {
                    cout << "No hay estudiantes registrados actualmente." << endl;
                } else {
                    cout << "--- Lista de Estudiantes Registrados ---" << endl;
                    for (int i = 0; i < contadorActivos; i++) {
                        cout << i + 1 << ". ";
                        estudiantes[i].mostrarDatos();
                    }
                }
                break;

            case 3:
                // Eliminar un estudiante por su código
                if (contadorActivos == 0) {
                    cout << "No hay estudiantes para eliminar." << endl;
                } else {
                    cout << "Ingrese el codigo del estudiante a eliminar: ";
                    cin >> codigoBuscar;

                    encontrado = false;
                    for (int i = 0; i < contadorActivos; i++) {
                        if (estudiantes[i].getCodigo() == codigoBuscar) {
                            encontrado = true;

                            // Recorrer los elementos restantes para rellenar el vacío
                            for (int j = i; j < contadorActivos - 1; j++) {
                                estudiantes[j] = estudiantes[j + 1];
                            }

                            contadorActivos--; // Reducir la cantidad de alumnos activos
                            cout << "¡Estudiante con codigo " << codigoBuscar << " eliminado correctamente!" << endl;
                            break; // Rompe el ciclo de búsqueda
                        }
                    }

                    if (!encontrado) {
                        cout << "Error: No se encontro ningun estudiante con ese codigo." << endl;
                    }
                }
                break;

            case 4:
                cout << "Saliendo del programa... ¡Hasta luego!" << endl;
                break;

            default:
                cout << "Opcion no valida. Intente nuevamente." << endl;
                break;
        }

    } while (opcion != 4);

    return 0;
}
