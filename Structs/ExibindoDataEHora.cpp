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
	/*ERRATA: não é necessário colocar 1 + para hora, minuto e segundo*/
	std::cout << "\nHora: " << MinhaHora->tm_hour << ":" << MinhaHora->tm_min << ":" << MinhaHora->tm_sec;
	std::cout << "\nDia: " << MinhaHora->tm_mday;
	/*O horário de verão acabou logo não coloque mais 1 +*/
	std::cout << "\nMes: " << 1 + MinhaHora->tm_mon;
	std::cout << "\nAno " << 1900 + MinhaHora->tm_year << "\n";
	//pressione enter duas vezes bem rápido para ver os resultados sincronizados
	system("DATE");
	system("TIME");
	system("PAUSE");

	return 0;
}
