#include <stdio.h>
//std = standard(padrao)
// io = input/output (entradra/saida)

int main()
{
	//declaraçao de variaveis
	int num1, num2, soma, multiplicacao;

	//entrada
	printf("Digite primeiro numero: ");
	scanf("%d",&num1);

	printf("Digite segundo numero: ");
	scanf("%d",&num2);

	//processamento
	soma= num1 + num2;
	multiplicacao = soma * num1;

	//saida
	printf("O resultado da multiplicação e %d",multiplicacao);
	return 0;
}
