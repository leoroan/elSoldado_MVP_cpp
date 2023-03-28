#include <iostream>
#include"Arma.h"

using namespace std;

class Rifle : public Arma {

public:
	Rifle() : Arma("Rifle") {};

	// Heredado v�a Arma
	virtual void sonar() override {
		cout << "Puum, Puum, Puum!..." << endl;
	}

	// Heredado v�a Arma
	virtual string toString() override {
		return "arma = [" + nombre + "]";
	}
};