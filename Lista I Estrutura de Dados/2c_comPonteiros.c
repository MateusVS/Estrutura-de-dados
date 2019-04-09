//	Exercicio 2.c com ponteiros - Lista 1 - Estrutura de dados
//	Danilo de Nadai Sicari - Turma 1 - Fatec Araras
// 	24/03/18

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	//Cria apontador para 20 espacos de memoria de 1 byte
	char *a = malloc(sizeof(char)*20);
	char *b = malloc(sizeof(char)*20);
	
	if (a == NULL || b == NULL)
	{
		printf("Memoria insuficiente");
		exit(1);
	}
	else
	{
		//*a = "abacate";
		memcpy(a, "abacate", sizeof("abacate"));
		//*b = "uva";
		memcpy(b, "uva", sizeof("uva"));
		if (a[0] < b[0])
			printf ("%s vem antes de %s no dicionario", a, b);
		else
			printf ("%s vem depois de %s no dicionario", a, b);	
	}

	return 0;	
}
