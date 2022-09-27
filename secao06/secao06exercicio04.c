#include <stdio.h>
#include<ctype.h>

int main()
{
	float altura, peso_ideal;
	char sexo;

	//entrada
	printf("digite sua altura:");
	scanf("%f", &altura);
	gets(stdin);//corrigir bug
	printf("digite o sexo m/f: ");
	scanf("%c",&sexo);

	//processamento
	if(tolower(sexo) == 'm')
		{
			peso_ideal= (72.7 * altura)- 58;
			printf("seu peso ideal é: %.2f",peso_ideal);
		}
	if(tolower(sexo)== 'f')
		{
			peso_ideal = (62.1 * altura)- 44.7;
			printf("seu peso ideal é: %.2f",peso_ideal);
		}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f')
	{
		printf("sexo não reconhecido. \n");
	}
	return 0;
}
