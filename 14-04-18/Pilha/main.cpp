#include <stdio.h>
#include <stdlib.h>
#define carros 10//limita o vetor dinâmico
using namespace std;

 struct Pilha{
 int vetor[carros];
 int size;
 };

void inicializa(Pilha *S){//S funciona como contador de posições
 S -> size=0;
}

void push(Pilha *S, int x){//chama o contador "Pilha *S"
    if(S->size<carros){
        S->vetor[S->size++] = x;//caso condição bata, é acrescentado 1 ao contador de posições
    }
    else{
       fprintf(stderr, "Erro: Estacionamento cheio\n");//fprintf[grava em file] stderr[indica erro]
    }
}

int sai(Pilha *S){//chama o contador "Pilha *S"
int retorno;
    if(S->size==0){
      fprintf(stderr, "Erro: Estacionamento vazio\n");
      exit(-1);
    }
    else {//subtrai um carro do estacionamento
      S->size--;
      retorno = S->vetor[S->size];
      S->vetor[S->size] = 0;
      return(retorno);//atribui o valor para oprimeiro vetor
    }
}
/*void imprime(Pilha *S) {//imprime na tela toda a pilha
    int y;
	for (y = S->size;y > 0 ; y--)
		printf("%d ",S->vetor[y-1]);
	printf("\n");
}*/

struct car{
    char placa[5];
    char modelo[12];
    char ano[5];
}; car cadastro;

void cadastra(){
int z;
for (z=S->size; z>0;z)
}
int main() {
    Pilha executa; //criei a variavel @executa@ do "tipo" Pilha, chamando a estrutura pilha
    int valor;

    inicializa(&executa);//zera a memoria





    push(&executa, 3);
    imprime(&executa);
    push(&executa, 5);
    imprime(&executa);
    push(&executa, 1);
    imprime(&executa);

    valor = sai(&executa);
    printf("Valor desempilhado:\t %d\n", valor);
    valor = pop(&minhaPilha);
    printf("Valor desempilhado:\t %d\n", valor);
    valor = pop(&minhaPilha);
    printf("Valor desempilhado:\t %d\n", valor);
    return 0;
}
