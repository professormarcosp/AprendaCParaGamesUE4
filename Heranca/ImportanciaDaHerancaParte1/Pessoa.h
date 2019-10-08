#pragma once

#include <iostream>

//Quando você não indica a visibilidade o encapsulamento
//por padrão em uma classe ele será private
class Pessoa
{
public: 
	std::string Nome;
	int CPF;
	int Matricula;

	//Interessante Criar Construtores
	//Aqui o construtor padrão já pode receber valores padrões desta forma
	Pessoa() :Nome(""), CPF(0), Matricula(0) {}
	//Agora um construtor com parâmetros

	Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}

	void AcessarSistema();
};

