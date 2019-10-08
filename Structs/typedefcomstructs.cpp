#include <iostream>

/*Aqui você criou um alias, um apelido para struct Livro. Este apelido se chama RegistroLivro*/
//Porém o mais usual é assim
typedef struct Livro
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;
} RegistroLivro;

//Acima é apenas um atalho um forma de fazer o seguinte
/*Aqui você criou um alias, um apelido para struct Livro. Este apelido se chama RegistroLivro*/
//typedef struct Livro RegistroLivro;

//CUIDADO!!!!! isso abaixo criar uma variável!!!
//agora RegistroLivro é uma variável!!! criada via forma compactada de criação de variáveis do tipo struct

int main()
{
	
	//Aqui é criada uma variável do tipo struct Livro mas sem usar o alias o apelido criado via typedef
	//Agora um vetor de Structs
	struct Livro Aluno01[5];

	//Aqui criamos uma variável do tipo RegistroLivro
	//Porém RegistroLivro é apenas um apelido uma alias para struct Livro
	//O pré-processador vai trocar este nome por struct Livro antes da compilação, simples assim...
	//Porém muitos usam para simplicar o código e digitar menos
	RegistroLivro Aluno02;
	//Criamos um ponteiro capaz de apontar para uma variável do tipo RegistroLivro que nada mais é que um alias de struct livro
	RegistroLivro* Ponteiro;
	//Agora Ponteiro recebe o endereço do objeto Aluno02;
	Ponteiro = &Aluno02;
	
	//Podemos fazer assim com Ponteiros
	Ponteiro->ID = 0002;
	Ponteiro->Preco = 99.99;
	//Agora acima é com a flecha ->
	
	//Aqui é ponto pois o objeto Aluno02 está na stack
	Aluno02.ID = 0001;
	Aluno02.Preco = 33.99;
	Aluno02.Titulo = "Martrix";
	Aluno02.Editora = "Abril";

	system("PAUSE");
	return 0;
}
