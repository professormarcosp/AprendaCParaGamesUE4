#include <iostream>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	//Para enviar um vetor para uma função basta enviar o nome do vetor
	MostrarVetor(Vetor, 10);
	//Porém e o tamanho?
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
