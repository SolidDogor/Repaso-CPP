#include "header.h"

//Clase padre
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

//Clase hija
class PokemonFuego : public Pokemon{
	public:
		int vida;
		char genero;
	public:
		PokemonFuego(string, float, int, char);
		void Saludo();
};

PokemonFuego::PokemonFuego(string _nombre, float _peso, int _vida, char _genero) : Pokemon(_nombre, _peso){
	vida = _vida;
	genero = _genero;
}

void PokemonFuego::Saludo(){
	Pokemon::Saludo();
	cout<<"El pokemon tiene "<<vida<<" puntos de vida. Su genero es: "<<genero<<".\n";
}

int main(){
	
	PokemonFuego pokemonFuego1("Charizard", 10.34, 300, 'M');
	pokemonFuego1.Saludo();
	
	return 0;
}
