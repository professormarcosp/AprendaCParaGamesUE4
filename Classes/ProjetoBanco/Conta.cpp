//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar" as declarações da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

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
	return Titular;
}

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
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}