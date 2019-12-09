#include <iostream>
#include <tchar.h>

int main()
{
//Função que configura o console windows para mostrar acentos
_tsetlocale(LC_ALL, _T("portuguese"));

//Declaração de Variáveis
//Primeiro colocamos qual o tipo de variável que desejamos que
//o computador crie ao executar nosso programa
//neste caso escolhemos ambas como int (integer)
//Ou seja o local da memória que estamos solicitando ao computador
//deve ser capaz de armazenar números inteiros (-3, -2, -1, 0 , 1, 2)
//Então int NumVidas pode ser lido da seguinte forma:
/*Computador por favor me fornece um local na memória RAM com tamanho
suficiente para armazenar um número inteiro e coloque o nome deste local
como sendo NumVidas*/
/*Eu sei que você só entende endereço de memória mas vai facilitar muito
para mim se você nomear este endereço de memória com um nome. Desta forma
esta abstração vai me permitir manipular melhor este endereço de memória
pois seria complicado ter que ficar digitando: 010FFDC8 = 5 */
/*BEM MELHOR SE EU USAR UM NOME AS INVÉS DE UM ENDEREÇO QUE É DIFÍCIL
DE MEMORIAZAR E QUE MUDA A DEPENDER DA DISPONIBILIDADE DESTE ESPAÇO
NA MEMÓRIA RAM!*/

int NumVidas = 5;
//ACIMA O COMPUTADOR IRÁ ALOCAR UM ESPAÇO DE MEMÓRIA DO TIPO INTEIRO
/*DEPOIS VAI ATÉ ESTE LOCAL NA RAM E VAI COLOCAR O VALOR 5*/
//010FFDC8 = 5

int Pontuacao = 1350;
//ACIMA O COMPUTADOR IRÁ ALOCAR UM ESPAÇO DE MEMÓRIA DO TIPO INTEIRO
/*DEPOIS VAI ATÉ ESTE LOCAL NA RAM E VAI COLOCAR O VALOR 1350*/
//010FFDBC = 1350

std::cout << "*******INICIO DO JOGO***********" << std::endl;
std::cout << "Vidas Jogador: " << NumVidas << std::endl;
std::cout << "Pontuação: " << Pontuacao << std::endl;
std::cout << "Tamanho da Variável NumVidas: " << sizeof(NumVidas) << "Bytes" << "\n";
std::cout << "Tamanho da Variável Pontuacao: " << sizeof(Pontuacao) << "Bytes" << "\n";
std::cout << "Endereço que NumVidas Ocupa na Memória RAM: " << &NumVidas << "\n";
std::cout << "Endereço que Pontuação Ocupa na Memória RAM: " << &Pontuacao << "\n";
std::cout << "**********************************" << std::endl;

std::cout << "*******DURANTE O JOGO***********" << std::endl;

//Vá até a região de memória Rotulada com o nome Pontuacao e coloque
//agora em o a soma do valor que está contido nela mais 150
//Pontuacao = 1350 + 150;
//Pontuacao = 1500;
Pontuacao = Pontuacao + 150; //Pontuacao += 150;

//Vá até a região de memória Rotulada com o nome NumVidas e coloque
//agora em o a subtração do valor que está contido nela menos -1
//NumVidas  = 5 - 1;
//NumVidas = 4;
NumVidas = NumVidas - 1; // NumVidas -= 1;
std::cout << "Vidas Jogador: " << NumVidas << std::endl;
std::cout << "Pontuação: " << Pontuacao << std::endl;
std::cout << "**********************************" << std::endl;


system("PAUSE");
}
