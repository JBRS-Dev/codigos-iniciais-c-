#include <stdio.h>
#include <string.h>

int main()
{
	//programa que tenha nome e senha, e que irforme um
	//erro de que a senha e o nome nao pode ser iguais

	//variaveis
	char nome[100], senha[100];

	//entradas
	printf("Informe o nome: ");
	gets(nome);

	printf("Informe a senha: ");
	gets(senha);

	//processamento
	while(!strcmp(senha, nome))
	{
		printf("Senha não pode ser igual ao nome\n");

		printf("Informe o nome: ");
		gets(nome);

		printf("Informe a senha: ");
		gets(senha);
	}

	return 0;
}
