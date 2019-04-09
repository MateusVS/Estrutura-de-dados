//	Exercicio 4 - Lista 1 - Estrutura de dados
//	Danilo de Nadai Sicari - Turma 1 - Fatec Araras
// 	24/03/18

/***************************************************
Escreva uma função mm que receba um vetor inteiro 
v[0..n-1] e os endereços de duas variáveis inteiras, 
digamos min e max, e deposite nessas variáveis o 
valor de um elemento mínimo e o valor de um elemento 
máximo do vetor. Escreva também uma função main que 
use a função mm.
***************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void mm(int *_vct, int *_min, int *_max)
{
	int i = 0;
	
	for(i = 0; i < 20; i++)
	{
		if(*_min > i)
			*_min = i;	
		if(*_max < i)
			*_max = i;	
	}	
}

int main(void)
{
	int *vect = (int*)malloc(sizeof(int)*20);
	int min = 0, max = 0;
	
	int temp[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	
	memcpy(&vect, &temp, 20);
	
	mm(vect, &min, &max);
	
	printf("Valor minimo: %i Valor maximo: %i", min, max);
	
	return 0;
		
}







