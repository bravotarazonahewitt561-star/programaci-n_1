#include <iostream>
#include <conio.h>
using namespace std;
int main (){

	for(int i=1; i<=100 ; i++ ){
		//%2 igual a = 0 es igual a numeros pares 
		if(i % 2 == 0){
		cout<<"numeros pares"<<" "<<i<<" "<<endl;
		}
		
	}
	 for(int i=1; i<=100;  i++){
	 	if(i % 2 !=0){//%2 != 0 son numeros impares o tambien inicializar en 1 y sumar 2 en 2 
	 		cout<<"numeros impares"<<" "<<i<<" "<<endl;
		 }
	 }
	
	getch();
	return 0;
}
