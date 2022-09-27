#include <stdio.h>

int main()
{
	//variaveis
	float p, e=0, m=0;
	//ou
	//float p, m;
	//char e[8] = "excesso"

	//entradas
	printf("digite o peso em kg: ");
	scanf("%f",&p);

	//processamento
	if(p > 50)
	{
		m = (p - 50) * 4;
		//saida se tiver excesso de peso
		printf("Voce devera pagar R$ %.2f reais em multas.",m);

	}
	else
	{
		m = 0;
		e = 0;
		//saida se não tiver excesso
		printf("Multa: %.2f\n",m);
		printf("excesso: %.2f\n",e);
	}

	return 0;
}
