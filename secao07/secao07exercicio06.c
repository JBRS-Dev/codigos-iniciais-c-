#include <stdio.h>

int main()
{
	//tabua
	//variaveis
	int i, numero;

	//entrada
	printf("informe um numero entre 1 e 10: ");
	scanf("%d",&numero);

	//processamento
	while(numero < 1 || numero > 10)
	{
		printf("O numero deve ser entre 1 e 10");
		printf("Informe um numero: ");
		scanf("%d",&numero);
	}
	printf("Tabuada de %d");//esse printf ta com problema

	for(i = 1;i <= 10;i++)
	{
			// 5 x 1 = 5
		printf("%d X %d = %d\n",numero, i, (numero * i));
	}

	return 0;
}
