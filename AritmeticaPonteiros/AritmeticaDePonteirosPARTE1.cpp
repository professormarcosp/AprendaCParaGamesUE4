#include <iostream>

int main()
{
	int Vetor[] = { 1, 23, -78, 900, 234 };
	int *ptr;
	//Neste momento ptr passa a apontar para o endereço do Vetor. Lembre-se que o endereço de uma variável é o primeiro endereço da mesma
	//Logo isso é o mesmo que ptr = &Vetor[0];
	//ptr = Vetor;
	ptr = Vetor;
	//O nome de um vetor é o mesmo que &Vetor[0]
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endereco: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
	}
	std::cout << "\n*** Enderecos Com Aritmetica de Ponteiros***\n";
	std::cout << "Valor Contido em ptr: " << ptr << "\n";
	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
	//(ptr + 0 ) pega o endereço de ptr e adiciona zero logo é o endereço do primeiro elemento do vetor, já que ptr aponta para o primeiro elemento ptr = Vetor ou ptr = &Vetor[0]

	std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
	//(ptr + 1) pega o endereço de ptr e desloca uma unidade de tamanho do tipo do ponteiro
	//como ptr é do tipo int, ou seja aponta para variáveis do tipo int, nesta arquitetura ele vai somar 4 bytes ao endereço de ptr

	std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
	//(ptr + 2) pega o endereço de ptr e desloca duas unidades de tamanho do tipo do ponteiro como ptr é do tipo int, ou seja aponta para variáveis do tipo int, nesta arquitetura ele vai somar 8 bytes ao endereço de ptr

	//*(ptr + 2) faz o desreferenciamento do ponteiro. Ou seja primeiro ele faz a artimética do ponteiro e vai somar 8 bytes a ptr e com isso vai chegar até o elemento de índice 2

	std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
	//idem para os demais comandos!
	std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";

	//MAs observe que o valor de ptr não mudou.. O que está dentro de ptr não irá mudar!
	//pois o comando apenas usa o valor de ptr! O comando não está indicando para que seja mudado nada na memória
	//Para isso seria: ptr = ptr + 2 por exemplo... ou através de ++ ou --
	//Ex: ptr++ agora sim iria mudar pois ptr++ é o  mesmo que ptr = ptr + 1;
	std::cout << "Valor Contido em ptr: " << ptr << "\n";
	//obs: (ptr + 0) é o mesmo que ptr 
	ptr++;
	std::cout << "Valor Contido em ptr depois de ptr++: " << ptr << "\n";
	//agora mudou pois ptr++ é o mesmo que ptr + 1 que na aritmética de ponteiros é pegar
	//o valor de ptr e somar o tamanho do tipo de dados que ele aponta que no caso é de 4 bytes!

	ptr = &Vetor[3]; //ptr passa a apontar para 900
	ptr--; //decrementa e aponta para -78; ou Vetor[2];
	std::cout << "Valor do Apontado por ptr: " << *ptr << "\n";
	 

	   	
	system("PAUSE");
	return 0;
}
