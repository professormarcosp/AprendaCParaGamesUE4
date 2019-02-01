#include <iostream>

int main()
{
	int soma = 0;
	for (int num = 1; num <= 100; num++)
	{
		soma = soma + num;
	}
	std::cout << "\nA soma dos numeros de 1 a 100: " << soma << "\n";
	system("PAUSE");
	return 0;
}