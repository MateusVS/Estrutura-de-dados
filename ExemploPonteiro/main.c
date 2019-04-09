#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *ptr_a;
    ptr_a = malloc(sizeof(int));
    //cria a �rea necess�ria para 01 inteiro e coloca em 'ptr_a' o endere�o desta �rea

    if (ptr_a == NULL){
        printf("Mem�ria insuficiente!\n");
        exit(1);
    }

    printf("Endere�o de ptr_a:%p\n", ptr_a);
    *ptr_a=90;
    printf("Conteudo de ptr_a:%p\n","ptr_a");
    //imprime 90
    free(ptr_a);//Libera a �rea alocada
    return 0;
}
