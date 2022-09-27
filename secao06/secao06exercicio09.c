#include <stdio.h>

int main ()
{
	//variaveis
	float indece;

	//entradas
	printf("informe o nivel de poluicao do grupo 1: ");
	scanf("%f",&indece);


	//processamento
	if((indece >= 0.3) && (indece < 0.4))
		{
			printf("industrias do grupo 1 suspender atividades.");
		}
		else
		    if((indece >= 0.4) && (indece < 0.5))
		    {

			printf("industrias do grupo 1 e grupo 2 suspender as atividades.");
		    }
		    else
		        if(indece >= 0.5)
		        {

		        	printf("Todos os grupos deven suspender as atividades.");
		        }
		        else
		        {
		        	printf("Niveis de poluição aceitaveis.");
		        }

	return 0;
}
