#pragma once
#include <iostream>

class Pessoa
{
private: 
	std::string Nome;
	int CPF;
	int Matricula;

public:
	Pessoa ():Nome(""), CPF(0), Matricula(0){}
	Pessoa(std::string Nome, int CPF, int Matricula):Nome(Nome), CPF(CPF), Matricula(Matricula){}

	void AcessarSistema();
	std::string GetNome();
	int GetCPF();
	int GetMatricula();
	void SetNome(std::string Nome);
	void SetCPF(int CPF);
	void SetMatricula(int Matricula);
	void MostrarDados();

};

