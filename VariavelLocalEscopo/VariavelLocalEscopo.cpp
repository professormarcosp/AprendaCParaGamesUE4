#include <iostream>

int main()
{
	//aqui i foi declardo fora do escopo, do bloco de código do for
	
	for (int i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << " " << j << std::endl;
	} 
	//std::cout << "\nValor final de i: " << i;
	//std::cout << "\nValor final de j: " << j;
	//isso é o escopo de uma variável!
	//Qual a visibilidade dela? Local, Global. Se local em que bloco? Qual o tempo de vida dela?
	//Relembrando que o parâmetros das funções são variáveis locais a estas funções!
	//int soma(int x, int y) escopo local!''

	//porém agora j foi declarado dentro do bloco de código do comando for. Logo quando este bloco de código chegar ao fim a variável j que é local a este bloco, será destruída e não mais estará acessível. Ela (j) somente é acessível dentro do comando for 
	//quando a função atingir aqui a variável i não sairá da memória, não será destruida pois está fora deste escopo
	system("PAUSE");
	return 0;
}