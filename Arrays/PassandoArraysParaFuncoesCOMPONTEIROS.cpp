/*
Professor Marcos Pacheco (Mestre em Computação)
Aprenda a programar! Acesse agora: https://www.udemy.com/course/cmaismaisbasico/?referralCode=956A556D144A0F4D36EC
*/

#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);
void AlterarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	int TamanhoVetor = std::size(Vetor);
	
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	
	std::cout << "\nVetor ORIGINAL";
	//Então aqui seria o mesmo que colocar
	MostrarVetor(&Vetor[0], TamanhoVetor);
	AlterarVetor(&Vetor[0], TamanhoVetor);
	std::cout << "\nVetor ALTERADO?";
	MostrarVetor(&Vetor[0], TamanhoVetor);
	//O NOME DE UM VETOR EM C E C++ É O MESMO QUE &Vetor[0]
	//o vetor foi alterado o que indica que os vetores são enviados para as funções, por referência!
	//Mas como funciona?

	//O NOME DE UM VETOR EM C E C++ É O MESMO QUE &Vetor[0]
	//Ou seja, Ao isncrever o nome de um vetor sem os colchetes
	//Na realidade é o mesmo que o endereço de memória do primeiro elemento do vetor!
	
	
	system("PAUSE");
	return 0;
}

//então int Array[] indica que isso na realidade é um ponteiro
//podemos inclusive substituir por
void MostrarVetor(int *Ptr_Array, int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Ptr_Array[i] << " -";
	}
	std::cout << "\n\n";
}

void AlterarVetor(int *Ptr_Array, int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		Ptr_Array[i] = Ptr_Array[i] * 2;
	}

	//Ptr_Array[i] é  mesmo que *(Ptr_Array + i)
	//Mas para entender isso é preciso estudar o assunto da próxima aula
	//Aritmética de ponteiros!

	//Aqui não colocamos nada na tela
	//a função recebeu um array Vetor que foi recebido por Array[]
	//A pergunta é Array recebeu uma cópia de todo o vetor ou Recebeu uma referência de Vetor?
	//Se reecebeu uma cópia estre trecho de código Array[i] = Array[2] * 2;
	/*Não irá mudar o Vetor original int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	Assim Vetor continuaria sendo 1,2,3,4,5,6,7,8,9,10
	Mas se o Vetor estiver sendo enviado por referência o valor será mudado
	pois Array terá o endereço de Vetor e conseguirá mudar seus valores
	*/
}
