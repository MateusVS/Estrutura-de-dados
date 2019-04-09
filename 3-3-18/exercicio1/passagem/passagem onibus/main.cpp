#include <iostream>
#include <locale.h>//usar char especiais
using namespace std;

typedef struct Onibus{
    int cod_passagem;
    int cod_bus;
    int poltrona;
    float preco;
    char horariosaida [5];
    char horariochegada [5];
    char saida [300];
    char destino [300];
}; Onibus venda;

void cadastrar(){
    system ("cls");
    cout << "Informe o c�digo da passagem: " << endl;
    cin >> venda.cod_passagem;
    cout << "Informe o c�digo do �nibus: " << endl;
    cin >> venda.cod_bus;
    cout << "Informe o n�mero da poltrona: " << endl;
    cin >> venda.poltrona;
    cout << "Informe o pre�o da passagem: " << endl;
    cin >> venda.preco;
    cout << "Informe a previs�o de sa�da: "<<endl;
    cin >> venda.horariosaida;
    cout << "Informe a previs�o de chegada: "<<endl;
    cin >> venda.horariochegada;
    cout << "Informe a cidade de sa�da: "<<endl;
    cin >> venda.saida;
    cout << "Informe a cidade de sa�da: "<<endl;
    cin >> venda.destino;
    system ("cls");
}
void imprimir(){
    system ("cls");
    cout << "C�digo passagem: " << venda.cod_passagem << endl;
    cout << "C�digo �nibus: " << venda.cod_bus << endl;
    cout << "N�mero poltrona: " << venda.poltrona << endl;
    cout << "C�digo �nibus: " << venda.cod_bus << endl;
    cout << "Pre�o passagem,: " << venda.preco << endl;
    cout << "Hor�rio de sa�da: " << venda.horariosaida << endl;
    cout << "Previs�o de chegada : " << venda.horariochegada << endl;
    cout << "Cidade de sa�da: " << venda.saida << endl;
    cout << "Cidade de destino: " << venda.destino << endl;
    system ("cls");
}
void zerar(){
    system ("cls");
    venda.cod_passagem = 0;
    venda.cod_bus = 0;
    venda.poltrona = 0;
    venda.preco = 0;
    strcpy(venda.horariosaida ,"NULL");
    strcpy(venda.horariochegada ,"NULL");
    strcpy(venda.saida ,"NULL");
    strcpy(venda.destino ,"NULL");
    system ("cls");
}
void menu(){

    int opcao = 0;

    do{
        cout << "SELECIONE UMA DAS OP��ES" << endl;
        cout << "1 - Cadastrar "<< endl;
        cout << "2 - Imprimir "<< endl;
        cout << "3 - Zerar " << endl;
        cout << "4 - Sair " << endl;
        cout << "SELECIONE UMA DAS OP��ES" << endl;
        cin >> opcao;

        switch(opcao){
        case 1:
            cadastrar();
            break;
        case 2:
            imprimir();
            break;
        case 3:
            zerar();
            break;
        default:
            cout << "Op��o inexistente";
        }
    }
    while (opcao!=4);
}

int main()
{
    setlocale(LC_ALL,"portuguese");//define o idioma base utilizado pelo programa
    menu();
    return 0;
}
