#include <stdio.h>

int main()
{
	//variaveis
	int num;

	printf("Digite um numero: ");
	scanf("%d",&num);

	if(num % 2 == 0)
	{
		if(num > 0)
		{
			printf("numero %d e par e positivo.",num);
		}
		else
		{
			printf("Numero %d e par e negativo.",num);
		}
	}
	else
	{
		if(num > 0)
		{
			printf("numero %d e impar e positivo.",num);
		}
		else
		{
			printf("numero %d e impar e negativo.",num);
		}
	}


	return 0;
}
