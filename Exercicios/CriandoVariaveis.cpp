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
	
	int NumComputadores = 100;
	int SerialComputadores = 11111;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "Valor de NumComputadores = " << NumComputadores << "\n";
	std::cout << "Valor de SerialComputadores = " << SerialComputadores << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	
	system("PAUSE");
	return 0;
}
