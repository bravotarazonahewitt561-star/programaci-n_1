#include <iostream>
#include <string>
using namespace std;

class Servidor {
private:
    string nombre;
    int puerto;
    bool encendido;

public:
    // 1. TU CONSTRUCTOR AQUÍ (Recibe _nombre y _puerto. Pon encendido en false)
Servidor (string _nombre, int _puerto){
this->nombre=_nombre;
this->puerto=_puerto;
this->encendido=false;

}

    // 2. TUS GETTERS AQUÍ (getNombre, getPuerto, getEncendido)
string get_nombre() const  {
 return nombre;
}
int get_puerto(){
return this->puerto;
}
bool get_encendido(){
return this->encendido;
}
    // 3. TU MÉTODO ENCENDER AQUÍ
void encender() {
encendido=true;
cout<<"se prendio el servidor: ";
}

    // 4. TU MÉTODO APAGAR AQUÍ
    void apagar(){
    encendido=false;
    cout<<"se apago el servidor: ";
    }

};

int main() {
    // Creamos el servidor usando el constructor
    Servidor miServer("PiHole-Server", 80);

    // Mostramos los datos iniciales usando los GETTERS
    cout << "Configuracion Inicial:\n";
    cout << "Nombre: " << miServer.get_nombre() << endl;
    cout << "Puerto: " << miServer.get_puerto() << endl;



    // Encendemos el servidor con nuestro método de acción
    miServer.encender();

    // Lo apagamos
    miServer.apagar();
    if (miServer.get_encendido()) {
        cout << "Estado: Corriendo\n\n";
    } else {
        cout << "Estado: Detenido\n\n";
    }

    return 0;
}
