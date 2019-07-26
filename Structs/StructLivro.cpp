#include <iostream>
#include <cstring>
//Para poder usar std::getline
#include <string>
#include <locale>
/*Crie um programa que receba os  dados, ID, Título, Autor, Editora e Ano de um livro e coloque estes dados na tela.
*/
//Aqui você está apenas criando um tipo de dados que será usando como modelo para construção de variáveis na memória. Um erro comum é tentar usar o nome Livro diretamente no código. Contudo Livro não existe na memória RAM, só irão existir variáveis(o que inclui objetos, pois objetos são também variáveis) que sejam criadas tendo como modelo esta struct.. Ex: struct Livro NovoLivro; struct Livro LivroQualquer..
//E ai sim você poderá manipular através do operador ponto os campos desta struct  NovoLivro.ID, LivroQualquer.Editora, etc
struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};

int main()
{
	setlocale(LC_ALL, "");
	//Criamos um objeto do tipo struct Livro de nome livro..
	//Poderia ser qualquer nome mas como C++ diferencia maiúsculas de minusculas (Case Sensitive) podemos usar livro pois neste caso Livro é diferente de livro
	/*assim livro terá um esquema na memória baseado no contido na struct Livro*/
	struct Livro livro;
	//Entrada de Dados
	std::cout << "***Cadastro de Livro***" << "\n";
	std::cout << "Digite ID do Livro: ";
	std::cin >> livro.ID;

	std::cout << "\nDigite o Título do Livro: ";
	//Colocar desta forma com getline
	//vai ignorar o enter que veio da leitura do ID
	std::cin.ignore();
	std::getline(std::cin, livro.Titulo);

	std::cout << "\nDigite o Autor do Livro: ";
	std::getline(std::cin, livro.Autor);

	std::cout << "\nDigite A Editora do Livro: ";
	std::getline(std::cin, livro.Editora);
	
	//Saida de Dados
	std::cout << "ID: " << livro.ID << "\n";
	std::cout << "Titulo: " << livro.Titulo << "\n";
	std::cout << "Autor: " << livro.Autor << "\n";
	std::cout << "Editora: " << livro.Editora << "\n";
	
	system("PAUSE");
	return 0;
}
