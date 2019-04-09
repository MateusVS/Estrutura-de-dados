//	Exercicio 2.c sem ponteiros - Lista 1 - Estrutura de dados
//	Danilo de Nadai Sicari - Turma 1 - Fatec Araras
// 	24/03/18

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(void)
{
	char a[20], b[20];
	//a = "abacate";
	memcpy(a, "abacate", sizeof("acabate"));
	//b = "uva";
	memcpy(b, "uva", sizeof("uva"));
	if (a[0] < b[0])
		printf ("%s vem antes de %s no dicionario", a, b);
	else
		printf ("%s vem depois de %s no dicionario", a, b);
	return 0;	
}
