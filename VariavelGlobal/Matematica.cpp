#include "Matematica.h"
#include <cmath>

//Variavei Global pois declarei fora de
//qualquer função. Logo ela será acessivel em qualquer função incluindo a função main()
//
int NumeroGlobal = 10;

int Soma(int num1, int num2)
{
	//esta variável só é acessível dentro da função Soma
	int NumeroLocal = 5;
	return num1 + NumeroGlobal;
}

int Subtracao(int num1, int num2)
{
	if (num1 > num2)
	{
		//neste caso qualquer varíável declarada entre as chaves de algo. será acessível somente dentro destas chaves. A isso chamados ESCOPO de variável
		int NumeroLocalAEsteIf = 20;
	}
	//Mesmo NumeroLocalAEsteIf estando dentro da função Subtracao ela somente
	//estará acessível para o escolo{ } de onde ela foi declarada ele é uma variável local a este if!
	return num1 - NumeroGlobal;
	//já NumeroGlobal é global! possui escopo global.. ou seja é acessada
	//em qualquer função do programa, logo em qualquer parte do programa pois ela é global.
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
