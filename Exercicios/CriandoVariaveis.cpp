#include <iostream>
/*Crie um programa em C++ que:
Declara uma variável do tipo int de nome NumComputadores
Declara uma variável do tipo int de nome SerialComputadores
Inicia a variável NumComputadores com o valor 100;
Inicia a variável SerialComputadores com o valor 11111;
Coloca na tela uma linha com cifrões $$$$$$$$$$$$$$
Coloca na tela o nome e os valores das variáveis NumComputadores e SerialComputadores
Coloca nom final na tela uma linha com cifrões $$$$$$$$$$$$$$
Obs: lembre-se de colocar o comando para Pausar a Tela
*/
int main()
{
	//Cria um local na memória do tipo inteiro (int) de nome NumComputadores e coloca neste local o valor 100
	int NumComputadores = 100;
	//Cria um local na memória do tipo inteiro (int) de nome SerialComputadores e coloca neste local o valor 11111
	int SerialComputadores = 11111;

	//Coloca na tela cifrões
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	//Coloca na tela uma tabulação com \t e depois o texto Valor de NumComputadores = e depois coloca o valor da variável NumComputadores na tela e dá uma quebra de linha com std::endl
	std::cout << "\tValor de NumComputadores = " << NumComputadores << std::endl;
	//Coloca na tela uma tabulação com \t e depois o texto Valor de SerialComputadores = e depois coloca o valor da variável SerialComputadores na tela e dá uma quebra de linha com std::endl
	std::cout << "\tValor de SerialComputadores = " << SerialComputadores << std::endl;
	//Coloca na tela cifrões
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;

	system("PAUSE");
	return 0;
}
