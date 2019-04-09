#include <iostream>
#include <math.h>
using namespace std;

int somaR(int n){
	
	if (n==0){
		return 0;
	}
	
		return 2*pow(n,2)+2*n+8 + somaR (--n);
	
}

int main(int argc, char** argv) {
	int n=0;
	
	cout<<"Informe um numero:\n";
	cin>>n;
	
	cout<<somaR(n);
	return 0;
}
