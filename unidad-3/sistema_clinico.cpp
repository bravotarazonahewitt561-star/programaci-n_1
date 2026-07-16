#include <iostream>
#include <string>
using namespace std;

// Clases base
class Paciente {
public:
    string nombre;
    string dni;
    Paciente() { nombre = ""; dni = ""; }
};

class Medico {
public:
    string nombre;
    string especialidad;
    Medico() { nombre = ""; especialidad = ""; }
};

class Servicio {
public:
    string tipoExamen;
    Servicio() { tipoExamen = "Consulta General"; }
};

// Clase que gestiona la relación (La Cita)
class Cita {
private:
    Paciente pac;
    Medico med;
    Servicio serv;
    string fecha;
public:
    void programarCita(string nPac, string dniPac, string nMed, string espe, string f) {
        pac.nombre = nPac;
        pac.dni = dniPac;
        med.nombre = nMed;
        med.especialidad = espe;
        fecha = f;
    }

    void mostrarTicket() {
        if(pac.nombre != "") {
            cout << "\n--- TICKET DE CITA ---\n";
            cout << "Paciente: " << pac.nombre << " (DNI: " << pac.dni << ")\n";
            cout << "Atiende Dr(a).: " << med.nombre << " (" << med.especialidad << ")\n";
            cout << "Servicio: " << serv.tipoExamen << "\n";
            cout << "Fecha: " << fecha << "\n";
            cout << "----------------------\n";
        } else {
            cout << "No hay citas registradas aun.\n";
        }
    }
};

int main() {
    Cita agenda[5]; // Arreglo para guardar hasta 5 citas
    int contadorCitas = 0;
    int opc = 0;

    while (opc != 3) {
        cout << "\n--- CLINICA SALUD ---\n";
        cout << "1. Registrar nueva cita\n";
        cout << "2. Ver citas asignadas\n";
        cout << "3. Salir\n";
        cout << "Seleccione: ";
        cin >> opc;

        if (opc == 1) {
            if(contadorCitas < 5) {
                string pNom, pDni, mNom, mEsp, fech;
                cout << "Nombre del Paciente: "; cin >> pNom;
                cout << "DNI del Paciente: "; cin >> pDni;
                cout << "Nombre del Medico: "; cin >> mNom;
                cout << "Especialidad: "; cin >> mEsp;
                cout << "Fecha (DD/MM): "; cin >> fech;

                agenda[contadorCitas].programarCita(pNom, pDni, mNom, mEsp, fech);
                contadorCitas++;
                cout << "-> Cita guardada correctamente.\n";
            } else {
                cout << "Agenda llena.\n";
            }
        } else if (opc == 2) {
            for(int i = 0; i < contadorCitas; i++) {
                agenda[i].mostrarTicket();
            }
        }
    }
    return 0;
}
