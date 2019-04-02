#include <iostream>

//Agora estamos indicando que a função terá dois parâmetros que serão
//referências dos argumentos passados para esta função
//Ou seja o que for enviado para esta função passará a ser referenciado por Num1 e Num2 respectivamente.
void TrocaNumeros(int& Num1, int& Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	TrocaNumeros(Numero1, Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	
	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2 << "\n";
	
	system("PAUSE");
	return 0;
}

//Agora Num1 e Num2 não recebem simplesmente uma cópia do valor de Numero1 e Numero2. Eles passam a ser Referências de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor isso irá afetar as variáveis, pois agora eles são referências!
void TrocaNumeros(int& Num1, int& Num2)
{
	std::cout << "\nEndereço de memória de Num1 da função  = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função  = " << &Num2;
	int Temp{ Num1 };
	//Num1 passa a ser 20
	//aqui está copiando em Numero1 o valor de Numero2 pois são referências é como se fosse Numero1 = Numero2
	//Lembre que referências são alias para suas variáveis
	//Isso aqui (int& Num1, int& Num2) é o mesmo que
	//int& Num1 = Numero1 e int& Num1 = Numero2;
	//só que isso ocorre na chamada da função.
	//ISSO DAMOS O NOME DE PASSAGEM DE ARGUMENTOS PARA A FUNÇÃO POR REFERÊNCIA!
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Porém....
	Num2 = Temp;
	
}
