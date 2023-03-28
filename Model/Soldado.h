
#include <string>
#include "Arma.h"

using namespace std;

class Soldado {
	string nombre;
	Arma* armaActual;

public:
	Soldado(string x) : nombre(x), armaActual(NULL) {};
	~Soldado() { delete armaActual; };
	void tomarArma(Arma* unArma);
	void dejarArma();
	void disparar();
	void saludar();
	void verArma();
};