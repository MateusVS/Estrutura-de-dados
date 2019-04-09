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
    cout << "Informe o código da passagem: " << endl;
    cin >> venda.cod_passagem;
    cout << "Informe o código do ônibus: " << endl;
    cin >> venda.cod_bus;
    cout << "Informe o número da poltrona: " << endl;
    cin >> venda.poltrona;
    cout << "Informe o preço da passagem: " << endl;
    cin >> venda.preco;
    cout << "Informe a previsão de saída: "<<endl;
    cin >> venda.horariosaida;
    cout << "Informe a previsão de chegada: "<<endl;
    cin >> venda.horariochegada;
    cout << "Informe a cidade de saída: "<<endl;
    cin >> venda.saida;
    cout << "Informe a cidade de saída: "<<endl;
    cin >> venda.destino;
    system ("cls");
}
void imprimir(){
    system ("cls");
    cout << "Código passagem: " << venda.cod_passagem << endl;
    cout << "Código ônibus: " << venda.cod_bus << endl;
    cout << "Número poltrona: " << venda.poltrona << endl;
    cout << "Código ônibus: " << venda.cod_bus << endl;
    cout << "Preço passagem,: " << venda.preco << endl;
    cout << "Horário de saída: " << venda.horariosaida << endl;
    cout << "Previsão de chegada : " << venda.horariochegada << endl;
    cout << "Cidade de saída: " << venda.saida << endl;
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
        cout << "SELECIONE UMA DAS OPÇÕES" << endl;
        cout << "1 - Cadastrar "<< endl;
        cout << "2 - Imprimir "<< endl;
        cout << "3 - Zerar " << endl;
        cout << "4 - Sair " << endl;
        cout << "SELECIONE UMA DAS OPÇÕES" << endl;
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
            cout << "Opção inexistente";
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
