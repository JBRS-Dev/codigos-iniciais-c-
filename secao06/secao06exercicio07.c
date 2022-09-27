#include <stdio.h>
int main()
{
	//variaveis
	int n1, n2, n3, n4, q1, q2, q3, q4;

	//entradas
	printf("digite o 1º numero: ");
	scanf("%d",&n1);
	printf("digite o 2º numero: ");
	scanf("%d",&n2);
	printf("digite o 3º numero: ");
	scanf("%d",&n3);
	printf("digite o 4º numero: ");
	scanf("%d",&n4);

	//processamento
	q1 = n1 * n1;
	q2 = n2 * n2;
	q3 = n3 * n3;
	q4 = n4 * n4;

	if(q3 >= 1000)
	{
		printf("o quadrado do 3º numero e: %d",q3);
	}
	else
	{
		printf("O quadrado do 1º %d e: %d\n",n1,q1);
		printf("O quadrado do 2º %d e: %d\n",n2,q2);
		printf("O quadrado do 3º %d e: %d\n",n3,q3);
		printf("O quadrado do 4º %d e: %d\n",n4,q4);
	}


	return 0;
}
