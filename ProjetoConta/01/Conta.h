#pragma once
#include <iostream>
#include <string>

//este é o arquivo .h é onde existem apenas as declarações dos atributos e métodos da classe. Aqui não existem as definições, implementações das funções, pois isso será feito no arquivo .cpp. É a separação do O QUÊ (.h) do COMO (.cpp)

class Conta
{
//indica que o acesso a estes membros abaixo de private:
//só será permitido de dentro do código da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo;

//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do código da classe Conta.
public:
	//Construtor com parâmetros. Desta forma podemos criar objetos e já enviar argumentos para serem incializados nos atributos(variáveis) do objeto
	
	//O construtor padrão ou default é simplesmente um contrutor vazio
	Conta();
	//Este construtor é criado automáticamente pelo compilador se Você NÃO CRIAR UM CONSTRUTOR para sua classe.
	//Contudo como criamos abaixo um construtor o compilador deixou de criar
	//o construtor e por isso não mais como criar objetos sem ser através deste construtor abaixo:
	//e ai precisaria enviar argumentos inciais
	
	Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo);
	~Conta();

	bool Sacar(double Valor);
	void Depositar(double Valor);
	//Neste caso o parêmetro Destino recebe apenas uma cópia
	//do valor do objeto. Ele não tem como alterar o objeto
	//pois só recebeu uma cópia dele
	//Logo podemos usar o conceito de referência para passar a referência do objeto e com isso Destino vai poder alterar este objeto pois será realizada uma passagem de argumentos por Referência e não mais por valor
	void Transferir(Conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);

};
