#include <iostream>
#include <string>
#include <fstream>
#include "Persona.cpp"

using namespace std;

class Curso
{
private:
    int id;
    string nombre;
    int credito;
    Persona docente;
    Persona estudiantes[5];
    int total_alumnos = 0;

public:
    Curso() {}
    Curso(int _id, string _nombre, int _credito)
    {
        this->id = _id;
        this->nombre = _nombre;
        this->credito = _credito;
    }

    int get_id() { return this->id; }
    void set_id(int _id) { this->id = _id; }

    string get_nombre() { return this->nombre; }
    void set_nombre(string _nombre) { this->nombre = _nombre; }

    int get_credito() { return this->credito; }
    void set_credito(int _credito) { this->credito = _credito; }

    void registrar_curso()
    {
        int _id, _credito;
        string _nombre;
        cout << "Ingrese el identificador del curso" << endl;
        cin >> _id;
        cout << "Ingrese el nombre curso" << endl;
        cin >> _nombre;
        cout << "Ingrese los creditos" << endl;
        cin >> _credito;
        this->set_id(_id);
        this->set_nombre(_nombre);
        this->set_credito(_credito);
    }

    void agregar_docente()
    {
        string _dni, _nombre, _apPaterno, apMaterno;
        cin.ignore();
        cout << "Ingrese el dni del docente" << endl;
        getline(cin,_dni);
        cout << "Ingrese el nombre del docente" << endl;
        cin >> _nombre;
        cout << "Ingrese el apellido paterno del docente" << endl;
        cin >> _apPaterno;
        cout << "Ingrese el apellido materno del docente" << endl;
        cin >> apMaterno;
        this->docente = Persona(_dni, _nombre, _apPaterno, apMaterno);
    }

    void agregar_alumno()
    {
        if (total_alumnos < 5)
        {
            string _dni, _nombre, _apPaterno, apMaterno;
            cout << "Ingrese el dni del alumno" << endl;
            cin >> _dni;
            cout << "Ingrese el nombre del alumno" << endl;
            cin >> _nombre;
            cout << "Ingrese el apellido paterno del alumno" << endl;
            cin >> _apPaterno;
            cout << "Ingrese el apellido materno del alumno" << endl;
            cin >> apMaterno;
            Persona alumno = Persona(_dni, _nombre, _apPaterno, apMaterno);
            estudiantes[total_alumnos] = alumno;
            total_alumnos++;
        }
        else
        {
            cout << "No hay capacidad para registrar mas alumnos";
        }
    }

    void listar_alumnos()
    {
        for (int i = 0; i < 5; i++)
        {
            if (estudiantes[i].get_dni() != "")
            {
                estudiantes[i].saludar();
            }
        }
    }

    void eliminar_alumno()
    {
        int _idEliminar;
        cout << "Ingrese el id del alumno a eliminar" << endl;
        cin >> _idEliminar;
        for (int i = 0; i < 5; i++)
        {
            if (estudiantes[i].get_id() == _idEliminar)
            {
                estudiantes[i] = Persona();
            }
        }
    }

    void imprimir()
    {
        cout << "===========================" << endl;
        cout << "Nombre del curso: " << this->nombre << endl;
        cout << "Creditos: " << this->credito << endl;
        cout << "Docente del curso " << this->docente.get_nombre() << " " << this->docente.get_paterno() << " " << this->docente.get_materno() << endl;
        cout << "========Alumnos=========" << endl;
        this->listar_alumnos();
        cout << "========================" << endl;
    }

    void guardarTXT()
    {
        ofstream archivo("curso.txt", ios::app);
        if (archivo.is_open())
        {
            // 1. Guardamos datos del curso
            archivo << id << "|" << nombre << "|" << credito << "|";

            // 2. Guardamos datos del docente
            archivo << docente.get_dni() << "|" << docente.get_nombre() << "|"
                    << docente.get_paterno() << "|" << docente.get_materno() <<"|" ;

            // 3. Guardamos la cantidad de alumnos actuales
            archivo << total_alumnos;

            // 4. Guardamos los DNI y nombres de los alumnos registrados
            for (int i = 0; i < 5; i++)
            {
                archivo << "|" << estudiantes[i].get_dni() << "|" << estudiantes[i].get_nombre();
            }
            archivo << endl;

            archivo.close();
            cout << "\n Datos del curso guardados correctamente \n";
        }
        else
        {
            cout << "\n No se pudo abrir el archivo para guardar. \n";
        }
    }

    static void leerTXT()
    {
        ifstream archivo("curso.txt");
        if (archivo.is_open())
        {
            string id_c, nom_c, cred_c;
            string dni_d, nom_d, pat_d, mat_d;
            string total_al;
            string dni_al[5], nom_al[5];

            cout << "\n ======= LISTA DE CURSOS EN TXT ======= \n";

            while (getline(archivo, id_c, '|'))
            {
                getline(archivo, nom_c, '|');
                getline(archivo, cred_c, '|');
                getline(archivo, dni_d, '|');
                getline(archivo, nom_d, '|');
                getline(archivo, pat_d, '|');
                getline(archivo, mat_d, '|');
                getline(archivo, total_al, '|');

                // Leer los datos de los 5 espacios de alumnos alternando DNI y Nombre
                for (int i = 0; i < 4; i++)
                {
                    getline(archivo, dni_al[i], '|');
                    getline(archivo, nom_al[i], '|');
                }
                getline(archivo, dni_al[4], '|');
                getline(archivo, nom_al[4]); // El último lee hasta el salto de línea

                cout << "\n Curso: " << nom_c << " (ID: " << id_c << " - Creditos: " << cred_c << ")";
                cout << "\n Docente: " << nom_d << " " << pat_d << " " << mat_d << " (DNI: " << dni_d << ")";
                cout << "\n Total Alumnos: " << total_al;
                cout << "\n ---- Alumnos Registrados ----";

                int registrados = 0;
                for (int i = 0; i < 5; i++)
                {
                    if (dni_al[i] != "")
                    {
                        cout << "\n  • " << nom_al[i] << " (DNI: " << dni_al[i] << ")";
                        registrados++;
                    }
                }
                if(registrados == 0) cout << "\n  (No hay alumnos inscritos)";

                cout << "\n --------------------------------------\n";
            }
            archivo.close();
        }
        else
        {
            cout << "\n no se pudo mostrar los datos \n";
        }
    }
};
