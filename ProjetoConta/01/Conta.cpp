//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar" as declarações da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

//Você pode usar o construtor padrão para já iniciar os atributos do objeto
//com algum valor padrão e evitar lixo de memória
Conta::Conta()
{
	//aqui mais uma vez o this está implítico
	//seria o mesmo que:
	this->Banco = "";
	this->Agencia = 0;
	this->NumConta = 0;
	this->Titular = "";
	this->Saldo = 0.0;
	std::cout << "\nConstrutor Objeto Endereco: " << this << " executado!\n";

}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;
	std::cout << "\nConstrutor Objeto Endereco: " << this << " executado!\n";

}

Conta::~Conta()
{
	std::cout << "\nDestrutor Objeto Endereco: " << this << " executado!\n";
}

//Aqui o operador escopo:: está indicando que a função/Método sacar pertence a classe Conta e que este código a seguir vai implementar a função Sacar.
bool Conta::Sacar(double Valor)
{
	//Se o valor do Saldo no Objeto for menor que o valor a ser sacado, ele não poderá sacar
	if (Saldo < Valor)
	{
		std::cout << "\Saldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
	//Senão ele poderá sacar
	//Temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
	
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor; //o mesmo que Saldo = Saldo + Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com Sucesso!\n";
}

//A função recebe como argumentos para seus seus parêmtros um Objeto do tipo Casa e um valor double.

//Aqui o parâmetro Destino irá receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
//isso é o mesmo que colocar
//Conta &Destino = ContaCliente02;
//ou seja será um referencia para um objeto do tipo conta que neste caso é ContaCliente02
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";

	}
	else
	{
		//Aqui Destino está com o objeto passado para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	//assim como aqui também está implicíto
	return this->Titular;
	//No geral não colocarmos this
	//Somente quando for necessário!
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro o endereco:" << this << "\n";
}

//e foi recebida no parâmetro Banco
void Conta::SetBanco(std::string Banco)
{
	//Como o compilador vai saber se Bancó é variável local ou o atributo da classe Conta?
	//se this é um ponteiro para chegar no apontado pelo ponteiro temos
	//*this , mas como this é um ponteiro para um objeto ele precisa usar a notação ponto. para acessar atributos e executar funções do objeto

	//Agora o compilador sabe que Banco é a variável local que recebeu o argumento string
	//e que deve ser colocada no atributo Banco do objeto apontado por this
	//(*this).Banco = Banco;
	//Contudo no geral usa-se a notação flecha
	this->Banco = Banco;
	//Aqui o atributos do objeto cujo endereço é está em this irá receber o valor que está em Banco
	//que é "Bradesco"
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

//Neste caso precisamos do this pois o nome dos parâmetros são iguais
void Conta::SetTitular(std::string Titular)
{
	//aqui não precisaria pois os nomes são diferentes
	//MAs como o compilador sabe que Titular Pertence a objeto que está executando a função?
	//Está implícito neste caso o this
	this->Titular = Titular;
}