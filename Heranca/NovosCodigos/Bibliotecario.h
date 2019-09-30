#pragma once
#include "Pessoa.h"
class Bibliotecario : public Pessoa
{
public:
	Bibliotecario() {}
	Bibliotecario(std::string Nome, int CPF, int Matricula) :Pessoa(Nome, CPF, Matricula){}
	void CadastrarLivros();
	void MostrarDados();
};

