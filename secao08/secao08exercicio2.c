#include <stdio.h>

int main()
{
	//variaveis
	int cont, vet1[10], vet2[10], soma[10];

	for(cont = 0; cont < 10;cont++)
	{
		//entradas
		printf("digite um valor para o 1º vetor: ");
		scanf("%d",&vet1[cont]);

		printf("digite um valor para o 2º vetor: ");
		scanf("%d",&vet2[cont]);

		//processamento

		soma[cont] = (vet1[cont] + vet2[cont]);

	}
	//processamento
	for(cont = 0 ; cont < 10;cont++)
	{
		printf("%d\n",soma[cont]);
	}

	return 0;
}
