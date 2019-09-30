#pragma once
#include "Pessoa.h"
class Professor : public Pessoa
{
private:
	std::string Departamento;

public:
	Professor(){}
	Professor(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoDepartamento) : Pessoa(NovoNome, NovoCPF, NovaMatricula), Departamento(NovoDepartamento) {}
	void EfetuarChamada();
	void EntregarPauta();
	std::string GetDepartamento();
	void SetDepartamento(std::string NovoDeparamento);
	void MostrarDados();
};

