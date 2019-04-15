#include <iostream>

class Casa
{
	//Estes são os atributos, as propriedades da classe e são representados por variáveis.
	//Estes atributos serão as características de cada objeto criado a partir desta classe
	//Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto
	
	//Por padrão em uma classe a visibilidade é do tipo private
	//logo se não for indicado nenhuma visibilidade o padrão é ser private(privado)
public:
	//private: esta indicando que estes atributos só poderão ser acessados diretamente no código da classe Casa
	//Agora se colocar public estes atributos estarão acessíveis fora do código da classe
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	//No geral você coloca b na frente de uma variável bool para indicar que ela é do tipo booleana(bool)
	bool bTemSuite{ true };

//public significa que estará acesível fora do código da classe
public:
	//Estas são as operações da classe, ou métodos ou as funções que o objeto poderá executar quando for criado(instanciado) a partir desta classe.
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	//Melhor é criar um método para que seja alterado o número de quartos
	//seguindo a regra que você vai estabelecer na regra de negócios do sistema
	//por exemplo se o max de quartos for 6(seis)

}; // este é o código da classe... E você pode indicar que tipo de visibilidade terá partes deste código

int main()
{
	Casa CasaDePraia;
	//como a função main está fora do código da classe, dentro dela não será possível acessar membros privados da classe Casa!
	//Contudo poderá ser acessado os membros public(públicos)
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);
	std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: " << CasaDePraia.TemSuite() ? std::cout << "Sim": std::cout << "Não" << "\n";
	//Para acessar os membros da classe Casa usamos neste caso a notação ponto.
	//NomedoObjeto.NomeDoAtributo ou NomeDoObjeto.NomeDoMetodo ou função
	
	std::cout << "\n";
	//Observer que acessar diretamente este atributo é complicado
	//outra classe ou método(função) pode alterar o valor para algo errado!
	//o ideal é manter os atributos da classe escondidos, privados e acessíveis apenas dentro da classe
	system("PAUSE");
	return 0;
}

//O operador escopo neste caso indica que o método(a função) MostrarTamanho() pertence a classe Casa
//Estes códigos pertencem a classe casa e portanto podem acessar diretamente os seus atributos privados
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
	//
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	} 
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}
