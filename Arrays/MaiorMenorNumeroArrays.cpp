#include <iostream>
#include <locale.h>

/*ENTRADA: Receba número elementos desejados (máximo de 20)
PROCESSAMENTO: 
 - Armazena estes dados em um array. 
 - Encontrar maior e o menor elemento desse array
SAÌDA: mostre na tela o maior e o menor elemento desse array
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	int NumElementos;
	int Min, Max;
	int Array[20];

	std::cout << "Digite O número de elementos desejado: ";
	std::cin >> NumElementos;

	//Se o usuário digitar 14
	//o vetor vai de índice 0 até 13
	//logo i precisa ser menor que 14 ou seja 
	//i < NumElementos
	for (int i = 0; i < NumElementos; i++)
	{
		//primeiro vamos receber o vetor, a entrada de dados
		std::cout << "Digite o Elemento" << (i + 1) << ": ";
		std::cin >> Array[i];
		system("CLS");
	}
	//Depois de receber  todo Array vamos ao PROCESSAMENTO
	//Você deve varrer novamente este Array e efetuar a lógica de 
	//achar o valor Min e Max
	Min = Array[0];
	Max = Array[0];
	//No inicio tanto min quanto max são o primeiro elemento vetor

	//Precisamos varrer o vetor e analisar max e min
	//Aqui Processamento
	for (int i = 0; i < NumElementos; i++)
	{
		if (Array[i] > Max)
			Max = Array[i];
		else if (Array[i] < Min)
			Min = Array[i];
	}

	//Agora a SAIDA:
	std::cout << "\n O Menor Valor digitado foi: " << Min << "\n";
	std::cout << "\n O Maior Valor digitado foi: " << Max << "\n";
	
	system("PAUSE");
	return 0;
}
