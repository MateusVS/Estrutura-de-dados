#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>
using namespace std;

typedef struct Dados{
    char nome[100];
    char sexo[1];
    char idade[3];
    char nasc[10];
};

typedef struct Endereco{
    char rua[100];
    char numero[5];
    char bairro[3];
    char complemento[50];
    char cidade[10];
};

typedef struct Professores{
    Dados dadosgerais;
    Endereco endere;
    char curso[100];
    char materia[100];
    char sala[3];
}; Professores professor;

typedef struct Funcionarios{
    Dados dadosgerais;
    Endereco endere;
    char cargo[100];
    char formacao[100];
    char setor[30];
}; Funcionarios funcionario;

void ImprimirProf(){
    system("cls");
    cout<<"O nome do professor é: "<<professor.dadosgerais.nome<<endl;
    cout<<"O sexo do professor é: "<<professor.dadosgerais.sexo<<endl;
    cout<<"A idade do professor é: "<<professor.dadosgerais.idade<<endl;
    cout<<"A data de nascimento do professor é: "<<professor.dadosgerais.nasc<<endl;
    cout<<"A rua em que o professor reside se chama: "<<professor.endere.rua<<endl;
    cout<<"O número da casa do professor: "<<professor.endere.numero<<endl;
    cout<<"Complemento: "<<professor.endere.complemento<<endl;
    cout<<"O bairro em que o professor reside se chama: "<<professor.endere.bairro<<endl;
    cout<<"A cidade que o professor mora: "<<professor.endere.cidade<<endl;
    cout<<"O professor lesiona no curso de: "<<professor.curso<<endl;
    cout<<"O professor lesiona a materia de: "<<professor.materia<<endl;
    cout<<"O professor lesiona na sala: "<<professor.sala<<endl;
    cout<<"\n\n\n\n";
}

void ImprimirFunc(){
    system("cls");
    cout<<"O nome do funcionario é: "<<funcionario.dadosgerais.nome<<endl;
    cout<<"O sexo do funcionario é: "<<funcionario.dadosgerais.sexo<<endl;
    cout<<"A idade do funcionario é: "<<funcionario.dadosgerais.idade<<endl;
    cout<<"A data de nascimento do funcionario é: "<<funcionario.dadosgerais.nasc<<endl;
    cout<<"A rua em que o funcionario reside se chama: "<<funcionario.endere.rua<<endl;
    cout<<"O número da casa do funcionario: "<<funcionario.endere.numero<<endl;
    cout<<"Complemento: "<<funcionario.endere.complemento<<endl;
    cout<<"O bairro em que o funcionario reside se chama: "<<funcionario.endere.bairro<<endl;
    cout<<"A cidade que o funcionario mora: "<<funcionario.endere.cidade<<endl;
    cout<<"A escolaridade do funcionario é: "<<funcionario.formacao<<endl;
    cout<<"O cargo do funcionario é: "<<funcionario.cargo<<endl;
    cout<<"O funcionario trabalha no setor: "<<funcionario.setor<<endl;
    cout<<"\n\n\n\n";
}

void CadastrarProf(){
    system("cls");
    fflush(stdin);
    cout<<"Insira o nome do professor: ";
    scanf("%256[^\n]", &professor.dadosgerais.nome);
    fflush(stdin);

    cout<<"Informe o sexo do professor: ";
    scanf("%256[^\n]", &professor.dadosgerais.sexo);
    fflush(stdin);

    cout<<"Informe a idade do professor: ";
    scanf("%256[^\n]", &professor.dadosgerais.idade);
    fflush(stdin);

    cout<<"Informe a data de nascimento: ";
    scanf("%256[^\n]", &professor.dadosgerais.nasc);
    fflush(stdin);

    cout<<"Informe a rua em que o professor mora: ";
    scanf("%256[^\n]", &professor.endere.rua);
    fflush(stdin);

    cout<<"Informe o número da casa em que o professor mora: ";
    scanf("%256[^\n]", &professor.endere.numero);
    fflush(stdin);

    cout<<"Informe um complemento: ";
    scanf("%256[^\n]", &professor.endere.complemento);
    fflush(stdin);

    cout<<"Informe o bairro em que o professor mora: ";
    scanf("%256[^\n]", &professor.endere.bairro);
    fflush(stdin);
    cout<<"Informe a cidade em que o professor mora: ";
    scanf("%256[^\n]", &professor.endere.cidade);
    fflush(stdin);

    cout<<"Informe o curso que lesiona: ";
    scanf("%256[^\n]", &professor.curso);
    fflush(stdin);

    cout<<"Informe a matéria que lesiona: ";
    scanf("%256[^\n]", &professor.materia);
    fflush(stdin);

    cout<<"Informe a sala em que lesiona: ";
    scanf("%256[^\n]", &professor.sala);
    fflush(stdin);
    system("cls");
}

