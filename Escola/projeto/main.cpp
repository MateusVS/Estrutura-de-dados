#include <iostream>
#include <stdio.h>

using namespace std;

/*
typedef struct Dados(){
    char nome[100];
    char sexo[1];
    char idade[3];
    char nasc[10];

}// Dados dadosgerais;

typedef struct Endereco(){
    char rua[100];
    char numero[5];
    char bairro[3];
    char complemento[50];
    char cidade[10];

}// Endereco endere;
*/
typedef struct Professores(){
    Dados dadosgerais;
    Endereco endere;
    char curso[100];
    char materia[100];
    char sala[3];
} Professores professor;
/*
typedef struct Funcionarios(){
    Dados dadosgerais;
    Endereco endere;
    char cargo[100];
    char formacao[100];
    char setor[30];
}Funcionarios funcionario;
*/
void Imprimir(){

}

void CadastrarProf(){
    cout<<"Insira o nome do professor: ";
    scanf("%100[^/n]", &professor.dadosgerais.nome);
    fflush(stdin);
    cout<<"Informe o sexo do professor: "
    scanf("%100[^/n]", &professor.)
    cout<<"Informe a idade do professor: "
    cout<<"Informe a data de nascimento: "
}

void ApagaProf(){

}
void ApagaFunc(){

}

void Menufuncionario(){
    int opcao;
    do {
        cout<<"Selecione uma das opções: \n";
        cout<<"1 - Cadastrar funcionarios\n";
        cout<<"2 - Imprimir lista de funcionarios\n";
        cout<<"3 - Limpar dados";
        cout<<"4 - Sair";

        switch(opcao){
            case 1: Cadastrar();
            break;
            case 2: Imprimir();
            break;
            case 3: ApagaFunc();
            break;
            case 4: return 0;
            break;
            default:cout<<"\nOpção invalida"
              }
    } while (opcao != 4);
}

void Menuprofessor(){
    int opcao;
    do {
        cout<<"Selecione uma das opções: \n";
        cout<<"1 - Cadastrar professor\n";
        cout<<"2 - Imprimir lista de professores\n";
        cout<<"3 - Limpar dados";
        cout<<"4 - Sair";

        switch(opcao){
            case 1: CadastrarProf();
            break;
            case 2: Imprimir();
            break;
            case 3: ApagaProf();
            break;
            case 4: return 0;
            break;
            default:cout<<"\nOpção invalida"
              }
    } while (opcao != 4);
}

void Menu(){
    int opcao;
    do {
        cout<<"Selecione uma das opções: \n";
        cout<<"1 - Dados dos professores \n";
        cout<<"2 - Dados demais funcionarios \n";
        cout<<"3 - Sair";

        switch(opcao){
            case 1: Menuprofessor();
            break;
            case 2: Menufuncionario();
            break;
            case 3: return 0;
            break;
            default:cout<<"\nOpção invalida"
              }
    } while (opcao != 3);
}

int main()
{
    Menu();
    return 0;
}
