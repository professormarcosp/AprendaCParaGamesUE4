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
	//PAra indicar que os números são float
	//pois número sem este f são considerados double e neste caso você estaria colocando double dentro do float
	//mas lembre que float é menor que double e com isso poderia ocorrer perda de dados
	float Notas[5] { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	//importante inicializar variáveis contadoras e acumuladoras
	//muitos erros ocorrem!
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	//esta parte aqui está muito repetitiva, não pode ser melhorada?
	//E se [indice] puder ser colocado como variável
	//ex: [i]
	//esta variável começaria com 0 e iria até 4
	//que comando podemos usar?
	//for!!!

	//Neste for o i vai de zero até 4. Percorre exatamente os índices do vetor Notas
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i+1)<< ": ";
		std::cin >> Notas[i];
		//precisamos de uma variável que acumule a soma das notas!
		Soma = Soma + Notas[i];
		system("CLS");
	}

	//soma das notas dividido pelo número de notas!
	Media = Soma/5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	//E se fossem 10 notas?

	system("PAUSE");
	return 0;
}
