#include "Arma.h"
#include <iostream>

using namespace std;

class Escopeta : public Arma {

public:
	Escopeta() : Arma("Escopeta") {};

	virtual void sonar() override {
		cout << "Paaa!!..." << endl;
	}

	virtual string toString() override {
		return "arma = [" + nombre + "]";
	}
};