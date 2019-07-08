#include <iostream>

int main()
{
	int Numeros[ ] { 10,20,30,40,50 };
	for (auto Num : Numeros)
	{
		std::cout << Num << std::endl;
	}
	system("PAUSE");
	return 0;

}
