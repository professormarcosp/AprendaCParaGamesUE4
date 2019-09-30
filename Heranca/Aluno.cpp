#include "Aluno.h"

void Aluno::RealizarProva()
{
	std::cout << "Prova Realizada" << "\n";
}

std::string Aluno::GetCurso()
{
	return Curso;
}

void Aluno::SetCurso(std::string NovoCurso)
{
	Curso = NovoCurso;
}

void Aluno::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Curso: " << GetCurso() << "\n";
}
