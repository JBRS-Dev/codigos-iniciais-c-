#include <stdio.h>

int main()
{
	//variaveis
	int numero,a ,b;


	//entrada
	printf("digite um numero: ");
	scanf("%d", &numero);

	//processamento
	if(numero > 0)
		{
			a = numero;
			printf("O numéro %d e positivo", numero);
		}
	else
	{
		b = numero;
		printf("O numéro %d e negativo", numero);
	}


	return 0;
}
