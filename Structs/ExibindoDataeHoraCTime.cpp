#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	time_t Tempo = time(NULL);
	std::cout << ctime(&Tempo);

	system("PAUSE");
	return 0;
}
