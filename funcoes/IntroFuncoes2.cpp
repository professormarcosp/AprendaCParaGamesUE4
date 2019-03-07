#include <iostream>

// O que a função vai retornar?
//tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}

void Mensagem()
{
	std::cout << "\nMensagem de Marte... Chegamos bem...\n";
	return;
	std::cout << "\nMensagem de Marte... Chegamos bem 2...\n";
	return;
}


int main()
{
	int Numero, NumeroASerSomado, RetornoDaFuncao;
	Mensagem();
	std::cout << "Digite um numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " Com o Numero: " << NumeroASerSomado << " Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);
	std::cout << std::endl;
	RetornoDaFuncao = SomaAUmNumero(200, -500);
	std::cout << std::endl;
	std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400));
	std::cout << std::endl;
	std::cout << "\nSoma de 200 com -500: " << RetornoDaFuncao;
	std::cout << std::endl;
	system("PAUSE");
	return 0;
}