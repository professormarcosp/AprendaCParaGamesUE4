#include <iostream>


int main()
{
	std::cout << "Primeiro Programa C++" << std::endl;
	system("PAUSE");
	return 0;

}

//ATENÇÃO NO LINUX USE system("read -p \"Pressione Enter para terminar. . .\"");

/* 
#include <iostream>
int main()
{
	std::cout << "Primeiro Programa C++" << std::endl;
	system("read -p \"Pressione Enter para terminar. . .\"");
	return 0;
}

//Atenção no macOS Xcode, CODE::Blocks, etc
No Xcode, que é um ambiente de desenvolvimento integrado (IDE) para macOS, você pode usar a função `std::cin.get()` para pausar a execução do programa até que o usuário pressione Enter. Aqui está um exemplo simples:

#include <iostream>

int main() {
    std::cout << "Pressione Enter para continuar...";
    std::cin.get();
    return 0;
}

Este código exibirá a mensagem "Pressione Enter para continuar..." e aguardará até que o usuário pressione a tecla Enter antes 
de continuar a execução do programa. Você pode usar o comando `read` com parâmetros para exibir uma mensagem 
personalizada antes de pausar a execução. Aqui está como você pode fazer isso:

#include <iostream>

int main() {
    // Exibe uma mensagem personalizada antes de pausar a execução
    system("read -p 'Pressione Enter para continuar...'");

    return 0;
}

Este código funciona de maneira semelhante ao system("PAUSE"), aguardando a entrada do usuário antes de continuar, ele exibirá 
a mensagem "Pressione Enter para continuar..." e pausará a execução até que o usuário pressione Enter.
Ou seja, o comando `read -p 'Pressione Enter para continuar...'` exibirá a mensagem "Pressione Enter para continuar..." 
e aguardará até que o usuário pressione Enter antes de continuar a execução do programa.
*/

