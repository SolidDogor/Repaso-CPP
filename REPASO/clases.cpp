#include "header.h"

//Aquí van las clases
class Pokemon{
	//Estos son los atributos
	public:
		string nombre;
		float peso;
	//Estos son el constructor y los métodos
	public:
		Pokemon(string , float);
		void Saludo();
};

Pokemon::Pokemon(string _nombre, float _peso){
	nombre = _nombre;
	peso = _peso;
}

void Pokemon::Saludo(){
	cout<<"El pokemon que  te saluda es: "<<nombre<<". Su peso es de "<<peso<<"(kg)\n";
}

int main(){
	
	Pokemon pokemon1 = Pokemon("Charmander", 1.2);
	pokemon1.Saludo();
	
	Pokemon pokemon2("Pikachu", 0.9);
	pokemon2.Saludo();
	
	return 0;
}
