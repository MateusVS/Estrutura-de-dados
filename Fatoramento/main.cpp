#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//fun��o local
int Fatorial(int n){
	int f=1;
	
		for (int i = n; i > 0; i--){
		f*=i;
	}
	return f;
}

int main(int argc, char** argv) {
	int n=0;
//	int f=1; virou variavel local na fun��o fatorial
	
	cout<<"Informe o valor desejado: ";
	cin>>n;
	
/* opera��o de fun��o global	for (int i = n; i > 0; i--){
		f*=i;
	}*/
	
	//chamando fun��o
	cout <<"Fatoral de"<<n<<" e : "<< Fatorial(n);
		
	system("color F0");
//	cout<<"Fatoral de: "<<n<<" e : "<<f;
	return 0;
}
