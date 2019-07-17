#include <iostream>
#include <iomanip>

int main()
{
	int Numero;
	float Numero2;
	double Numero3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';
	bool bAchou;
	//um é true (verdadeiro)
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	//zero é falso
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	
	//qualquer coisa diferente de zero vira true ao ser atribuido
	//a uma variável do tipo bool!
	bAchou = 'd';
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "1023460A";
	std::cout << "Valor de bAchou: " << bAchou << "\n";



	Numero = 45;
	Numero2 = 55.56f;

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero << "\n";
	
	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero2: " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero2 << "\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da Variavel Numero3: " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero3 << "\n";

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da Variavel Caractere: " << sizeof(Caractere) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << (void *)&Caractere << "\n";

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da Variavel Caractere2: " << sizeof(Caractere2) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << (void *)&Caractere2 << "\n";
 
	system("PAUSE");
}
