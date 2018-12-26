#include <iostream>
int main()
{
	int Numero;
	Numero = 0;
	//loop infitivo!
	/* neste caso Numero nunca deixará de ser 0 e a 
	condição Numero <= 50 será sempre verdadeira!
	Logo ficará sempre no While!!!*/
	while (Numero <= 50)
	{
		if (Numero % 2 == 0)
		{
		(Numero == 0) ? std::cout << "Numeros Pares:" : std::cout << " - ";
			std::cout << Numero;
		}
		else if (Numero % 2 != 0)
		{
		(Numero == 1) ? std::cout << "\n\nNumeros Impares:" : std::cout << " - ";
			std::cout << Numero;
		}

		//De alguma forma você precisa incrementar a variável Numero para que ela chegue até 50
		//Qual condição de Parada do loop?
		Numero++;
	}
	system("PAUSE");
	return 0;
}