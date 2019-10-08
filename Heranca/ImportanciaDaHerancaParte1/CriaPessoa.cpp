#include <iostream>
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main()
{
	Professor Marcos("Pacheco", 123456,987654, "Udemy");
	Aluno Luke("Skywalker", 888888, 999999, "Jedi");
	Bibliotecario ObiWan("Kenobi", 11111, 22222);

	//Agora funciona pois Nome está Public
	/*Marcos.Nome = "Pacheco";
	Luke.Nome = "Skywalker";
	ObiWan.Nome = "Kenobi";*/ 
	
	system("PAUSE");
	return 0;
}