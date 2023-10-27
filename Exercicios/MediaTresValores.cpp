#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media = 0.0;

	std::cout << "Digite o Primeiro Número: ";
	std::cin >> Num1;
	std::cout << "Digite o Segundo Número: ";
	std::cin >> Num2;
	std::cout << "Digite o Terceiro Número: ";
	std::cin >> Num3;

	Media = (Num1 + Num2 +  Num3) / 3;

	std::cout << "Números Digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
	std::cout << "Média dos Números: " << Media << "\n";

	return 0;
} 
