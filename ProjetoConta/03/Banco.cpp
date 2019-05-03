//Na função main() iremos instanciar objetos
//desta forma ela precisa incluir as declarações da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	Conta ContaCliente01;
	//Criamos um  objeto ContaCliente02 do tipo Conta
	//Está alocado na Stack

	Conta ContaCliente02;

	std::cout << "\nEndereço de memoria do Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "\nEndereço de memoria do Objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco Do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	//o objeto ContaCliente02 sérá enviado como argumento para a função transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


	system("PAUSE");
	return 0;
}
