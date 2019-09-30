#pragma once
#include "Pessoa.h"
class Professor : public Pessoa
{
private:
	std::string Departamento;

public:
	Professor(){}
	Professor(std::string Nome, int CPF, int Matricula, std::string Departamento) : Pessoa(Nome, CPF, Matricula), Departamento(Departamento) {}
	void EfetuarChamada();
	void EntregarPauta();
	std::string GetDepartamento();
	void SetDepartamento(std::string Departamento);
	void MostrarDados();
};

