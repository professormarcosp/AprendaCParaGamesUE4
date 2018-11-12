#include <iostream>

int main()
{
	float Numero01, Numero02;
	float Resultado;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Resultado = Numero01 / Numero02;
	std::cout << "A Divisao dos dois Numeros: " << Resultado << "\n";
	system("PAUSE");
}