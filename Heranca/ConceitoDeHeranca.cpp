#include <iostream>
//Classe Base também chamada de Superclasse, Classe Mãe/Pai
class Base
{

//As seções pública, protegida e privada de uma classe devem ser declaradas nessa ordem (a seção pública(public) é declarada antes da seção protegida(protected) que é declarada antes da seção privada(private) ).
public:
	void SolicitarNumeros()
	{
		std::cout << "Num1: ";
		std::cin >> Num1;
		std::cout << "Num2: ";
		std::cin >> Num2;
		MostrarResultado(Num1, Num2);
	}

private:
	float Num1, Num2;
	float Soma(int Num1, int Num2)
	{
		return (Num1 + Num2);
	}
	void MostrarResultado(int Num1, int Num2)
	{
		std::cout << "Soma de: " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << "\n";
	}
	
};

//Classe Derivada, também chamada de Subclasse, classe Filha/Filho
class Derivada : public Base {};


int main()
{
	
	Derivada Obj;
	Obj.SolicitarNumeros();
	
	system("PAUSE");
	return 0;
}
