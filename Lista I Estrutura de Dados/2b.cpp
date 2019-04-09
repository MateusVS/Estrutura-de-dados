//	Exercicio 2.b - Lista 1 - Estrutura de dados
//	Danilo de Nadai Sicari - Turma 1 - Fatec Araras
// 	24/03/18

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void troca(int *i, int *j)
 {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}


int main(void)
{
	int x, y;
	x = 1; y = -1;	
	printf("Valor de x: %i e y: %i", x, y);
	troca(&x, &y);
	printf("\nValor de x: %i e y: %i", x, y);
	return 0;	
}
