
Professor Marcos Pacheco (Mestre em Computação)
[Aprenda a programar! Acesse agora:] (https://www.udemy.com/course/cmaismaisbasico/?referralCode=956A556D144A0F4D36EC)


#include <iostream>
#include <string>

int main()
{
	
	//Você pode suprimir o número nos colchetes.
	float Notas[]{ 0.0f, 1.0f, 2.0f, 3.0f, 4.0f }; // se quiser iniciar todos com zero pode ser assim com único zero 0.0
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;
	
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i+1)<< ": ";
		std::cin >> Notas[i];
		Soma = Soma + Notas[i];
		system("CLS");
	}
	
	Media = Soma/5;
	
	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	
	system("PAUSE");
	return 0;
}
