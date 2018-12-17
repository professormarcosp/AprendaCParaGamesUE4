#include <iostream>

int main()
{
	int Num1{ 10 }, Num2{ 20 }, Resultado;
	//Num2 ++ é o mesmo que Num2 = Num2 + 1;
	/*No entanto se ++ vier depois da variável
	Devemos ler da seguinte forma
	Num2++ Pegue logo o valor da variável Num2
	e somente depois da instrução incremente em 1
	o valor de Num2
	Logo Num1 = Num2++ é equivalente as seguintes 
	instruções:
	Num1 = Num2;
	Num2 = Num2 + 1;
	Chamamos isso de pós-fixado
	Assim se o ++ ou -- estiver após a variável
	ela somente será incrementada após a execução da instrução
	*/
	
	//Agora temos outra situação. O operador ++ está PRÉ-FIXADO
	/*Assim a instrução seria equivalente a:
	Num1 = Num1 + 1;
	Num2 = Num1;
	Ou seja se o operador estiver pré-fixado primeiro a variável
	será incrementada de 1 para depois ser atribuida a outra variável
	*/
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	//Num1 recebe o valor de Num1 e depois desta instrução
	//O valor de Num1 será incrementado na memória em uma unidade
	// é como se tivessemos as instruções:
	//Num1 = Num1;
	//Num1 = Num1 + 1;
	Num1 = Num1++;
	
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	/*Num1 Recebe (Num2+1) + (Num1+1) préfixado!*/
	Num1 = ++Num2 + Num1++;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = ++Num2;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = ++Num2 + Num2--;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num1 = --Num1 - --Num2;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = --Num2 + Num1--;
	std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	system("PAUSE");
}