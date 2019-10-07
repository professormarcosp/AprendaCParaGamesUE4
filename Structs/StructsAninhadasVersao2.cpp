#include <iostream>

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
	//structs aninhadas
	struct Data DtNascimento;
	struct Endereco DadosEndereco;
};


int main()
{
	//E como seria vetor de structs aninhadas?
	struct Pessoa Pessoa01[2];
	for (int i = 0; i < 2; i++)
	{
		Pessoa01[i].Nome = "Udemy";
		Pessoa01[i].DtNascimento.Dia = 01+i;
		Pessoa01[i].DtNascimento.Mes = 02+i;
		Pessoa01[i].DtNascimento.Ano = 2009+i;
		Pessoa01[i].DadosEndereco.Rua = "A";
		Pessoa01[i].DadosEndereco.Cidade = "São Francisco";
		Pessoa01[i].DadosEndereco.Estado = "California";
		Pessoa01[i].DadosEndereco.Pais = "EUA";
	}

	for (int i = 0; i < 2; i++)
	{

		std::cout << "Nome: " << Pessoa01[i].Nome << "\n";
		//Para colocar uma barra na tela coloque "\\" pois senão o compilador ficará confuso
		//Somente uma barra ele esperaria \n ou \t ou \' etc e poderia dar erro
		std::cout << "Data Nascimento: " << Pessoa01[i].DtNascimento.Dia << "\\" << Pessoa01[i].DtNascimento.Mes << "\\" << Pessoa01[i].DtNascimento.Ano << "\n";
	}
	system("PAUSE");
	return 0;
}
