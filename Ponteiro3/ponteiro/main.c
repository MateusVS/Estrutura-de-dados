#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *v;
    v=(int*)malloc(sizeof(int)*10);

    v[0]=10;
    v[1]=11;
    v[2]=12;
    v[3]=13;
    v[4]=14;
    v[5]=15;
    v[6]=16;
    v[7]=17;
    v[8]=18;
    v[9]=19;
    //continua...
    for(i=0; i<10; i++){
        printf("v[%d]:%d\n",i,v[i]);
        printf("Endereco de'v':%p",v);

        free(v);
    }
    return 0;
}
