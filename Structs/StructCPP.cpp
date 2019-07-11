#include <iostream>
struct Data
{
	//Como não espefiquei o modificador de acesso
	// na struct ele será por padrão public:
	int Dia;
	int Mes;
	int Ano;
	
	Data(): Dia(22), Mes(07), Ano(2013) {}
};

//desta forma acima você pode iniciar os valores ao instanciar e usar chaves

int main()
{
	Data Agenda; /* Você pode também inicializar uma struct desta forma:  Data Agenda = {22, 07, 2013};*/
	//desta forma você tem acesso aos atributos, as variáveis da struct diretamente
	//no código da função main.. Ou seja fora do código da struct
	std::cout << "Dia: " << Agenda.Dia << " Mes: " << Agenda.Mes << " Ano: " << Agenda.Ano << "\n";
	system("PAUSE");
	return 0;
}
