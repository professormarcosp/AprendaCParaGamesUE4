#include <iostream>
#include "Pessoa.h"
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main()
{
	Professor Marcos("Pacheco",123456,987654,"Udemy");
	Aluno Luke("Skywalker", 888888, 999999, "Jedi");
	Bibliotecario ObiWan("Kenobi", 11111, 22222, "Mestre");

	Marcos.MostrarDados();
	Luke.MostrarDados();
	ObiWan.MostrarDados();
	
	system("PAUSE");
	return 0;
}
