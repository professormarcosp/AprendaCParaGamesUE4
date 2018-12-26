#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int num; 
	std::cout << "Digite um Número: ";
	std::cin >> num;
	switch (num)
	{
	case 1:  std::cout << "\nEscolhido Número 1\n";
		break;
	case 2:  std::cout << "\nEscolhido Número 2\n";
		break;
	case 3:  std::cout << "\nEscolhido Número 3\n";
		break;
	default: std::cout << "\n1,2,3 não foram escolhidos\n";
		break;
	}
	system("PAUSE");
	return 0;
}