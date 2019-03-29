#include <iostream>

int main()
{
	int Numero{ 4096 };
	//precisamos iniciar o ponteiro
	//como está ele aponta para algum endereço qualquer
	//um valor lixo de memória
	//Esta forma é um atalho para declarar e já iniciar a variável ponteiro
	//Porém confude os iniciantes pois o operador  * está presente
	//MAs você pode ler assim
	//int *ptr esta parte apenas declara uma variável ponteiro de nome ptr
	//= &Numero esta parte coloca dentro da variável ptr o endereço de memória da variável Numero;
	//é uma simplicação dos seguintes passos
	int *ptr;
	ptr = &Numero;
	//estas duas linhas acima é o mesmo que a linha abaixo
	//int *ptr = &Numero;
	std::cout << "\nValor da Variavel Numero: " << Numero << "\n";
	std::cout << "\nValor da Variavel ptr: " << ptr << "\n";
	std::cout << "\nValor do Endereço de Numero: " << &Numero << "\n";
	std::cout << "\nValor do Endereço que ptr esta carregado na memória RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";
	   	  	
	system("PAUSE");
	return 0;
}
