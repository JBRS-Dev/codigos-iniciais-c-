#include <stdio.h>

int main()
{
	//variveis
	int n,maior=0;

	//entradas
	printf("digite um numero: ");
	scanf("%d",&n);

	//procesamento
	while(n != 0)
	{
		if(n > maior )
		{
			maior = n;
		}
		//entradas
		printf("digite um numero: ");
		scanf("%d",&n);

	}
	//saida
	printf("o maior número é: %d",maior);



	return 0;
}