void CadastrarFunc(){
    system("cls");
    fflush(stdin);
    cout<<"Insira o nome do funcionario: ";
    scanf("%256[^\n]", &funcionario.dadosgerais.nome);
    fflush(stdin);

    cout<<"Informe o sexo do funcionario: ";
    scanf("%256[^\n]", &funcionario.dadosgerais.sexo);
    fflush(stdin);

    cout<<"Informe a idade do funcionario: ";
    scanf("%256[^\n]", &funcionario.dadosgerais.idade);
    fflush(stdin);

    cout<<"Informe a data de nascimento: ";
    scanf("%256[^\n]", &funcionario.dadosgerais.nasc);
    fflush(stdin);

    cout<<"Informe a rua em que o funcionario mora: ";
    scanf("%256[^\n]", &funcionario.endere.rua);
    fflush(stdin);

    cout<<"Informe o número da casa em que o funcionario mora: ";
    scanf("%256[^\n]", &funcionario.endere.numero);
    fflush(stdin);

    cout<<"Informe um complemento: ";
    scanf("%256[^\n]", &funcionario.endere.complemento);
    fflush(stdin);

    cout<<"Informe o bairro em que o funcionario mora: ";
    scanf("%256[^\n]", &funcionario.endere.bairro);
    fflush(stdin);

    cout<<"Informe a cidade em que o funcionario mora: ";
    scanf("%256[^\n]", &funcionario.endere.cidade);
    fflush(stdin);

    cout<<"Informe o cargo de ocupação: ";
    scanf("%256[^\n]", &funcionario.cargo);
    fflush(stdin);

    cout<<"Informe a formação do funcionário: ";
    scanf("%256[^\n]", &funcionario.formacao);
    fflush(stdin);

    cout<<"Informe o setor em que atua: ";
    scanf("%256[^\n]", &funcionario.setor);
    fflush(stdin);
    system("cls");
};

void ApagaProf(){
    system("cls");
    strcpy(professor.dadosgerais.nome, "NULL");
    strcpy(professor.dadosgerais.idade, "NULL");
    strcpy(professor.dadosgerais.nasc, "NULL");
    strcpy(professor.dadosgerais.sexo, "NULL");
    strcpy(professor.endere.bairro, "NULL");
    strcpy(professor.endere.cidade, "NULL");
    strcpy(professor.endere.complemento, "NULL");
    strcpy(professor.endere.numero, "NULL");
    strcpy(professor.endere.rua, "NULL");
    strcpy(professor.curso, "NULL");
    strcpy(professor.materia, "NULL");
    strcpy(professor.sala, "NULL");
    cout<<"Dados apagados com sucesso\n";
}
void ApagaFunc(){
    system("cls");
    strcpy(funcionario.dadosgerais.nome, "NULL");
    strcpy(funcionario.dadosgerais.idade, "NULL");
    strcpy(funcionario.dadosgerais.nasc, "NULL");
    strcpy(funcionario.dadosgerais.sexo, "NULL");
    strcpy(funcionario.endere.bairro, "NULL");
    strcpy(funcionario.endere.cidade, "NULL");
    strcpy(funcionario.endere.complemento, "NULL");
    strcpy(funcionario.endere.numero, "NULL");
    strcpy(funcionario.endere.rua, "NULL");
    strcpy(funcionario.cargo, "NULL");
    strcpy(funcionario.formacao, "NULL");
    strcpy(funcionario.setor, "NULL");
    cout<<"Dados apagados com sucesso\n";
}

void Menufuncionario(){
    system("cls");
    int opcao;
    do {
        cout<<"Selecione uma das opções: \n";
        cout<<"1 - Cadastrar funcionarios\n";
        cout<<"2 - Imprimir lista de funcionarios\n";
        cout<<"3 - Limpar dados\n";
        cout<<"4 - Voltar ao menu principal\n";
        cout<<"\n";
        cin >> opcao;
        switch(opcao){
            case 1: CadastrarFunc();
            break;
            case 2: ImprimirFunc();
            break;
            case 3: ApagaFunc();
            break;
            case 4: cout << "";//return 0;
            break;
            default: cout<<"\nOpção invalida";
              }
    } while (opcao != 4);
}

void Menuprofessor(){
    system("cls");
    int opcao;
    do {
        cout<<"Selecione uma das opções: \n";
        cout<<"1 - Cadastrar professor\n";
        cout<<"2 - Imprimir lista de professores\n";
        cout<<"3 - Limpar dados\n";
        cout<<"4 - Voltar ao menu principal\n";
        cout<<"\n";
        cin >> opcao;
        switch(opcao){
            case 1: CadastrarProf();
            break;
            case 2: ImprimirProf();
            break;
            case 3: ApagaProf();
            break;
            case 4: cout << "";
            break;
            default:cout<<"\nOpção invalida";
              }
    } while (opcao != 4);
}

void Menu(){
    system("cls");
    int opcao;
    do {
        cout<<"Selecione uma das opções: \n";
        cout<<"1 - Dados dos professores \n";
        cout<<"2 - Dados demais funcionarios \n";
        cout<<"3 - Sair\n";
        cout<<"\n";
        cin >> opcao;
        switch(opcao){
            case 1: Menuprofessor();
            break;
            case 2: Menufuncionario();
            break;
            case 3: cout << "";
            break;
            default:cout<<"\nOpção invalida";
              }
    } while (opcao != 3);
}

int main(int argc, char** argv) {

    /*Chamada ao locale*/
    setlocale(LC_ALL, "portuguese");

    /*Chamada funcao void menu*/
    Menu();

    /*retorno zero para parar o sistema*/
    return 0;
}
