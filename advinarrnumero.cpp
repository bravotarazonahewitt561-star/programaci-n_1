#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	
	int numero,numero1,numero2,numero3;
	cout<<"ingrse 4 números de 1-100"<<" "<<endl;
	cin>>numero>>numero1>>numero2>>numero3;
	
	if(numero==2){
		cout<<"advinaste el numero: "<<numero<<endl;
	} else if(numero1==45){
		cout<<"advinaste el numero "<<numero<<" "<<endl;
	}else if (numero2==17){
		cout<<"advinaste el numero"<<" "<<endl;
	}else if(numero3==10){
		cout<<"ingresaste el numero correcto" <<" "<<endl;
	}else{
		cout<<"el numero ingresado no fue acertado"<<endl;   
	}
		
	getch ();   
    return 0;	
}
