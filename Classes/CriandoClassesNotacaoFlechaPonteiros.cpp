#include <iostream>

class Casa
{

private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);

};

int main()
{
	/*   Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);*/
	Casa *CasaDePraia = new Casa();
	//Agora você está criando, instanciando um objeto via alocação dinâmica de memória, utilizando ponteiros*. Basicamente é o mesmo que Declarar da forma que você declarou na aula passada. Ou seja será criado um objeto baseado na classe Casa e o endereço de memória deste objeto será colocado em CasaDePraia.

	//Contudo trata-se de um ponteiro. Lembre... Como acessar o apontado pelo ponteiro? Isso mesmo com desrefenciamento*
	//Logo CasaDePraia.ObtenhaNumeroDeQuartos() devemos usar
	//*ptr mas neste caso o ponteiro é CasaDePraia 
	//Logo para desreferenciar ele você faz *CasaDePraia
	//Mas agora você está diante de uma nova estrutura de variável
	//Ele contém diversos atributos e métodos(funções)
	//Que são acessíveis via ponto.
	//Mas se fizer isso apenas estaria errado
	//O correto é assim
	//(Endereçoqueponteiroaponta).Atributo;
	//(Endereçoquefuncaoaponta).funcao();
	//(*CasaDePraia).MostrarTamanho();
	//(*CasaDePraia).ObtenhaNumeroDeQuartos();
	//Mas ficar digitando toda hora dois parênteses, um asterisco e um ponto ficou cansativo!!!
	//Os criadores da linguagem criaram então um atalho para esta notação
	//(*CasaDePraia). é o mesmo que CasaDePraia->
	//É a chamada notação flecha
	//(*). Trocou-se 4 caracteres por apenas 2 ->
	//Mas é importante que você saiba que tudo é notação ponto.
	//Logo quando você digitar: 
	//CasaDePraia->SetNumQuartos(5);
	//é o mesmo que:
	//(*CasaDePraia).SetNumQuartos(5);


	std::cout << "\n Num Quartos: " << CasaDePraia->ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: ";  
	CasaDePraia->TemSuite() ? std::cout << "Sim" : std::cout << "Não" << "\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

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
