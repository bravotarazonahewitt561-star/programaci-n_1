#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	double precio,descuento,total;//double para numeros exactos y precisión decimales como:precios,compras, descuentos, etc.
	cout<<"ingrese el precio "<<endl;
	cin>>precio;
	
if(precio>=100){
	total=precio-(precio*0.01);//total=precio - descuento
	cout<<"el precio con descuento es:"<<total<<endl;
}else if(precio>=200){
	total=precio-(precio*0.02);
	cout<<"el precio total es:"<<total<<endl;
}else if(precio>=500){
	total=precio-(precio*0.05);
	cout<<"el precio total es: "<<total<<endl;	
}
	
	
	getch();
	return 0;
}
