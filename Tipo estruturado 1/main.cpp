#include <iostream>
#include <string.h>//biblioteca responsavel pela manipulação de strings
#include <locale.h>// converte acentos da maneira correta para o console
using namespace std;

//void representa algo "sem retorno"

typedef struct Aluno{
	int codigo;
	char nome[200];
	float nota;
};
Aluno aluno_especial;
void inicializar();
void imprimir();
void cadastrar();
void menu(){
	int opcao;
	
	do{
		cout<<"\n----Opções----";
		cout<<"\n1. Iniciar a estrutura";
		cout<<"\n2. Imprimir a estrutura";
		cout<<"\n3. Cadastrar aluno especial";
		cout<<"\n4. Para sair";
		cout<<"\n\nDigite a opção desejada:\n";
		cin>>opcao;
		
		
		switch(opcao){
			case 1:
				inicializar();
			break;
			case 2:
				imprimir(); 
			break;
			case 3:
				cadastrar();
			break;		
			default:
				cout<<"\nOpção não existente";	
			break;		
		}		
	}
	while(opcao!=4);
}
void inicializar(){
	aluno_especial.codigo=0;
	strcpy(aluno_especial.nome ,"NULL");
	aluno_especial.nota=0.0;
}
void imprimir(){
	cout<<"\nO código do aluno especial é: "<<aluno_especial.codigo;
	cout<<"\nO nome do aluno especial é: "<<aluno_especial.nome;
	cout<<"\nA nota do aluno especial é: "<<aluno_especial.nota;
	cout<<"\n\n";
}
void cadastrar(){
	cout<<"Digite o código do aluno especial:\n";
	cin>>aluno_especial.codigo;
	cout<<"\nDigite o nome do aluno especial:\n";
	cin>>aluno_especial.nome;
	cout<<"\nDigite a nota do aluno especial:\n";
	cin>>aluno_especial.nota;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");//define o idioma base utilizado pelo programa
	menu();
	return 0;
}
