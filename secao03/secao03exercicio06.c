#include <stdio.h>

int main()
{
	float valor_hora, salario;
	int horas_trabalhadas;

	//entradas
	printf("valor hora: ");
	scanf("%f",&valor_hora);

	printf("horas trabalhadas: ");
	scanf("%d",&horas_trabalhadas);

	//processamento
	salario= (horas_trabalhadas * valor_hora);


	//saida
	printf("valor do salario mes R$ %.2f",salario);


	return 0;
}
