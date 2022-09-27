#include <stdio.h>

int main()
{
	int metros, centimetros;
	//entrda
	printf("Digite o valor de metros: ");
	scanf("%d",&metros);

	//processamento
	centimetros = metros * 100;

	//saida
	printf("%d metros em centimentros e %d",metros, centimetros);

	return 0;
}
