#include <iostream>
using namespace std;

#include "Soldado.h"
#include "Arma.h"

void Soldado::tomarArma(Arma* unArma) {
	if (armaActual == NULL) {
		this->armaActual = unArma;
		cout << "Arma " << unArma->toString() << " recogida." << endl;
	}
	else {
		cout << "No puedes tener 2 armas!" << endl;
	}

};

void Soldado::dejarArma() {
	if (armaActual != NULL) {
		cout << "Arma " << armaActual->toString() << " tirada." << endl;
		this->armaActual = NULL;
	}
	else {
		cout << "No podes dejar un arma si no tenes ninguna!!!" << endl;
	}
};

void Soldado::saludar() {
	//cout << "bool= " << tieneArma << endl;
	if (armaActual == NULL) {
		cout << "Hola, soy un soldado llamado : " << nombre << " y no tengo arma" << endl;
	}
	else {
		cout << "Hola, soy un soldado llamado : " << nombre << " y tengo arma";
	}
};

void Soldado::disparar() {
	if (armaActual != NULL) {
		this->armaActual->sonar();
	}
	else {
		cout << " no tiene un arma para disparar" << endl;
	}
};

void Soldado::verArma() {
	if (armaActual != NULL) {
		cout << this->armaActual->toString() << endl;
	}
	else {
		cout << "no tienes un arma que ver!" << endl;
	}

}