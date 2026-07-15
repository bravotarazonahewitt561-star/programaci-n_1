#include <iostream>
#include <string>
using namespace std;

class Celular{
private:
string modelo;
int bateria;
public:
void set_carga(int _bateria){
if(_bateria<0){
cout<<"no se puede ingresar una carga negativa:"<<endl;
this->bateria;
}else if  (_bateria<=100){
cout<<"se pudo ingresar la bateria correctamente: "<<endl;
this->bateria=bateria;
}else {cout<<" es imposible ingresar esa cantidad de bateria: "<<endl; this->bateria=100;}
}

Celular(string modelo, int bateria){
this->modelo=modelo;
set_carga(bateria);
}
string get_modelo() const {
return this->modelo;
}
int get_bateria() const {
return this->bateria;
}



};




int main (){
Celular Celular1("samsung", 150);
cout<<" =========== estado del telefono ==== "<<endl;
cout<<"nombre del dispositivo  "<<Celular1.get_modelo()<<endl;
cout<<"estado de la bateria: "<<Celular1.get_bateria()<<endl;


return 0;
}
