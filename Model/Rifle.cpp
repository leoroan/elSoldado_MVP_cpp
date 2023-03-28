#include <iostream>
#include"Arma.h"

using namespace std;

class Rifle : public Arma {

public:
	Rifle() : Arma("Rifle") {};

	// Heredado vía Arma
	virtual void sonar() override {
		cout << "Puum, Puum, Puum!..." << endl;
	}

	// Heredado vía Arma
	virtual string toString() override {
		return "arma = [" + nombre + "]";
	}
};