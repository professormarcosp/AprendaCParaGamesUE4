/*
Professor Marcos Pacheco (Mestre em Computação)
Aprenda a programar! Acesse agora: https://www.udemy.com/course/cmaismaisbasico/?referralCode=956A556D144A0F4D36EC
*/

#include<iostream>

//protótipos
/*Recebe um array por referência através de um ponteiro
Ou seja a variável *Array irá receber um endereço de memória de um vetor que será enviado para esta função
Duplica Vetor*/
void DuplicaVetor(int *Array, int Tam);

/*Esta função também recebe um Array via Ponteiro mas também retorna um ponteiro que neste caso deve ser um ponteiro para int. Logo será capaz de devolver um ponteiro
para int ou seja um array. NA realidade vai retornar o endereço do primeiro elemento do array*/
int *InverteVetor(int *Array, int Tam);

//Mostra o vetor recebido via ponteiro
void MostraVetor(int *Array, int Tam);

int main()
{
	int Numeros[] = { 1,2,3,4,5,6,7,8,9,10 };
	int Tam = sizeof(Numeros) / sizeof(int);
	//chama a função e passa o vetor Números para ela
	//O endereço do primeiro elemento do vetor será enviado para Array
	MostraVetor(Numeros, Tam);
	DuplicaVetor(Numeros, Tam);
	MostraVetor(Numeros, Tam);
	//Aqui Mostrar vetor recebe o retorno da função Inverte Vetor
	//E este retorno será o endereço do primeiro elemento do array inventido
	MostraVetor(InverteVetor(Numeros, Tam), Tam);
	system("PAUSE");
	return 0;
}

void DuplicaVetor(int * Array, int Tam)
{
	//função percorre o vetor e duplica os valores
	//do vetor
	for (int i = 0; i < Tam; i++)
	{
		Array[i] = 2 * Array[i];
	}
}


//Esta função recebe um array(na realidade recebe o endereço do primeiro elemento do array)
//E devolve um array invertido
int * InverteVetor(int * Array, int Tam)
{
	//para inverter o vetor iremos usar um vetor auxiliar
	//ele precisa ser estático pois senão ao sair da função ele iria desaparecer da memória, e não conseguiria ser enviado como retorno da função
	int j = 0;
	static int ArrayInvertido[10];
	//Para conseguir um vetor com valores invertidos faremos
	//Começa do indice Tam -1 ou seja 10 -1 = 9 e vai até 0 i>=0
	for (int i = Tam - 1; i >= 0; i--)
	{
		//J vai  de zero até 9
		//enquanto i vai de 9 até 0
		/*assim teremos dentro do for todas estas execuções
		ArrayInvertido[0] = Array[9];
		ArrayInvertido[1] = Array[8];
		ArrayInvertido[2] = Array[7];
		ArrayInvertido[3] = Array[6];
		ArrayInvertido[4] = Array[5];
		ArrayInvertido[5] = Array[4];
		ArrayInvertido[6] = Array[3];
		ArrayInvertido[7] = Array[2];
		ArrayInvertido[8] = Array[1];
		ArrayInvertido[9] = Array[0];
		*/
		ArrayInvertido[j] = Array[i];
		j++;
	}
	//Aqui a função está retornando o mesmo que o endereço de memória
	//do primeiro elememento do ArrayInvertido
	return ArrayInvertido;
}

//aqui recebe um vetor via ponteiro e mostra na tela
void MostraVetor(int *Array, int Tam)
{
	//coloca colchete antes do for
	std::cout << "[ ";
	//Coloca os elementos e finaliza o loop
	for (int i = 0; i < Tam; i++)
	{
		std::cout << Array[i] << "  ";
	}
	//e depois coloca ] para fechar o vetor
	std::cout << "] \n\n";
}
