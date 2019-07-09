/*ENTRADA: 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7 e 10.0 
PROCESSAMENTO: for each, auto, tamanho vetor sizeof
media simples (soma das notas) / Numero de Notas
SAIDA: Media de Notas
*/
#include <iostream>
#include <iomanip>

int main()
{
	
	double Notas[]{ 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0 };
	double SomaDasNotas{ 0.0 };
	int TamArray;
	//Relembrado tamanho do array Notas em Bytes divido pelo tamanho do tipo de dados em bytes
	TamArray = sizeof(Notas) / sizeof(double);
	std::cout << "\n Tamanho Vetor Notas: " << sizeof(Notas) << "Bytes \n";
	std::cout << "\n Tamanho Tipo Double: " << sizeof(double) << "Bytes \n";

	for (auto Nota : Notas)
	{
		SomaDasNotas += Nota;
	}
	std::cout << "Media de Notas do Aluno: " << std::fixed << std::setprecision(2) << SomaDasNotas / TamArray << std::endl;
	system("PAUSE");
	return 0;
}
