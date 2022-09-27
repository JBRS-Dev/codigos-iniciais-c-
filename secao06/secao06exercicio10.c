#include <stdio.h>

int main()
{
	//variaveis
	int idade;

	//entradas
	printf("Informe a idade do nadador: ");
	scanf("%d",&idade);

	//processamento
	if(idade >= 5 && idade <= 7)
	{
		//saida
		printf("Nadador e da categoria infantil A.");
	}
	else
		if(idade >= 8 && idade <= 11)
		{
			//saida
			printf("Nadador e da categoria infantil B.");
		}
		else
			if(idade >= 12 && idade <= 13)
			{
				//saida
				printf("Nadador e da categoria juvenil A.");
			}
			else
				if(idade >= 14 && idade <= 17)
				{
					//saida
					printf("Nadador e da categoria juvenil B.");
				}
				else
					if(idade >= 18)
					{
						//saida
						printf("Nadador e da categoria adulto");
					}





	return 0;
}
