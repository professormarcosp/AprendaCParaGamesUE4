#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 234 };
	int* Ponteiro = &Numero;
	*Ponteiro = 1456;
	int* OutroPtr = Ponteiro;

	std::cout << "\nValor de Numero: " << *Ponteiro << "\n";
	std::cout << "\nEndereço de Numero " << &Numero << " Endereço de Ponteiro: " << &Ponteiro << "\n";
	std::cout << "\nValor contido em DENTRO de Ponteiro: " << Ponteiro << "\n";
	*Ponteiro += 200;
	std::cout << "\nValor de Número: " << *OutroPtr << "\n" ;
	system("PAUSE");
	return 0;
}
