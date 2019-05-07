#include <iostream>
#include <string>
/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a média destas notas*/

int main()
{
	//Seria interessante uma variável que você pudesse declarar e ela tivesse compartimentos que armazenariam valores!
	float Nota1, Nota2, Nota3, Nota4, Nota5;
	float Media;
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	std::cout << "\nDigite A primeira nota: ";
	std::cin >> Nota1;

	std::cout << "\nDigite A segunda nota: ";
	std::cin >> Nota2;

	std::cout << "\nDigite A terceira nota: ";
	std::cin >> Nota3;

	std::cout << "\nDigite A quarta nota: ";
	std::cin >> Nota4;

	std::cout << "\nDigite A quinta nota: ";
	std::cin >> Nota5;

	//soma das notas dividido pelo número de notas!
	Media = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5) / 5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	//E se fossem 10 notas?

	system("PAUSE");
	return 0;
}
