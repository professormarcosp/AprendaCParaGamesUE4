/*Neste exemplo o ideal é mudarmos mesmo os tipos para o que espera as funções pow e sqrt 
Converter de  float para int é tentar colocar algo maior em algo menor. 
Logo teremos perda de informação pois float é maior e tem números funcionários. 
Já int é inteiro logo haverá perda nesta conversão..

Por isso, neste caso o ideal é que as funções potencia e Raiz Quadrada 
tenham retorno iguais aos das funções pow e sqrt respectivamente que é double. 
Além disso temos que trocar os valores que mostrei na aula de int por float nos tipos dos parâmetros 
destas funções para evitar perda de dados */
#include <iostream>
//PROTÒTIPOS DAS FUNCOES
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);
double Potencia(float num1, float num2);
double RaizQuadrada(float num);




int main()
{
	//aqui declare como float
	float Num1, Num2;

	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Num1;

	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Num2;

	std::cout << "\n*** Resultado das operacoes***\n";
	std::cout << Num1 << " e " << Num2 << "\n";
	std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
	std::cout << "Substracao: " << Subtracao(Num1, Num2) << "\n";
	std::cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
	std::cout << "Divisao: " << Divisao(Num1, Num2) << "\n";
	std::cout << "Potencia: " << Potencia(Num1, Num2) << "\n";
	std::cout << "Raiz Quadrada Numero1:" << RaizQuadrada(Num1) << "\n";
	std::cout << "Raiz Quadrada Numero2:" << RaizQuadrada(Num2) << "\n";

	system("PAUSE");
	return 0;
}

float Soma(float num1, float num2)
{
	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}

float Divisao(float num1, float num2)
{
	return num1 / num2;
}

double Potencia(float num1, float num2)
{
	return pow(num1, num2);
}

double RaizQuadrada(float num)
{
	return sqrt(num);
}
