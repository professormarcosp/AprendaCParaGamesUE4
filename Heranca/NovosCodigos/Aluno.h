#pragma once
#include "Pessoa.h"
class Aluno : public Pessoa
{
private:
	std::string Curso;

public:
	Aluno() {}
	Aluno(std::string Nome, int CPF, int Matricula,std::string Curso):Pessoa(Nome, CPF, Matricula), Curso(Curso) {}
	void RealizarProva();
	std::string GetCurso();
	void SetCurso(std::string Curso);
	void MostrarDados();

};

