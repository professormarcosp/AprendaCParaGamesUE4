#include <iostream>

typedef struct Livro
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string  Editora;
}RegistroLivro;

int main()
{
	struct Livro Aluno02;
	RegistroLivro Aluno01;
	Aluno01.ID = 0001;
	Aluno01.Preco = 33.99;
	Aluno01.Titulo = "Matrix";
	Aluno01.Editora = "Abril";
	
	return 0;
}
