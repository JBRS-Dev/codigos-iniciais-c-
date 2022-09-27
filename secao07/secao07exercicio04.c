#include <stdio.h>

int main()
{
	//variaveis
	int cont, n, maior = -999, menor = 999, soma = 0;
	float media;

	//entradas

	//processamento
	for(cont = 0;cont < 10;cont++)
	{
		printf("digite um numero: ");
		scanf("%d",&n);
		//processamento
		if(n > 0)
		{
			if(n > maior)
				{
					maior = n;
				}
					if( n < menor)
					{
						menor = n;
					}
					soma = soma + n;
		}
		else
		{
			cont--;
		}

	}
	media = soma / 10;
	printf("O maior numero é: %d\n",maior);
	printf("O menor numero é: %d\n",menor);
	printf("A media dos números é: %2.f\n",media);//se for assin %.2f o resultado vai ser mostrado assin: 00.00
	return 0;
}
