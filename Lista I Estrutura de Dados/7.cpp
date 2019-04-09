//	Exercicio 7 - Lista 1 - Estrutura de dados
//	Danilo de Nadai Sicari - Turma 1 - Fatec Araras
// 	24/03/18

/***************************************************
Escreva uma função chamada troca que troca os 
valores dos parâmetros recebidos. Sua assinatura 
deve ser:
void troca(float *a, float *b);
***************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void troca(float *i, float *j)
 {
	float temp;
	temp = *i;
	*i = *j;
	*j = temp;
}


int main(void)
{
	float x, y;
	x = 1.5; y = -1.6;	
	printf("Valor de x: %f e y: %f", x, y);
	troca(&x, &y);
	printf("\nValor de x: %f e y: %f", x, y);
	return 0;	
}
