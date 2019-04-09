//	Exercicio 6 - Lista 1 - Estrutura de dados
//	Danilo de Nadai Sicari - Turma 1 - Fatec Araras
// 	24/03/18

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


int main(void)
{
	int a[99];
	int i = 0;
	for (i = 0; i < 99; ++i) 
	{
		a[i] = 98 - i; 
		printf("a[%i] = %i", i, a[i]);
	}
	for (i = 0; i < 99; ++i) 
	{
		a[i] = a[a[i]];
		printf("a[%i] = %i", i, a[i]);
	}
	
	return 0;
		
}
