#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//então para declarar uma variável que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da variável>
	int *ptr;
	//obs: a posição do asterisco neste caso não importa
	//int* ptr; //dá no mesmo!


	int Numero = 101;
	//Aqui vamos colocar na tela o endereço de memória
	//da variável Número. Ou seja onde ela está carregada na memória RAM. Lembre-se que o que vai para tela é o primeiro endereço da variável número
	//pois ela ocupa 4 endereços pois tem 4 bytes de tamanho
  
	std::cout << "\nEndereço de Número: " << &Numero;
	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
	//ou seja qual lugar da RAM ele está alocado?
	//veja nós ainda não estamos colocando na tela nada que esteja dentro das variáveis.
	//pois para colocar o que está dentro das variáveis
	//nós usamos apenas o nome da variável!
	//exemplo std::cout << Numero
	//std::cout << ptr
  
	std::cout << "\nEndereço de ptr: " << &ptr << "\n";
  
	system("PAUSE");
	return 0;
}
