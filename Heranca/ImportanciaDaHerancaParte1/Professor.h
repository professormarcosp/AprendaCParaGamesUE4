#pragma once
#include "Pessoa.h"
class Professor : public Pessoa
{
public: 
	std::string Departamento;
	Professor(){} // Construtor Vazio
	//Estes são os parâmetros que o construtor de professor poderá receber
	Professor(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoDepartamento): Pessoa(NovoNome, NovoCPF, NovaMatricula), Departamento(NovoDepartamento){}
	/*Acima estamos chamando o construtor da classe Base(superclasse para iniciar os parâmetros do objeto professor*/

	void EfetuarChamada();
	void EntregarPauta();
};

