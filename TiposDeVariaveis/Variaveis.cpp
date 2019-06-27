#include <iostream>
#include <tchar.h>


int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int score = 1350;
	std::cout << "*********************" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << score << std::endl;
	std::cout << "*********************" << std::endl;
	system("PAUSE");
}
