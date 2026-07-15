#include <iostream>
#include "poo.2.cpp"
using namespace std;
int main (){
int largo,ancho;
cout<<"ingrese dos digitos para hallar su perimetro y area"<<endl;
cin>>largo>>ancho;

Rectangulo r1(largo,ancho);
r1.perimetro();
r1.area();
return 0;
}
