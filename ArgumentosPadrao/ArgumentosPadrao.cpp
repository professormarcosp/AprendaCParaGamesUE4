/*
Professor Marcos Pacheco (Mestre em Computação)
Curso: Aprendendo programação básica e avançada com Linguagem C++
Acesse agora: https://www.udemy.com/course/cmaismaisbasico/?referralCode=956A556D144A0F4D36EC
*/

#include <iostream>
//PROTÒTIPO
//você pode colocar valores padrões no protótipo
//e então quando você chamar a função poderá omitir
//argumentos pois a função irá utilizar o argumento padrão se você não informar o argumento quando da chamada da função.
//Para colocar um valor padrão basta colocar =
void Coordenadas(int x, int y, int z = 1);
//Você não é obrigado a colocar todos os argumentos padrão. Porém se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main()
{
	//apesar da função solicitar na chamada a colocação de 3 argumentos que serão enviados aos parâmetros
	//x, y e z. Esta chamada sem você colocar argumentos irá funcionar, pois eles tem argumentos pa
	Coordenadas(5,6);
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	//x = x * 10;
	x *= 10;
	//y = y * 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")";
}
