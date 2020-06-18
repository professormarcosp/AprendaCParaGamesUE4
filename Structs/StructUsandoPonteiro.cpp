#include <iostream>
#include <iomanip>

struct Aluno
{
	long int Matricula;
	std::string Nome;
	std::string Curso;
	int Semestre;
	double Mensalidade;

};

void MostrarDados(Aluno Dado);
void MostrarDados(Aluno* Dado);
void AlterarDados(Aluno& Dado);
void AlterarDados(Aluno* Dado);

int main()
{
	Aluno Aluno01 = { 111111, "Fulano", "TI", 4, 990.50 };
	Aluno* Aluno02 = new Aluno;
	Aluno Aluno03;
	AlterarDados(&Aluno03);
	system("CLS");
	MostrarDados(&Aluno03);
	std::cout << "\nANTES DE MODIFICAR\n";
	MostrarDados(Aluno01);
	AlterarDados(Aluno01);
	std::cout << "\nDEPOIS DE MODIFICAR \n";
	MostrarDados(Aluno01);
	std::cout << "\nANTES DE MODIFICAR COM PONTEIROS\n";
	AlterarDados(Aluno02);
	std::cout << "\nDEPOIS DE MODIFICAR COM PONTEIROS \n";
	MostrarDados(Aluno02);
	delete Aluno02; /* Linha colocada após contribuição de Daniel Silva de Souza que é aluno do meu curso 
	aprendendo programação básica e avançada com Linguagem C++ n Udemy*/
	system("PAUSE");
	return 0;
}

void MostrarDados(Aluno Dado)
{
	std::cout << "**************DADOS DO ALUNO****************\n";
	std::cout << "\t Nome: " << Dado.Nome << std::endl;
	std::cout << "\t Curso: " << Dado.Curso << std::endl;
	std::cout << "\t Semestre: " << Dado.Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado.Matricula << std::endl;
	std::cout << "\t Mensalidade " << "R$" << std::fixed << std::setprecision(2) << Dado.Mensalidade << std::endl;
	std::cout << "********************************************\n\n";
}

void MostrarDados(Aluno* Dado)
{
	std::cout << "**************DADOS DO ALUNO****************\n";
	std::cout << "\t Nome: " << Dado->Nome << std::endl;
	std::cout << "\t Curso: " << Dado->Curso << std::endl;
	std::cout << "\t Semestre: " << Dado->Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado->Matricula << std::endl;
	std::cout << "\t Mensalidade " << "R$" << std::fixed << std::setprecision(2) << Dado->Mensalidade << std::endl;
	std::cout << "********************************************\n\n";

}

void AlterarDados(Aluno& Dado)
{
	Dado.Nome = "Beltrano";
	Dado.Curso = "Engenharia";
	Dado.Semestre = 1;
	Dado.Matricula = 22222;
	Dado.Mensalidade = 870.99;
}

void AlterarDados(Aluno* Dado)
{
	Dado->Nome = "Cicrano";
	Dado->Curso = "Biologia";
	Dado->Semestre = 2;
	Dado->Matricula = 33333;
	Dado->Mensalidade = 899.90;
}
