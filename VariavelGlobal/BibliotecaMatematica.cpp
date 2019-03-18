#include <iostream>
#include "Matematica.h"

int NumeroGlobal = 5;

int main()
{
	int Numero1, Numero2;
	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero2;
	std::cout << "\nResultado Operadores Matematicas\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtracao: " << Subtracao(Numero1, NumeroGlobal);
	std::cout << "\nMultiplicacao: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivisao: " << Divisao(Numero1, Numero2);
	std::cout << "\nPotencia: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaizQuadrada Numero1: " << RaizQuadrada(Numero1);
	std::cout << "\nRaizQuadrada Numero2: " << RaizQuadrada(Numero2) << "\n";
	system("PAUSE");
	   	  
	return 0;
}