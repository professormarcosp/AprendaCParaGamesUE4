#include <iostream>

int ContadorChamadas()
{
	//Variavel estática: Significa que após a saída da função o valor desta variável não será perdido.
	//static indica que este valor seja mantido mesmo após a função ser encerrada
	static int NumChamadasDaFuncao = 0;
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;
}