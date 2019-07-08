#include <iostream>
#include <iomanip>
/*. ENTRADA: 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7 
PROCESSAMENTO: for each C++ e palavra reservada auto 
SAIDA: valor médio da velocidade de um estrada
*/
int main()
{
	float Velocidades[]{ 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7 };
	float SomaVelocidades{ 0.0 };
	int TamArray{ 0 };
	/*mais um for each ou for ranged loop C++
	Cada passada a variável Velocidade receberá um valor do array Velocidades*/
	for (auto Velocidade : Velocidades)
	{
		/*a variavel acumuladora SomaVelocidades vai acumular a soma de todas
		as velocidades contidas no array
		*/
		SomaVelocidades += Velocidade;
		//SomaVelocidades += Velocidade o mesmo que 
		//SomaVelocidades = SomaVelocidades + Velocidade
		/*No inicio SomaVelocidades é zero
		SomaVelocidades = 0.0 + 70.9 -> primeira passada
		SomaVelocidades = SomaVelocidades + Velocidade
		SomaVelocidades = 70.9 + 89.5 -> Segunda Passada
		Acumula a soma de todas as velocidades*/
		TamArray++;
		//Tamanho será o tamanho do array no final de todas as passadas do loop(iteracoes)
	}

	//A media será a soma de todas as velocidades divido pelo numero de velocidades
	//std::defaultfloat isso é o padrão de comportamento do setprecision
	//4 será o numero total de digitos antes e após a vírgula
	//std::fixed você indica que deseja que sejam 4 numeros após a vírgula
	//std::scientific indica que você deseja que seja em notação científica, potência de 10
	std::cout << "Media Velocidade Rodovia: " << std::fixed <<  std::setprecision(2) << SomaVelocidades / TamArray << "km/h \n";
	
	system("PAUSE");
	return 0;
}
