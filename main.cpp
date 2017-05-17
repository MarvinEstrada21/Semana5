//Typeinfo: identificación de tipos de datos
#include <typeinfo>
#include <iostream>

using namespace std;

class Base{
	virtual void foo(){}
};

class Derivada : public Base{
	virtual void foo(){}
};

class DerivadaDos : public Derivada{
	virtual void foo(){}
};

int main(){
	Base base;
	Derivada derivada;
	DerivadaDos derivada2;

	cout << "Clase Base: " << typeid(base).name() << endl;
	cout << "Clase Derivada: " << typeid(derivada).name() << endl;
	cout << "Clase Derivada2: " << typeid(derivada2).name() << endl;

	cout << "Base: " << typeid(Base).name() << endl;
	if (typeid(Base) == typeid(base)){
		cout << "La variable es tipo Base" << endl;
	}

	//Apuntadores
	Base* variable = new Derivada();
	cout << "El tipo de la variable es: " << typeid(variable).name() << endl;
	if (typeid(Base) == typeid(*variable)){
		cout << "Es un apuntador a Base." << endl;
	}
	delete variable;
	return 0;
}
