#include "header.h"

int main(){
	
	int prueba[4], a;
	
	for(int i = 0; i < 5; i++){
		
		cout<<"Ingrese un dato: ";
		cin>>a;
		prueba[i] = a;
		
	}
	
	for(int i = 0; i < 5; i++){
		
		cout<<prueba[i]<<endl;
		
	}
	
	return 0;
}
