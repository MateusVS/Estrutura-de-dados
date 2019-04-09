#include <iostream>

using namespace std;

typedef struct Cadastro{
    char cod;
    char nome;
};

typedef struct Cliente{
    Cadastro dados;
    char rua;
    char num;
    char bairro;
    char cidade;
};

typedef struct Produto{
    Cadastro dados;
    float quant;
    float valor;
    char marca;
};

typedef struct Vendas{
    Cliente cliente[5];
    Produto produto[5];
    float tota[5];

};Vendas vendas;

void Cadastrarc(){
    for (int i=0; i<=5; i++){
    system("cls");
    cout<<"Informe o codigo do cliente: "<<endl;
    cin>>vendas.cliente[i].dados.cod;
    cout<<"Informe o nome do cliente: "<<endl;
    cin>>vendas.cliente[i].dados.nome;
    cout<<"Informe a rua que o cliente mora: "<<endl;
    cin>>vendas.cliente[i].rua;
    cout<<"Informe o numero da casa em que o cliente mora: "<<endl;
    cin>>vendas.cliente[i].num;
    cout<<"Informe o bairro que o cliente mora: "<<endl;
    cin>>vendas.cliente[i].bairro;
    cout<<"Informe a cidade que o cliente mora: "<<endl;
    cin>>vendas.cliente[i].cidade;
    }
};

void Cadastrarpro(){
    for (int i=0; i<=5; i++){	
    system("cls");
    cout<<"Informe o  codigo do produto: "<<endl;
    cin>>vendas.produto[i].dados.cod;
    cout<<"Informe o nome do produto: "<<endl;
    cin>>vendas.produto[i].dados.nome;
    cout<<"Informe a marca do produto: "<<endl;
    cin>>vendas.produto[i].marca;
    cout<<"Informe o valor do produto: "<<endl;
    cin>>vendas.produto[i].valor;
    cout<<"Informe a quantidade comprada: "<<endl;
    cin>>vendas.produto[i].quant;
    }
};

void Venda(){
    system("cls");

}

void Menu(){
    int option;
    system("color F0");
    cout<<"========Gerenciamento de vendas========"<<endl;
    cout<<"========ESCOLHA UMA DAS OPCOES========="<<endl;
    do{
        cout<<"1 - Cadastrar novo cliente"<<endl;
        cout<<"2 - Cadastar novo produto"<<endl;
        cout<<"3 - Efetuar venda"<<endl;
        cout<<"4 - Imprimir nota"<<endl;
        cout<<"5 - Sair"<<endl;
        cin>>option;
        switch(option){
            case 1 : Cadastrarc();
                break;
            case 2 : Cadastrarpro();
                break;
            case 3 : Venda();
                break;
        }
    }while(option !=5 );

}
int main()
{
    Menu();
    return 0;
}
