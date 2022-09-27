#include <stdio.h>

int main()
{
	//variaveis
	int n;
	//entrada
	printf("Digite um numero: ");
	scanf("%d",&n);

	//pricessamento
	if(n >100)
	{
		printf("%d",n);
	}
	else
	{
		n = 0;
		printf("%d",n);
	}

	return 0;
}
