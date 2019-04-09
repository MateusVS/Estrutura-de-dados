#include <iostream>

#define max 10
using namespace std;

 typedef struct Carro{
     string placa;
     string modelo;
     string ano;
 };Carro veiculo[max];

 void insere(){

 }

void retira(){

 }
void imprimi(){

}
 void menu(){
     int x=0;
     do{
     cout<<"----------ESTACIONAMENTO----------"<<endl;
     cout<<"1 - Entrada de novo carro"<<endl;
     cout<<"2 - Saida de carro"<<endl;
     cout<<"3 - Listar carros"<<endl;
     cout<<"4 - Sair do sistema"<<endl;
     cout<<"\n\n\nSelecione uma das opcoes: ";
     cin>>x;

     switch(x){
     case 1:
        insere();
        break;
     case 2:
        retira();
        break;
     case 3:
         imprimi();
        break;
     case 4:
        break;
     default:
        cout<<"\nOpcao invalida";
        break;
    }
    }while (x>=4);
 }
int main(){

    menu();
    return 0;
}
