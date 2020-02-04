#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	//O tipo de dados time_t é usado para representar o tempo de calendário.
	time_t HoraAtual = time(0);

	/*Função localtime
	 recebe tempo em segundos de uma variável do tipo time_t, converte para o tempo local, armazena os dados na struct e retorna um ponteiro para uma struct do tipo tm com os dados locais.*/
	tm* MinhaHora = localtime(&HoraAtual);
	std::cout << "\nHora: " << 1 + MinhaHora->tm_hour << ":" << 1 +
		MinhaHora->tm_min << ":" << 1 + MinhaHora->tm_sec;
	std::cout << "\nDia: " << MinhaHora->tm_mday;
	std::cout << "\nMes: " << 1 + MinhaHora->tm_mon;
	std::cout << "\nAno " << 1900 + MinhaHora->tm_year << "\n";

	system("PAUSE");
	return 0;
}
/* VERSÃO SEM HORÁRIO DE VERÃO
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	//O tipo de dados time_t é usado para representar o tempo de calendário.
	time_t HoraAtual = time(0);

	/*Função localtime
	 recebe tempo em segundos de uma variável do tipo time_t, converte para o tempo local, armazena os dados na struct e retorna um ponteiro para uma struct do tipo tm com os dados locais.
	tm* MinhaHora = localtime(&HoraAtual);
	std::cout << "\nHora: " << MinhaHora->tm_hour << ":" << MinhaHora->tm_min << ":" << MinhaHora->tm_sec;
	std::cout << "\nDia: " << MinhaHora->tm_mday;
	std::cout << "\nMes: " << 1 + MinhaHora->tm_mon;
	std::cout << "\nAno " << 1900 + MinhaHora->tm_year << "\n";

	system("PAUSE");
	return 0;
}*/
