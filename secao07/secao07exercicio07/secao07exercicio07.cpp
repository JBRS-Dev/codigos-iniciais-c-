#include <stdio.h>

int  main()
{
	//variaveis
	int id, defeito, quantidade = 0, necessita_esfera = 0, necessita_limpeza = 0,
	necessita_troca_cabo = 0,quebrado = 0;

	//entradas
	printf("Digite o id do mause: ");
	scanf("%d",&id);



	while(id != 0)
	{
		printf("1 = necessita da esfera\n");
		printf("2 = necessita de limpeza\n");
		printf("3 = necessita troca de cabo ou conector\n");
		printf("4 = quebrado ou inutilizado\n");

		printf("informe o tipo de defeito: ");
		scanf("%d",&defeito);
		//processamento
		if(defeito == 1)
		{
			necessita_esfera = necessita_esfera + 1;
		}
		if(defeito == 2)
		{
			necessita_limpeza = necessita_limpeza + 1;
		}
		if(defeito == 3)
		{
			necessita_troca_cabo = necessita_troca_cabo + 1;
		}
		if(defeito == 4)
		{
			quebrado = quebrado + 1;
		}
		quantidade = quantidade + 1;
		//entrada
		printf("Digite o id do mause: ");
		scanf("%d",&id);

	}
	float p1, p2, p3, p4;//(float) cast
	// 5 / 3 = 1
	p1 = ((float)necessita_esfera / (float)quantidade * 100.0);
	p2 = ((float)necessita_limpeza / (float)quantidade * 100.0);
	p3 = ((float)necessita_troca_cabo /(float)quantidade * 100.0);
	p4 = ((float)quebrado / (float)quantidade * 100.0);

	printf("quantidade total de Mouses %d\n\n",quantidade);
	printf("Situação \t\t\tQuantidade \tPercentual\n");
	printf("1-necessita da esfera\t\t\t%d \t%.2f%%\n",necessita_esfera, p1);
	printf("2-necessita de limpeza\t\t\t%d \t%.2f%%\n",necessita_limpeza + p2);
	printf("3-necessita troca de cabo ou conector\t%d \t%.2f%%\n",necessita_troca_cabo + p3);
	printf("4-quebrado ou inutilizado\t\t%d \t%.2f%%\n",quebrado + p4);

	return 0;
}
