#include <stdio.h>

int main()
{
	//declarando variaveis
	int quati_minima,quati_maxima;
	float estoque_medio;

	//entradas
	printf("Digite a quantidade minima: ");
	scanf("%d",&quati_minima);

	printf("Digite quantidade maxima: ");
	scanf("%d",&quati_maxima);


	//processamento
	estoque_medio = (quati_minima + quati_maxima)/2;


	//saida
	printf("O estoque medio é %.2f",estoque_medio);


	return 0;
}
