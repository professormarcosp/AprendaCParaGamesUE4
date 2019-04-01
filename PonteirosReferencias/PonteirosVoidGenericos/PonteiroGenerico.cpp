#include <iostream>

int main()
{
	int Numero{ 4890 };
	char Letra{ 'E' };
	//declarei ponteiro genérico ou vazio(void)
	//significa que ele não tem ainda um tipo que possa apontar
	//isso é útil quando você por exemplo retornar algo de alguma função e atribuir a um ponteiro. Neste caso você não sabe de antemão que tipo de dado você vai retornar e assim depois você pode especificar qual tipo de dado o ponteiro void* passará a apontar
	void *ptrG;
	//Agora ptrG passa a apontar para a a variável Letra
	//Pois ele recebeu o endereço de memória desta variável
	ptrG = &Letra;
	//por que deu erro?
	//Lembre que o endereço de uma variável é apenas o primeiro byte dela. O primeiro endereço em que ela esta carregada.
	//Assim como o compilador vai saber como LER a variável
	// ex:  a partir do endereço 105 eu devo percorrer quanto bytes?
	// Ele só saberá isso quando você indicar o tipo do ponteiro ptrG
	//Por enquanto ele é void!
	//logo já que Letra é do tipo char voê deve
	//indicar que o ponteiro ptrG está apontando para um char
	//isso é feito via cast
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";
	//primeiro você faz o cast e depois coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//agora o compilador sabe que deverá ler 1(byte) para colocar um char na tela!
	ptrG = &Numero;
	std::cout << "\nValor de Numerom via ptrG: " << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}
