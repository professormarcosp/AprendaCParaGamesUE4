#include <iostream>

class Casa
{
	//Estes são os atributos, as propriedades da classe e são representados por variáveis.
	//Estes atributos serão as características de cada objeto criado a partir desta classe
	//Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação 
	//ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto
	int NumQuartos;
	float Tamanho;
	//No geral você coloca b na frente de uma variável bool para indicar que ela é do tipo booleana(bool)
	bool bTemSuite;

public:
	//Estas são as operações da classe, ou métodos ou as funções que o objeto poderá executar quando 
	//for criado(instanciado) a partir desta classe.
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
};

int main()
{
	Casa CasaDePraia;
	return 0;
}

//O operador escopo neste caso indica que o método(a função) MostrarTamanho() pertence a classe Casa
void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}
