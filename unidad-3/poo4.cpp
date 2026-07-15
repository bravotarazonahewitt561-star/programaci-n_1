#include <iostream>
using namespace std;
class Tiempo {
private:
int horas,minutos,segundos;
public:
Tiempo(int,int,int);
Tiempo(long);
void mostrar_tiempo();
};

Tiempo::Tiempo(int _horas,int _minutos, int _segundos){
horas=_horas;
minutos=_minutos;
segundos=_segundos;
}//12341
Tiempo::Tiempo(long tiempo){
horas=int(tiempo/10000);
minutos=int((tiempo-horas*10000)/100);
segundos=int(tiempo-horas*10000-minutos*100);
}
void Tiempo::mostrar_tiempo(){
cout<<"el tiempo actual es: "<<horas<<"h : "<<minutos<<"m : "<<segundos<<" s :"<<endl;
}
int main(){
int horas,minutos,segundos;
long tiempos;
cout<<"ingrese el tiempo actual: "<<endl;
cin>>horas>>minutos>>segundos;


Tiempo t1(horas,minutos,segundos);
t1.mostrar_tiempo();
cout<<"ingrese un tiempo seguido: "<<endl;
cin>>tiempos;
Tiempo t2(tiempos);
t2.mostrar_tiempo();

Tiempo t3(234512);
t3.mostrar_tiempo();
return 0;
}
