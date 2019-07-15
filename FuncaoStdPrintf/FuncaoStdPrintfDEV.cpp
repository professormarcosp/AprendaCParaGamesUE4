//use este código se estiver usando DEVC++
#include <iostream>
#include <string>
/*exclua tchar.h*/
#include <locale.h>
/*inclua cstdio para que std::printf funcione no DEV*/
#include <cstdio>


int main()
{
	/*Coloque desta forma para acentuar*/
	
	setlocale(LC_ALL, ("portuguese"));
	//Você pode usar ( ) para iniciar variáveis com valores literais
	//{  } é inicialização uniforme, permite tanto iniciar tanto valores literais (int, float, caractere, quanto valores escalares, vetores, enums etc.
	//Coloque o igual antes das chaves
	int NumeroInteiro = { 12 };
	float NumeroReal = { 34.56 };
	char Caractere = {'c'};
	//String é um cadeia de caracteres, é um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	//Aqui coloque parênteses ao invés de chaves
	std::string Texto = ("Vou Aprender C++ e descobrir o lado sombrio da força!");
	//%d indica que você quer que seja colocado na string:
	//"Valor Número Inteiro = %d " o valor da variável NumeroInteiro
	std::printf("Valor Inteiro: %d - Real: %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "\nTexto da String: " << Texto << "\n";

	std::printf("O Valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", Caractere, Caractere);
	/*%d Número decimal inteiro (int).
	%f	 Número decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o código ASCII correspondente ao valor dado.
	%s	 Sequência de caracteres (string, em inglês).
	*/

	system("PAUSE");
	return 0;
}
