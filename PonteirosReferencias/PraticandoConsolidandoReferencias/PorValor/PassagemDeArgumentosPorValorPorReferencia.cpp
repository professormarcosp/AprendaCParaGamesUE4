#include <iostream>

void TrocaNumeros(int Num1, int Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Num1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Num2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\nNumero1 = " << Num1;
	std::cout << "\nNumero2 = " << Num2;
	std::cout << "\nValores depois da troca\n";
	//Esta chamada de função apenas COPIA o Valor de Numero1 e Numero2
	//E Coloca estes valores em Num1 e Num2 respectivamente da função
	//Troca Numeros...
	//Não há relação alguma com estas variáveis..
	//Numero1 e Numero2 são variáveis locais a função main
	TrocaNumeros(Num1, Num2);
	//Mesmo sendo mesmo nome, são variáveis diferente e com endereços de memória diferentes
	//A ISSO CHAMAMOS DE PASSAGEM DE PARÂMETROS POR VALOR!
	//APENAS UMA COPIA DO VALOR É ENVIADO A FUNÇÃO
	std::cout << "\nNum1 = " << &Num1;
	std::cout << "\nNum2 = " << &Num2;

	std::cout << "\nNum1 = " << Num1;
	std::cout << "\nNum2 = " << Num2 << "\n";

	system("PAUSE");
	return 0;
}

//e Num1 e Num2 são variáveis locais a função TrocaNumeros
void TrocaNumeros(int Num1, int Num2)
{
	//Como fazer a troca de valores de dois números?
	//precisamos de um local temporário para armazenar o valor de Num1 antes dele receber novo valor!
	//Variável temporária que guarda valor de Num1
	//Ex: se for digitado 10 Temp = 10 e se for digitado Num2 = 20 temos
	std::cout << "\nNum1 Função = " << &Num1;
	std::cout << "\nNum2 Função = " << &Num2;

	int Temp{ Num1 };
	//Num1 passa a ser 20
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Porém....
	Num2 = Temp;
	//Então aqui a troca ocorre apenas nas variáveis locais
	//Numero1 e Numero2 ficam intactos sem alteração!
}
