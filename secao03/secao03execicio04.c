#include <stdio.h>

int main()
{
	int num1, num2, soma;

	//entrada
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);

	//processamento
	soma = (num1+num2);

	//saida
	printf("A soma e %d",soma);

	return 0;
}
