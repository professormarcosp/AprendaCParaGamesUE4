#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	//Para enviar um vetor para uma função basta enviar o nome do vetor
	
	//sizeof devolve o número em Bytes do tamanho de uma variável ou tipo
	//logo sizeof(Vetor) vai devolver o numero de elementos do vetor multiplicado pelo tamanho de seu tipo
	//pois são gastos 4bytes por int neste vetor e como são 10 elementos
	//o vetor terá tamanho 40bytes
	//Mas precisamos saber o tamanho!
	//Basta dividir pelo tipo do vetor
	int TamanhoVetor = std::size(Vetor);
	//A partir da Versão C++ 17 ou C++ 2017 você pode usar std::size
	
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	/*std::cout << "\nTamanho de um float " << sizeof(float);
	std::cout << "\nTamanho de um int " << sizeof(int);*/

	MostrarVetor(Vetor, TamanhoVetor);
	//Porém é o tamanho?
	//Dá para calcular este tamanho sem ter que enviar?
	
	system("PAUSE");
	return 0;
}

//Para receber um vetor basta colocar o tipo nome do vetor e [ ]
//ou já com tamanho int Array[10]
void MostrarVetor(int Array[], int TamVetor)
{
	
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}
