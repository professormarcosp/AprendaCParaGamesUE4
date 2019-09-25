#include <iostream>

/*Utilizando o comandoSystem(COLOR CorFundoCorTexto) 
e altere a cor de exibição da fonte no terminal de saída 
para uma cor de sua preferência*/
  
int main()
{
	system("COLOR 47"); // fundo vermelho e cor da letra branca
	std::cout
		<< "Vou" << "\n"
		<< "aprender" << "\n"
		<< "a" << "\n"
		<< "programar" << "\n"
		<< "na" << "\n"
		<< "Linguagem C++" << "\n\n"
		<< "Vou" << "\n"
		<< "aprender" << "\n"
		<< "a" << "\n"
		<< "programar" << "\n"
		<< "na" << "\n"
		<< "Linguagem C++" << "\n";
	   	  
	system("PAUSE");
	return 0;
}
