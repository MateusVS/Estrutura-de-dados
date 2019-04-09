#include <iostream>
#include <string.h>//biblioteca responsavel pela manipulação de strings
#include <locale.h>
using namespace std;

typedef struct Endereco{
    char rua[100];
    char numero[5];
    char comnplemento[200];
    char bairro[60];
};
Endereco endereco_pessoa;

typedef struct Pessoa{
    char nome[60];
    Endereco endereco;
    char sexo[1];
    char telefone[9];
    char email[100];
};
Pessoa pessoa;

void Cadastrar(){
    cout<<"Informe seu nome: ";
    scanf("%s", &pessoa.nome);
    cout<<"Informe a rua da casa: ";
    scanf("%s", &pessoa.endereco.rua);
    cout<<"Informe o numero de sua casa: ";
    scanf("%s", &pessoa.endereco.numero);
    cout<<"Informe um complemento: ";
    scanf("%s", &pessoa.endereco.comnplemento);
    cout<<"Informe o bairro de sua casa: ";
    scanf("%s", &pessoa.endereco.bairro);
    cout<<"Informe o seu sexo: ";
    scanf("%s", &pessoa.sexo);
    cout<<"Informe o numero do seu telefone: ";
    scanf("%s", &pessoa.telefone);
    cout<<"Informe o e-mail: ";
    scanf("%s", &pessoa.email);
}
int main()
{
  Cadastrar();
    return 0;
}
