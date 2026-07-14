
#include <iostream>
using namespace std;
 int main (){
 	
 	int edad;
 	 cout<<"ingrese su edad";
 	cin>>edad;
 	
 	if(edad<=12){
 		cout<<"es un ni�o:"<<endl;
	 }
	else if(edad<=17){
		cout<<"es un adolescente"<<endl;
		
	}
	else if(edad<=59){
		cout<<"es un adulto"<<endl;
		
	}
	else{
		cout<<"adulto mayor"<<endl;
	}
 	return 0;
 }
