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
	Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}

	void AcessarSistema();
	std::string GetNome();
	int GetCPF();
	int GetMatricula();
	void SetNome(std::string NovoNome);
	void SetCPF(int NovoCPF);
	void SetMatricula(int NovaMatricula);
	void MostrarDados();

};

