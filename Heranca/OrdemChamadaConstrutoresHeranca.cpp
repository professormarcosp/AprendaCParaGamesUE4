#include <iostream>

class Base
{
	int U, V;;
public:
	// Construtor Padrão
	Base()
	{
		std::cout << "Construtor Classe Base Executado\n";
	}
	Base(int Z)
	{
		std::cout << "Construtor Base Parametro: " << Z << " Chamado\n";
	}
};


class Derivada : public Base
{
	int W;
public:
	// Construtor Padrão
	Derivada()
	{
		std::cout << "Construtor Classe Derivada Executado\n";
	}
	// Construtor Com Parâmentros
	Derivada(int X, int Z):Base(Z)
	{
		std::cout << "Construtor Derivada Parametro: " << X << " Chamado\n";
	}
};

int main()
{
	Base ObjBase;
	Derivada ObjDerivada01;
	Derivada ObjDerivada02(99, 100);
}

