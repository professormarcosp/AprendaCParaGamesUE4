#include "Pessoa.h"

void Pessoa::AcessarSistema()
{
	std::cout << "****Acesso ao Sistema****" << "\n";
}

std::string Pessoa::GetNome()
{
	return Nome;
}

int Pessoa::GetCPF()
{
	return CPF;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}

void Pessoa::SetNome(std::string Nome)
{
	this->Nome = Nome;
}

void Pessoa::SetCPF(int CPF)
{
	this->CPF = CPF;
}

void Pessoa::SetMatricula(int Matricula)
{
	this->Matricula = Matricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "\n****DADOS****" << "\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";
	   	 
}
