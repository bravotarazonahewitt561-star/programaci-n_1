#include <iostream>
#include <string>
#include "Curso.cpp"

using namespace std;

void opciones_menu()
{
    cout << "\n============================" << endl;
    cout << "======Sistema Academico=====" << endl;
    cout << "1. Registrar curso" << endl;
    cout << "2. Registrar docente" << endl;
    cout << "3. Registrar alumno" << endl;
    cout << "4. Mostrar alumnos (RAM)" << endl;
    cout << "5. Eliminar alumno" << endl;
    cout << "6. Mostrar curso actual (RAM)" << endl;
    cout << "7. Mostrar cursos guardados (TXT)" << endl; // <-- Nueva opción
    cout << "8. Salir" << endl;
    cout << "============================" << endl;
    cout << "Seleccione una opcion: ";
}

int main()
{
    int opciones;
    Curso curso;

    do
    {
        opciones_menu();
        cin >> opciones;

        switch (opciones)
        {
        case 1:
            curso.registrar_curso();
            curso.guardarTXT(); // Guarda los datos del curso
            break;
        case 2:
            curso.agregar_docente();
            curso.guardarTXT(); // Actualiza el registro con el docente asignado
            break;
        case 3:
            curso.agregar_alumno();
            curso.guardarTXT(); // Actualiza el registro añadiendo el alumno
            break;
        case 4:
            curso.listar_alumnos();
            break;
        case 5:
            curso.eliminar_alumno();
            curso.guardarTXT(); // Actualiza el registro tras remover al alumno
            break;
        case 6:
            curso.imprimir();
            break;
        case 7:
            Curso::leerTXT(); // Lee directamente todo el historial del archivo plano
            break;
        case 8:
            cout << "\nSaliendo del sistema..." << endl;
            break;
        default:
            cout << "\nOpcion no valida." << endl;
            break;
        }
    } while (opciones != 8);

    return 0;
}
