#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	//Declara uma referência//Significa que foi criado um apelido, um rotulo, um alias para a variável Numero
	//Neste caso não é criada uma região de memória que vai conter algo dentro e que seria chamada Ref. Ref não tem endereço na RAM.
	//Não é uma variável que podemos colocar algo dentro!
	//É apenas um atalho para Numero.

	int &Ref = Numero;
	//Para colocar na tela o valor que a referencia referencia basta colocar o nome da referencia. Não precisa desreferenciar como
  //nos ponteiros. *ptr
	std::cout << "\nValor de Numero usando Ref: " << Ref << "\n";
	std::cout << "\nValor Endereco de Numero: " << &Numero << "\n";
  
	//Observe que &Ref irá retornar o endereço de Número pois uma referencia nasce e fica como novo rótulo da variável que ela 
  //referencia estando portanto no mesmo endereço de Numero, neste caso.
	std::cout << "\nValor Endereco de Ref: " << &Ref << "\n";
  
	//Já aqui será criada uma variável, um espaço na memória RAM e dentro deste espaço de nome ptr será colocado o endereço de 
  //memória de Numero. É bem diferente da referência pois esta não contem um espaço alocado, ela apenas é mais um nome, um rótulo, 
  //um apelido para referenciar a variável.
	int* ptr = &Numero;
	std::cout << "\nValor Endereco de ptr na RAM: " << &ptr << "\n";
	std::cout << "\nValor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "\nValor Endereco contido dentro de ptr: " << ptr << "\n";
  
	system("Pause");
	return 0;
}
