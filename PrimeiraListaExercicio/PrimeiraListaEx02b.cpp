#include <iostream>
//b) Depois substitua o comando std::endl pelo cara ctere de escape nova linha \n New Line
int main()
{
	std::cout
		<< "Vou" << "\n"
		<< "aprender" << "\n"
		<< "a" << "\n"
		<< "programar" << "\n"
		<< "na" << std::endl
		<< "Linguagem C++" << "\n";

	system("PAUSE");
	return 0;
}

//A linha poderia também ser assim: std::cout << "Vou" << "\n" << "aprender" << "\n" << "a" << "\n" << "programar" << "\n" << "na" << std::endl << "Linguagem C++" << "\n";
