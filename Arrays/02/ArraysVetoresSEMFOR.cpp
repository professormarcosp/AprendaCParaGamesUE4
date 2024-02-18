/*
Professor Marcos Pacheco (Mestre em Computação)
Aprenda a programar! Acesse agora: https://www.udemy.com/course/cmaismaisbasico/?referralCode=956A556D144A0F4D36EC
*/

#include <iostream>
#include <string>
/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a média destas notas*/

int main()
{
	//Seria interessante uma variável que você pudesse declarar e ela tivesse compartimentos que armazenariam valores!

	//Agora foi criada uma variável de nome Notas com 5 compartimentos
	//indexados a partir do zero [0] [1] [2] [3] [4]
	//acessíveis por um único nome Notas[índice]
	//Devem ter todos os compartimentos o mesmo tipo de dados e por isso ela é considerada uma variável composta (vários locais de armazenamento) e homogênea por aceitas apenas um tipo de dado dentro de cada comportimento.
	//Você já pode iniciar os valores já na declaração
	//Este é o estilo herdado da linguagem C
	//Agora C++
	//Por que este f?
	float Notas[5] { 1.0, 2.0, 3.0, 4.0, 5.0 };
	float Media;
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	std::cout << "\nDigite A primeira nota: ";
	//lembre-se a primeira posição começa no índice zero!
	std::cin >> Notas[0];

	std::cout << "\nDigite A segunda nota: ";
	std::cin >> Notas[1];

	std::cout << "\nDigite A terceira nota: ";
	std::cin >> Notas[2];

	std::cout << "\nDigite A quarta nota: ";
	std::cin >> Notas[3];

	std::cout << "\nDigite A quinta nota: ";
	std::cin >> Notas[4];

	//soma das notas dividido pelo número de notas!
	Media = (Notas[0] + Notas[1] + Notas[2] + Notas[3] + Notas[4]) / 5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	//E se fossem 10 notas?

	system("PAUSE");
	return 0;
}
