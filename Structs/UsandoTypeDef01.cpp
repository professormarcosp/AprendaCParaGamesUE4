#include <iostream>

//criado um alias(apelido) para int chamado inteiro
//desta forma quando o código for compilado o pré-processador vai substituir todas as ocorrências de inteiro por int e depois de finalizar tudo isso o pré-processador entrega o código ao compilador
typedef int inteiro;
//Idem criar um alias para char de nome caractere, assim você poderá declarar uma variável do tipo char utilizando o nome caractere
typedef char caractere;
//O mesmo para float que agora tem um alias real. Importante destacar que você ainda poderá utilizar os tipos clássicos. Isso não é uma substituição...
typedef float real;

int main()
{
	//Aqui é o mesmo que int Numero{12}
	inteiro Numero{ 12 };
	caractere Letra{ 'A' };
	float Nota{ 2.3 };
	real Media{ 7.0 };
	std::cout << Numero << "\n";
	std::cout << Letra << "\n";
	std::cout << Nota << "\n";
	std::cout << Media << "\n";

	system("PAUSE");
	return 0;
}
