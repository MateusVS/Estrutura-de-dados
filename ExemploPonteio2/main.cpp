#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int *ptr_a;
	ptr_a=new int;
	//cria a área necessária para 01 inteiro e coloca em 'ptr_a' o endereço desta área
	
	if (ptr_a==NULL){
		cout<<"Memoria insuficiente !"<<endl;
		exit(1);
	}
	
	cout<<"Endereco de ptr_a: "<<ptr_a<<endl;
	*ptr_a=90;
	cout<<"Conteudo de ptr_a"<<"ptr_a"<<endl;
	delete ptr_a;
	return 0;
}
