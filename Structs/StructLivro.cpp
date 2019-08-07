#include <iostream>
#include <string>

/*Criada um struct, um modelo para criação de objetos deste tipo
Importante destacar que até aqui no final */
struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};//aqui não existirá criação de nada na memória RAM, isso ou esta struct é apenas um modelo para criação de outras variáveis
/*quando fora criada uma variavel do tipo desta struct, o compilador irá usar este molde, este modelo para arrumar e armazenar dados na memória RAM*/

int main()
{
	//Aqui foi criada uma variavel de nome livro(poderia ser outro nome)
	//como livro é diferente de Livro pode ser feito, mas confunde...
	/*logo aqui temos a criação na memória RAM de uma variável de nome livro
	e que será criada a partir do modelo da struct Livro*/
	//Em c++ podemos retirar a palavra struct ao criar uma variável do tipo struct
	Livro livro;

	//A partir de agora podemos acessar os campos desta variavel livro atraves da notação ponto(.)
	std::cout << "***Cadastro de Livro***" << "\n";
	std::cout << "Digite ID do Livro: ";
	std::cin >> livro.ID;

	std::cout << "\nDigite o Titulo do livro: ";
	std::cin.ignore();
	std::getline(std::cin, livro.Titulo);

	std::cout << "\nDigite o Autor do Livro: ";
	std::getline(std::cin, livro.Autor);

	std::cout << "\nDigite a Editor do Livro: ";
	std::getline(std::cin, livro.Editora);

	std::cout << "ID: " << livro.ID << "\n";
	std::cout << "Titulo: " << livro.Titulo << "\n";
	std::cout << "Autor: " << livro.Autor << "\n";
	std::cout << "Editora: " << livro.Editora << "\n";

	system("PAUSE");
	return 0;
}
