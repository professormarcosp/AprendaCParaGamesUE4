#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a referência não pode ficar sem ser atribuida logo
	//na sua criação!
	int &RefNum{ Numero2 }; // forma padronizada de inicializar
	//o mesmo que int &RefNum = Numero2;
	//Agora está ok pois Ref passar ser uma referencia de Numero2
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da referência sem precisar de *
	//&RefNum = Numero;
	//Aqui não será permitido pois referência só pode ser atribuida uma única vez!
	int* ptr;
	//um ponteiro pode ser declarado sem ser inicializado!
	//Até mesmo assim é permitido!
	//depois você pode iniciar
	ptr = &Numero;
	
	*ptr = 4048;
	std::cout << "\nValor de Numero: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endereço, fazer ele apontar para outra variável
	//isso é permitido!
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "\nValor de Numero2: " << *ptr << "\n";
	return 0;
}
