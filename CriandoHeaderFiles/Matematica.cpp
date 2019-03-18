#include "Matematica.h"
#include <cmath>

int Soma(int num1, int num2)
{
	return num1 + num2;
}

int Subtracao(int num1, int num2)
{
	return num1 - num2;
}

int Multiplicacao(int num1, int num2)
{
	return num1 * num2;
}

float Divisao(int num1, int num2)
{
	//faz uma divisao inteira pois num1 e num2 são inteiros
	//mas podemos fazer cast
	//agora estamos indicando que o inteiro deve ser um float
	return (float)num1 / (float)num2;
}

int Potencia(int num1, int num2)
{
	return pow(num1, num2);
}

float RaizQuadrada(int num)
{
	return sqrt(num);
}
