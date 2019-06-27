//caso ocorra erro na bilbioteca tchar.h use este código que usa uma outra forma da função setlocale
//para isso excluimos o include da biblioteca tchar.h e colocar a locale.h
#include <iostream>
#include <locale.h>
 
int main()
{
	setlocale(LC_ALL, "portuguese");
	int NumVidas = 5;
	int score = 1350;
	std::cout << "*********************" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << score << std::endl;
	std::cout << "*********************" << std::endl;
	system("PAUSE");
}
