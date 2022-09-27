#include <stdio.h>

int main()
{
	//variaveis
	int c;
	float  n, e =0, salario, valor_hora = 10.00;

	//entradas
	printf("informe o codigo: ");
	scanf("%c",&c);

	printf("digite a quantidade de Horas trabalhadas: ");
	scanf("%f",&n);

	//processamento
	if(n > 50)
	{
		e = (n - 50) * 20.00;
		salario = (50 * valor_hora) + e;
		//saida
		printf("salario total R$: %.2f\n",salario);
		printf("salario extra R$: %.2f",e);
	}
	else
	{
		salario = n *valor_hora;
		printf("salario Total R$: %.2f\n",salario);
		printf("salario extra: R$ %.2f",e);
	}


	return 0;
}
