//Na função main() iremos instanciar objetos
//desta forma ela precisa incluir as declarações da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	//Criamos um  objeto ContaCliente01 do tipo Conta
	//Está alocado na Stack
	Conta Cliente00;
	//como está desta forma o objeto seria criado com o construtor automático
	//conhecido por construtor Padrão ou Default
	Conta ContaCliente01("Itau",2222,5555,"Marcos",100000);
	//Agora vai funcionar... Pois temos os argumentos para o construtor
	 //Criamos um  objeto ContaCliente02 do tipo Conta
	//Está alocado na Stack
	Conta ContaCliente02;
	//Erro desaparece pois agora tem o contrutor vazio, padrão, default

	//Os objetos foram criados(instanciados) e colocados na memória RAM
	//Abaixo o debug mostra estes objetos e os valores atuais dos atributos(das variáveis) deles

	std::cout << "Endereco Memoria Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "Endereco Memoria Objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();


	ContaCliente01.SetBanco("Bradesco");
	//A string "Bradesco" foi enviada como parâmetro para função SetBanco
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