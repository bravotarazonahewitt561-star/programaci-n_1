#include <iostream>
using namespace std;

 class Rectangulo{
private:
int largo;
int ancho;

public:
Rectangulo(int , int );
void perimetro();
void area();
};
Rectangulo::Rectangulo(int _largo, int _ancho){
largo=_largo;
ancho= _ancho;

}
void Rectangulo::perimetro(){
cout<<"el perimetro es: "<< 2 * (largo + ancho )<<endl;
}
void Rectangulo::area(){
int resultado;
resultado=largo*ancho;
cout<<" la area es: "<<resultado<<"m2"<<endl;
}


