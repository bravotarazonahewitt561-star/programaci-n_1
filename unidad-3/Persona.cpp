#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Persona
{
private:
    int id;
    string dni;
    string nombres;
    string ap_paterno;
    string ap_materno;
    string fecha_nacimiento;
    string direccion;
    string telefono;
    int edad;

public:
    Persona()
    {
        id = 0;
        edad = 0;
        dni = "";
        nombres = "";
        ap_paterno = "";
        ap_materno = "";
        fecha_nacimiento = "";
        direccion = "";
        telefono = "";
    }

    Persona(string _dni, string _nombre, string _paterno, string _materno)
    {
        this->id = 0;
        this->dni = _dni;
        this->nombres = _nombre;
        this->ap_paterno = _paterno;
        this->ap_materno = _materno;
        this->fecha_nacimiento = "";
        this->direccion = "";
        this->telefono = "";
        this->edad = 0;
    }

    int get_id() { return this->id; }
    void set_id(int _id) { this->id = _id; }

    string get_dni() { return this->dni; }
    void set_dni(string _dni) { this->dni = _dni; }

    string get_nombre() { return this->nombres; }
    void set_nombre(string _nombre) { this->nombres = _nombre; }

    string get_paterno() { return this->ap_paterno; }
    void set_paterno(string _paterno) { this->ap_paterno = _paterno; }

    string get_materno() { return this->ap_materno; }
    void set_materno(string _materno) { this->ap_materno = _materno; }

    void saludar()
    {
        cout << "Hola:  " << this->nombres << " ," << this->ap_paterno << " " << this->ap_materno << endl;
    }

    void guardarTXT()
    {
        ofstream archivo("persona.txt", ios::app);
        if (archivo.is_open())
        {
            archivo << id << "|"
                    << dni << "|"
                    << nombres << "|"
                    << ap_paterno << "|"
                    << ap_materno << "|"
                    << fecha_nacimiento << "|"
                    << direccion << "|"
                    << telefono << "|"
                    << edad << endl;

            archivo.close();
            cout << "\n Datos guardados correctamente \n";
        }
        else
        {
            cout << "\n No se pudo abrir el archivo para guardar. \n";
        }
    }

    static void leerTXT()
    {
        ifstream archivo("persona.txt");
        if (archivo.is_open())
        {
            string id_txt, dni_txt, nombres_txt, paterno_txt, materno_txt;
            string fnac_txt, dir_txt, tel_txt, edad_txt;

            cout << "\n ======= lista de personas ======= \n";

            while (getline(archivo, id_txt, '|'))
            {
                getline(archivo, dni_txt, '|');
                getline(archivo, nombres_txt, '|');
                getline(archivo, paterno_txt, '|');
                getline(archivo, materno_txt, '|');
                getline(archivo, fnac_txt, '|');
                getline(archivo, dir_txt, '|');
                getline(archivo, tel_txt, '|');
                getline(archivo, edad_txt);

                cout << "\n id: " << id_txt;
                cout << "\n dni: " << dni_txt;
                cout << "\n nombres: " << nombres_txt;
                cout << "\n ap. paterno: " << paterno_txt;
                cout << "\n ap. materno: " << materno_txt;
                cout << "\n fecha nacimiento: " << fnac_txt;
                cout << "\n direccion: " << dir_txt;
                cout << "\n telefono: " << tel_txt;
                cout << "\n edad: " << edad_txt;
                cout << "\n ----------------------\n";
            }
            archivo.close();
        }
        else
        {
            cout << "\n no se pudo mostrar los datos \n";
        }
    }
};
