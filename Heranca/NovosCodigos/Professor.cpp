#include "Professor.h"

void Professor::EfetuarChamada()
{
	std::cout << "Chamada Efetuada" << "\n";
}

void Professor::EntregarPauta()
{
	std::cout << "Pauta Entregue" << "\n";
}

std::string Professor::GetDepartamento()
{
	return Departamento;
}

void Professor::SetDepartamento(std::string Deparamento)
{
	this->Departamento = Deparamento;
}

void Professor::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Departamento: " << GetDepartamento() << "\n";
}


