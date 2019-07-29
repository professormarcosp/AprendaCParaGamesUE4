#include <iostream>
#include <string>

struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};

int main()
{
	struct Livro livro[5];

	std::cout << "***Cadastro de Livros***" << "\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Digite ID do Livro[" << i << "]: ";
		std::cin >> livro[i].ID;

		std::cout << "Digite o Titulo do Livro[" << i << "]: ";
		std::cin.ignore();
		std::getline(std::cin, livro[i].Titulo);

		std::cout << "Digite o Autor do Livro[" << i << "]: ";
		std::getline(std::cin, livro[i].Autor);

		std::cout << "Digite A Editora do Livro[" << i << "]: ";
		std::getline(std::cin, livro[i].Editora);
		system("CLS");

	}
	
	std::cout << "*******DADOS DOS LIVROS*******\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "ID: " << livro[i].ID << "\n";
		std::cout << "Titulo: " << livro[i].Titulo << "\n";
		std::cout << "Autor: " << livro[i].Autor << "\n";
		std::cout << "Editora: " << livro[i].Editora << "\n";
		std::cout << "---------------------------------------\n";
	}

	std::cout << "**********************************\n";
	system("PAUSE");
	return 0;
}
