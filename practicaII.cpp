#include <iostream>
#include <string>
#include <fstream>//para txt // ofstream crear, ifstream abrir,

using namespace std;


class Paciente
{
private://caracteristicas, solo es accesible dentro de la clase
    string dni;
    string nombre;
    string telefono;

public://metodos o funciones

    Paciente()
    {
        dni = "";
        nombre = "";
        telefono = "";
    }

    Paciente(string dni, string nombre, string telefono)
    {
        this->dni = dni;
        this->nombre = nombre;
        this->telefono = telefono;
    }

    void registrar()
    {
        cout << "\nDNI: ";
        cin >> dni;

        cin.ignore();

        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Telefono: ";
        getline(cin, telefono);
    }

    void mostrar()
    {
        cout << "\n----- PACIENTE -----";
        cout << "\nDNI: " << dni;
        cout << "\nNombre: " << nombre;
        cout << "\nTelefono: " << telefono << endl;
    }

void guardarTXT(){
ofstream archivo ("paciente.txt", ios::app );
if(archivo.is_open()){
archivo<<dni<<"|"<<nombre<<"|"<<telefono<<endl;
archivo.close();
cout<<"\n los datos se guardaron correctamente \n";
}else{cout<<"\n no se pudo abrir el archivo para guardar. \n";}
}

static void leerTXT(){
ifstream archivo("paciente.txt");
if (archivo.is_open()){
string dni_txt,nombre_txt,telefono_txt;
cout<<" \n ======= lista de pacientes ======= \n ";

 while (getline(archivo,dni_txt,'|')){
 getline(archivo,nombre_txt,'|');
 getline(archivo, telefono_txt);

 cout<<"\n dni: "<<dni_txt<<endl;
 cout<<"\n nombre: "<<nombre_txt<<endl;
 cout<<"\n telefono: "<<telefono_txt<<endl;
 cout<<"\n ----------------------\n ";
 }
 archivo.close();
}else {
cout<<"\n no se pudo mostrar los datos \n ";}
}
};
class Medico
{
private:
    string codigo;
    string nombre;
    string especialidad;

public:

    Medico()
    {
        codigo = "";
        nombre = "";
        especialidad = "";
    }

    Medico(string codigo, string nombre, string especialidad)
    {
        this->codigo = codigo;
        this->nombre = nombre;
        this->especialidad = especialidad;
    }

    void registrar()
    {
        cout << "\nCodigo: ";
        cin >> codigo;

        cin.ignore();

        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Especialidad: ";
        getline(cin, especialidad);
    }

    void mostrar()
    {
        cout << "\n----- MEDICO -----";
        cout << "\nCodigo: " << codigo;
        cout << "\nNombre: " << nombre;
        cout << "\nEspecialidad: " << especialidad << endl;
    }

void guardarTXT(){
ofstream archivo ("medico.txt", ios::app);
if(archivo.is_open()){
archivo<<codigo<<"|"<<nombre<<"|"<<especialidad<<endl;
archivo.close();
cout<<"\n se registro correctamente \n ";
}else cout<<"<\n no se pudo guardar los datos \n ";
}

static void leerTXT(){
ifstream archivo("medico.txt");
if(archivo.is_open()){
string codigo_txt,nombre_txt,especialidad_txt;
cout<<"\n ======= lista de medicos ========== \n ";

while (getline(archivo,codigo_txt,'|')){
getline(archivo,nombre_txt,'|');
getline(archivo, especialidad_txt);
cout<<" \n codigo: "<<codigo_txt<<endl;
cout<<"\n nombre: "<<nombre_txt<<endl;
cout<<"\n especialidad: "<<especialidad_txt<<endl;
cout<<"\n ---------";
}
archivo.close();
}else cout<<"\n no se puede mostrar \n";
}
};

class Servicio
{
private:
    string codigo;
    string descripcion;
    float costo;

public:

    Servicio()
    {
        codigo = "";
        descripcion = "";
        costo = 0;
    }

    Servicio(string codigo, string descripcion, float costo)
    {
        this->codigo = codigo;
        this->descripcion = descripcion;
        this->costo = costo;
    }

