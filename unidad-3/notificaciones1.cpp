#include <iostream>
#include <string>
using namespace std;
class Notificacion{
protected:
string mensaje;
string destinatario;

public:

Notificacion(string mensaje, string destinatario){
this->mensaje=mensaje;
this->destinatario;
}
virtual void enviar(){
cout<<" enviado notificacacion: ";
}
virtual void enviarPrioritario(){

cout<<"enviando notificacion con prioridad";
}

virtual void reenviar(){
cout<<"reenviando mensaje";
}
};

class Correo : Notificacion{
public:
Correo(string mensaje, string destinatario) : Notificacion(mensaje, destinatario){}

void enviar() override {
cout<<" enviando a destinatario: "<<this->destinatario<<endl;
cout<<"enviando mensaje:  "<<this->mensaje<<endl;
}

void enviarPrioritario() override {
cout<<"enviando mensaje con prioridad "<<mensaje<<endl;
cout<<"enviando destinatario con prioridad"<<destinatario<<endl;
}
};

class Sms : Notificacion{
public:
 Sms(string mensaje, string destinatario ) : Notificacion(mensaje ,destinatario){}
void enviar()override {
cout<<"enviando a destinatario: "<<destinatario<<endl;
cout<<"enviando  mensaje"<<mensaje<<endl;
}
virtual void reenviar() override {
cout<<" reenviando a destinatario: "<<this->destinatario<<endl;
cout<<"reenviando mensaje:  "<<this->mensaje<<endl;

}
};

class Token {


};
