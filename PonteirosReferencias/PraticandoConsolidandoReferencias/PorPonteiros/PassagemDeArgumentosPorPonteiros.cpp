#include <iostream>

//Agora vamos fazer o mesmo. A passagem de argumentos para a função por
//Referência. Só que agora utilizando ponteiros
//Lembre-se ponteiros são variáveis que possuem dentro delas um endereço de outra variável
//Além disso eles precisam ser desreferenciados para chegar ao valor apontado ou alterá-lo

//Aqui foi indicado que a função deve receber endereços de memória
//Pois trata-se de dois ponteiros..
//Então quando enviar para função você deve enviar o endereço de memória das variáveis. E estes endereços serão colocados nestas variáveis
void TrocaNumeros(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	//Esta dando erro pois a função não espera receber dois números inteiros.. E sim espera receber dois endereços de memória para ponteiros do tipo int.
	//Logo devemos enviar o endereço de memória das variaveis

	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	
	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2 << "\n";
	
	system("PAUSE");
	return 0;
}

void TrocaNumeros(int* Num1, int* Num2)
{
	
	//Deu diferente pois ponteiro é uma variável e portanto possui endereço alocado na memória. Ele possui dentro dele o endereço de memória da variável apontada
	std::cout << "\nEndereço de memória de Num1 da função  = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função  = " << &Num2;
	std::cout << "\nEndereço de memória contido dentro de Num1  = " << Num1;
	std::cout << "\nEndereço de memória contido dentro de Num2  = " << Num2;
	//Se Num1 agora é um ponteiro logo Terá dentro dele um endereço de memória. Está dando erro pois estamos tentando colocar um endereço de memória dentro de uma variável inteira Temp
	//Lembre o nome de uma variável devolve o que está dentro dela!
	//Neste caso queremos o valor que Num1 aponta e que neste caso será Numero1. Por isso diferentemente das referências os ponteiros precisam ser desreferenciados
	int Temp{ *Num1 };
	//Agora temp recebe o valor apontado por Num1

	//Aqui o valor apontado por Num1(que será Numero1) receberá o valor apontado por Num2
	*Num1 = *Num2;
	
	//Num2 passa a ser 10. Logo foi trocado
	//Porém....
	//o valor apontado por Num2 receberáo valor de Temp
	*Num2 = Temp;
	//Temp é uma variável int normal logo não pode nem precisa ser desreferenciada
	

	//também chamamos isso de PASSAGEM DE ARGUMENTOS PARA A FUNÇÃO POR REFERÊNCIA! SÓ QUE AQUI USANDO PONTEIROS!

}
