#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	double total,a,b;
	int opcion;
	cout<<"1.sumar "<<endl;
	cout<<"2.restar"<<endl;
	cout<<"3.multiplicar"<<endl;
	cout<<"4.dividir"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"elegiste sumar"<<endl;
			cout<<"ingrese dos numeros"<<endl;
			cin>>a>>b;
			total=a+b;
			cout<<"la suma total es: "<<total<<endl;
			break;
		case 2: 
		cout<<"elegiste restar"<<endl;
		cout<<"ingrese dos numeros"<<endl;
		cin>>a>>b;
		total=a-b;
		cout<<"la resta es: "<<total<<endl;
		break;
		case 3:
			cout<<"elegiste multiplicar"<<endl;
			cout<<"ingrese dos numeros para multiplicar"<<endl;
			cin>>a>>b;
			total=a*b;
			cout<<"el resultado es:"<<total<<endl;
			break;
			case 4:
				cout<<"elegiste división"<<endl;
				cout<<"ingrese dos numeros"<<endl;
				cin>>a>>b;
				if(b != 0){
				total=a/b;
				cout<<"la respuesta es:. "<<total<<endl;
			}else {
				cout<<"no se puede dividir"<<endl;
			}
				break;
				default: 
				cout<<"la opcion ingresado no es valido"<<endl;
		
	}
	
	
	getch();
	return 0;
}
