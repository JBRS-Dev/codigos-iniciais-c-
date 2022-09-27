#include <stdio.h>

int main()
{
	//variaveis
	int numero, p = 0, i = 0;

	//entrada
	printf("digite um numero: ");
	scanf("%d", &numero);

	//processamento
	if(numero % 2 == 0)
	{
		p = numero;
		printf(" %d ",p);
	}
	else
	{
		i = numero;
		printf("%d",i);
	}

return 0;

}