    void registrar()
    {
        cout << "\nCodigo: ";
        cin >> codigo;

        cin.ignore();

        cout << "Descripcion: ";
        getline(cin, descripcion);

        cout << "Costo: ";
        cin >> costo;
        cin.ignore();
    }

    void mostrar()
    {
        cout << "\n----- SERVICIO -----";
        cout << "\nCodigo: " << codigo;
        cout << "\nDescripcion: " << descripcion;
        cout << "\nCosto: S/. " << costo << endl;
    }
    void guardarTXT(){
    ofstream archivo("servicio.txt", ios::app);
    if(archivo.is_open()){
    archivo<<codigo<<"|"<<descripcion<<"|"<<costo<<endl;
    archivo.close();
    cout<<"\n se guardo el tipo de servicio correctamente \n ";
    }else {cout<<" \n no se pudo guardar el servicio \n ";}
    }

    static void leerTXT(){
    ifstream archivo("servicio.txt");
    if (archivo.is_open()){
    string codigo_txt,descripcion_txt,costo_txt;
    cout <<"\n ============ SERVICIOS ========"<<endl;
     while (getline(archivo,codigo_txt,'|')){
     getline(archivo,descripcion_txt,'|');
     getline(archivo,costo_txt);

     cout<<"\n codigo: "<<codigo_txt;
     cout<<"\n descripcion: "<<descripcion_txt;
     cout<<"\n costo "<<costo_txt;
     }
     archivo.close();
    }else {cout<<"\n no puede leer los servicios \n ";}
    }
};


class Cita
{
private:
    string fecha;
    string hora;

public:

    Cita()
    {
        fecha = "";
        hora = "";
    }

    Cita(string fecha, string hora)
    {
        this->fecha = fecha;
        this->hora = hora;
    }

    void registrar()
    {
        cout << "\nFecha: ";
        cin >> fecha;

        cout << "Hora: ";
        cin >> hora;
    }

    void mostrar()
    {
        cout << "\n----- CITA -----";
        cout << "\nFecha: " << fecha;
        cout << "\nHora: " << hora << endl;
    }

void guardarTXT(){
ofstream archivo("cita.txt",ios::app);
if (archivo.is_open()){
archivo<<fecha<<"|"<<hora<<endl;
archivo.close();
cout<<"\n se guardo correctamente \n";
} else {cout<<" \n no se pudo guardar\n";}
}

static void leerTXT(){
ifstream archivo("cita.txt");
if (archivo.is_open()){
string fecha_txt,hora_txt;
cout<<" \n ======== CITAS =========== ";

while (getline(archivo,fecha_txt,'|')){
getline (archivo,hora_txt);

cout<<"\n fecha: "<<fecha_txt;
cout<<"\n hora: "<<hora_txt;
}
archivo.close();
}else {cout<<"no se pude mostar citas. \n ";}
}
};


int main()
{

    Paciente paciente;
    Medico medico;
    Servicio servicio;
    Cita cita;

    int opcion;

    do
    {
        cout << "\n\n========== CLINICA ==========";
        cout << "\n1. Registrar Paciente";
        cout << "\n2. Registrar Medico";
        cout << "\n3. Registrar Servicio";
        cout << "\n4. Registrar Cita";
        cout<<"\n5. mostrar datos en memoria temporal ";
        cout << "\n6. Mostrar Datos, guardados en txt. ";
        cout << "\n0. Salir";
        cout << "\nSeleccione una opcion: ";
        cin >> opcion;

        switch(opcion)
        {
            case 1:
                paciente.registrar();
                paciente.guardarTXT();
                break;

            case 2:
                medico.registrar();
                medico.guardarTXT();
                break;

            case 3:
                servicio.registrar();
                servicio.guardarTXT();
                break;

            case 4:
                cita.registrar();
                cita.guardarTXT();
                break;
            case 5:
            paciente.mostrar();
            medico.mostrar();
            servicio.mostrar();
            cita.mostrar();
            break;

            case 6:

                Paciente::leerTXT();
                Medico::leerTXT();
                Servicio::leerTXT();
                Cita::leerTXT();
                break;

            case 0:
                cout << "\nPrograma finalizado.";
                break;

            default:
                cout << "\nOpcion incorrecta.";
        }

    }while(opcion != 0);

    return 0;
}
