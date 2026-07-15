#include <iostream>
#include <string>
using namespace std;

class Guerrero{

private:
string nombre;
int vida;
public:
 void set_vida(int _vida){
if(_vida<0){
cout<<"imposible meter esa fuerza:";
this->vida=0;
}else if (_vida>100){
cout<<"se puede ingresar normal: ";
this->vida=100;
}else {
cout<<"se guardo coreectamente:";
this->vida=_vida;
}
}

Guerrero(string nombre, int vida){
this->nombre=nombre;
set_vida(vida);
}

string get_nombre() const{
return this->nombre;
}
int get_vida() const{
return this->vida;
 }
};


int main (){

Guerrero Guerrero1("hewitt",5000);
cout<<"======= personaje ========== "<<endl;
cout<<"su nombre:"<<Guerrero1.get_nombre();
cout<<"vida actual"<<Guerrero1.get_vida();



return 0;
}

