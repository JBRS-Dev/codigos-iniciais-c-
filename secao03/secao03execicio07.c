#include <stdio.h>

int main()
{
	//decalrando variaveis
	float altura, peso_ideal;

	//entrada
	printf ("Qual sua altura: ");
	scanf("%f",&altura);

	//processamento
	peso_ideal = (72.5 * altura) - 58;

	//saida
	printf("Seu peso ideal seria: %.2f",peso_ideal);
}
