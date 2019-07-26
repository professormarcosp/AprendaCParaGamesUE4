#include <iostream>
struct Data
{
	//Como não espefiquei o modificador de acesso
	// na struct ele será por padrão public:
	static int contador;
	int id;
	int Dia;
	int Mes;
	int Ano;
	Data()
	{ 
		//como contador é estático ele não vai perder o valor e potanto irá incrementar
		// de um a cada chamada do destrutor.
		id = contador++;
		std::cout << "\nConstrutor Data(" << id <<  ") executado" << "\n";
	}
	~Data(){std::cout << "\nDestrutor ~Data(" << id << ") executado" << "\n";}
};

//desta forma acima você pode iniciar os valores ao instanciar e usar chaves

int Data::contador = 1;

int main()
{
	
 {
	//Como contador é uma váriável estática podemos acessar ela com nome da classe ou struct
	Data Agenda1;
	//aqui criei um novo ESCOPO pois lembre que entre chaves é um escopo
	//e vai determinar o ciclo de vida das variáveis
	//quando código ultrapassar a chave final as variáveis declaradas dentro
	// do escopo serão destruídas
	{
		Data Agenda2;
		//Agora este objeto Agenda3 está na Heap e não será destruído ao 
		//final do escopo
		//ele será destruído se for utilizada a função delete
		Data *Agenda3 = new Data;
		delete(Agenda3);
		
	}

	Data Agenda4;
	
	
 }
 
 system("PAUSE");
 return 0;
}
