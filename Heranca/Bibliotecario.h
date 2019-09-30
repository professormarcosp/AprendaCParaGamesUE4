#pragma once
#include "Pessoa.h"
class Bibliotecario : public Pessoa
{
public:
	Bibliotecario() {}
	Bibliotecario(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoCurso) :Pessoa(NovoNome, NovoCPF, NovaMatricula){}
	void CadastrarLivros();
	void MostrarDados();
};

