#include <stdio.h>

int main()
{
	//variaveis
	int vet[5],pares[2],cont, cont_p = 0;
	// 0, 1, 2, 3, 4.

	for(cont = 0;cont < 5;cont++)
	{
		//entradas
		printf("Digite um valor para o vetor: ");
		scanf("%d",&vet[cont]);
		//processamento
		if(vet[cont] % 2 ==0)
		{
			if(vet[cont] > 0)
			{
				pares[cont_p] = vet[cont];
				cont_p = cont_p + 1;
			}
		}

	}
	for(cont = 0; cont < cont_p;cont++)
	{
		printf("d%\n",pares[cont]);
	}

	return 0;
}
