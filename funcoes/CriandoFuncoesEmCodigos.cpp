/*Atenção Código modificado, veja as instruções dos motivos como recurso anexo a aula
Agradecimento ao aluno Anderson Cardoso que identificou o erro*/
#include <iostream>
#include <locale.h>

//protótipos das funções
void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);


int main()
{
	//Exibe o menu opções chamando a função Exibir Menu
	ExibirMenu();
	system("PAUSE");
	return 0;
}

//Implementação das funções

//a função não retorna nada, logo o tipo de retorno é vazio(void). Além disso a função não possui nenhuma variável local(Parâmetros). Como não retorna nada não precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		// TO DO Função Retornar EScolha

		//Aqui a função chama outra função e passar como argumento para a função ProcessrEscolha a variável escolha que contém o que foi digitado pelo usuário como opção de escolha de menu

		//aqui a função processar escolha deve receber como parâmetro um inteiro. Colocamos abaixo a chamada da função RetornarEscolha que ao ser executada irá retornar (Return) um inteiro que foi digitado pelo usuário
		
	} while (RetornarEscolha() != 3);//enquanto o retorno da função RetornarEscolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	//Colocar a chamada da função ProcessarEscolha
	ProcessarEscolha(escolha);
	return escolha;
}

//ProcessarEscolha recebe como parâmetro um numero inteiro
//e armazena este argumento passado no parâmetro TipoEscolha que é uma variável local a esta função. Significa que esta variável somente existe na memória quando a função está sendo executada. Quando a função chegar a seu final esta variável deixa de existir na memória.
//Portanto funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis estivessem na função main elas somente seriam destruidas quando o programa fosse fechado.
void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOpção Inválida!!!\n";
	}
	
}
