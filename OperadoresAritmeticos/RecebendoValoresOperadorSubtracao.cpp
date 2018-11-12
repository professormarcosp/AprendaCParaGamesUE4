#include <iostream>

int main()
{
	int Numero01, Numero02;
	int Soma;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Soma = Numero01 - Numero02;
	std::cout << "A Subtração dos dois Numeros: " << Soma << "\n";
	system("PAUSE");
}