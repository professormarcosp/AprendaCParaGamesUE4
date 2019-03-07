#include <iostream>
/*Crie uma função que indique se um número é par ou impar. Receba número do usuário e exiba na tela o número recebido e se ele é par ou impar.
*/
//Protótipó da função
bool isPar(int num);

int main()
{
	int Numero;
	std::cout << "\nDigite um numero inteiro: ";
	std::cin >> Numero;
	//se o retorno da função for true significa que  a condição do if será verdadeira e entra no texto PAR
	//porém não é necessário esta comparação == true
	//aqui após executar a função será
	//if (true) ou if(false) e funciona da mesma forma
	//Profissionalmente só se utiliza assim
	if (isPar(Numero))
	{
		std::cout << "\nNumero: " << Numero << " PAR\n";
	}
	//Senão for PAR já sabemos que é IMPAR
	//podemos otimizar isso.
	// if também não precisa pois else já sabemos que é par
	else 
	{
		std::cout << "\nNumero: " << Numero << " IMPAR\n";
	}
	system("PAUSE");
	return 0;
}

bool isPar(int num)
{
	//se o resto da divisão de um numero for zero
	//numero é par logo retorne true(verdadeiro)
	//se não retorne false idicando que ele é false
	if (num % 2 == 0)
		return true;
	//Observe que return faz a saida imediata da função
	//Logo se for par o código abaixo jamais será executado. Assim o else é desnecessario
	return false;
}
