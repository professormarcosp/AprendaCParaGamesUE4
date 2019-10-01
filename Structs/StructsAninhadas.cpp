#include <iostream>
#include <cstring>

struct Data
{
	int Dia;
	int Mes;
	int Ano;
};

struct Endereco
{
	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;
};

struct Pessoa
{
	std::string Nome;
	//Aqui foi declarada uma variável do tipo Data
	Data DtNascimento;
	//Aqui foi declarada uma variável do tipo Endereco
	Endereco Endereco;
};



int main()
{
	Pessoa Pessoa01;
	Pessoa01.Nome = "Udemy";
	Pessoa01.DtNascimento.Dia = 01;
	Pessoa01.DtNascimento.Mes = 02;
	Pessoa01.DtNascimento.Ano = 2009;
	Pessoa01.Endereco.Rua = " Rua A ";
	Pessoa01.Endereco.Cidade = " Sao Francisco ";
	Pessoa01.Endereco.Estado = " California ";
	Pessoa01.Endereco.Pais =  "EUA ";

	std::cout << "Nome: " << Pessoa01.Nome << "\n";
	//Para colocar uma barra invertida lembre de duplicar \\ pois se você colocar apenas uma barra o compilador vai entender que você deseja colocar um caractere de escape tipo \t e \n e vai indicar erro...
	std::cout << "Data Nascimento: " << Pessoa01.DtNascimento.Dia << "\\" << Pessoa01.DtNascimento.Mes << "\\" << Pessoa01.DtNascimento.Ano << "\n";
	std::cout << "Endereco: "<< Pessoa01.Endereco.Rua << Pessoa01.Endereco.Cidade << Pessoa01.Endereco.Estado << Pessoa01.Endereco.Pais << "\n";
	  
	system("PAUSE");
	return 0;
}
