#include <iostream>
struct Ponto3D
{
	int X;
	int Y;
	int Z;
	void DesenharPonto3D(Ponto3D Pontos)
	{
		std::cout << "X:" << Pontos.X << "Y:" << Pontos.Y << "Z:" << Pontos.Z;
	}
};

int main()
{
	Ponto3D PontoC;
	PontoC.X = 3;
	PontoC.Y = 4;
	PontoC.Z = 5;
	PontoC.DesenharPonto3D(PontoC);
	system("PAUSE");
	return 0;
}