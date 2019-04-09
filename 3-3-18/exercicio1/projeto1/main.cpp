#include <iostream>

using namespace std;

typedef struct Corsinha{
    int cod;
    char proprietario [300];
    float preco;
    char placa [5];
    char cor [10];
}; Corsinha carro;

void imprimir (){
    cout<<"codigo: "<< carro.cod;
    cout<<"proprietario: "<< carro.proprietario;
    cout<<"preco: "<< carro.preco;
    cout<<"placa: "<< carro.placa;
    cout<<"cor: "<< carro.cor;
}
int main()
{
    cout << "Informe o código do corsinha: " << endl;
    cin >> carro.cod;

    cout << "Informe o nome do proprietario: "<<endl;
    cin >> carro.proprietario;

    cout << "Informe o valor: \n";
    cin>> carro.preco;

    cout << "Informe a placa: \n";
    cin>>carro.placa;

    cout << "Informe a cor: \n";
    cin>>carro.cor;

    imprimir();

    return 0;
}
