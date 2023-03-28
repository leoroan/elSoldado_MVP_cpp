#include "Arma.h"
#include <iostream>

using namespace std;

class Revolver : public Arma {

public:
	Revolver() : Arma("Revolver") {};

	virtual void sonar() override {
		cout << "Puum..." << endl;
	}

	virtual string toString() override {
		return "arma = [" + nombre + "]";
	}
};