#include <iostream>
#include <string>

using namespace std;

// --- CLASE BASE ---
class Persona {
private:
    string nombreCompleto;
    string dni;

public:
    // Constructor
    Persona() {
        nombreCompleto = "No asignado";
        dni = "00000000";
    }

    // Setters
    void setNombre(string n) { nombreCompleto = n; }
    void setDni(string d) { dni = d; }

    // Getters
    string getNombre() { return nombreCompleto; }
    string getDni() { return dni; }
};


// --- CLASE PRINCIPAL ---
class Curso {
private:
    string nombreMateria;
    int creditos;
    Persona elDocente;       // Relacion: El curso tiene 1 docente
    Persona listaAlumnos[5]; // Relacion: El curso tiene 5 alumnos
    int contadorAlumnos;

public:
    // Constructor
    Curso(string materia, int cred) {
        nombreMateria = materia;
        creditos = cred;
        contadorAlumnos = 0;
    }

    void asignarProfesor(string nombre, string doc) {
        elDocente.setNombre(nombre);
        elDocente.setDni(doc);
    }

    void agregarAlumno(string nombre, string doc) {
        if (contadorAlumnos < 5) {
            listaAlumnos[contadorAlumnos].setNombre(nombre);
            listaAlumnos[contadorAlumnos].setDni(doc);
            contadorAlumnos++;
            cout << "Alumno registrado correctamente.\n";
        } else {
            cout << "El curso ya esta lleno (Maximo 5).\n";
        }
    }

    void mostrarInformacion() {
        cout << "\n--- DETALLES DEL CURSO ---\n";
        cout << "Materia: " << nombreMateria << " (" << creditos << " creditos)\n";
        cout << "Dictado por: " << elDocente.getNombre() << " (DNI: " << elDocente.getDni() << ")\n";
        cout << "--- LISTA DE MATRICULADOS ---\n";

        if (contadorAlumnos == 0) {
            cout << "Aun no hay alumnos.\n";
        } else {
            for (int i = 0; i < contadorAlumnos; i++) {
                cout << i + 1 << ". " << listaAlumnos[i].getNombre() << " - DNI: " << listaAlumnos[i].getDni() << "\n";
            }
        }
    }
};

// --- MENU DE PRUEBA ---
int main() {
    // Instanciamos el curso
    Curso miCursoCpp("Programacion C++", 4);

    int decide = 0;
    string nomTemp, dniTemp;

    while (decide != 4) {
        cout << "\n1. Asignar Docente al curso\n";
        cout << "2. Matricular un Alumno\n";
        cout << "3. Imprimir reporte del curso\n";
        cout << "4. Salir\n";
        cout << "Que opcion eliges?: ";
        cin >> decide;

        if (decide == 1) {
            cout << "Nombre del profesor: "; cin >> nomTemp;
            cout << "DNI del profesor: "; cin >> dniTemp;
            miCursoCpp.asignarProfesor(nomTemp, dniTemp);

        } else if (decide == 2) {
            cout << "Nombre del alumno: "; cin >> nomTemp;
            cout << "DNI del alumno: "; cin >> dniTemp;
            miCursoCpp.agregarAlumno(nomTemp, dniTemp);

        } else if (decide == 3) {
            miCursoCpp.mostrarInformacion();

        } else if (decide == 4) {
            cout << "Finalizando...\n";
        } else {
            cout << "Dato no valido.\n";
        }
    }

    return 0;
}
