/*
Professor Marcos Pacheco (Mestre em Computação)
Curso: Aprendendo programação básica e avançada com Linguagem C++
Acesse agora: https://www.udemy.com/course/cmaismaisbasico/?referralCode=956A556D144A0F4D36EC
*/

#include <iostream>
#include <locale>
/*Exercício Soma De 10 Números */

int main()
{
	setlocale(LC_ALL, "portuguese");

	double Numeros[10];
	double Soma{ 0.0 };
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite O Número" << (i+1) << ": ";
		//i++ é o mesmo que i = i + 1; e neste caso a região
		//de memória de nome i está sendo afetada e incrementada
		//mas se usarmos somente (i+1) nada na memória será afetado
		//pois não tem atribuição não tem: i = (i + 1). Somente  (i + 1)
		//e assim só usamos o valor de i e não alteramos

		std::cin >> Numeros[i];
		Soma += Numeros[i];
		//Limpa a tela Clear Screen
		//Clear no Linux OU CLS Windows
		system("Clear || CLS");
	}
	std::cout << "\n A Soma dos Números é: " << Soma << "\n";
	system("PAUSE");
	return 0;
}
