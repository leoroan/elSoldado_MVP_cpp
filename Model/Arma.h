#include <string>
using namespace std;

class Arma {
protected:
	string nombre;
public:
	Arma(string n) : nombre(n) {};
	~Arma() {};
	virtual string toString() = 0;
	virtual void sonar() = 0;
};
