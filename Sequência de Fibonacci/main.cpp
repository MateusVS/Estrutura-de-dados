#include <iostream>

using namespace std;

//fun��o fib
int FiboR(int n){
	int fib;
	
	if (n==0){
		fib = 1;	
	}
	else if (n==1){
		fib = 1;
	}
	else{
		fib = FiboR(n-1) + FiboR(n-2);
	}
	return fib;
}

//fun��o principal
int main(int argc, char** argv) {
	int n=0;
	
	cout<<"Informe um numero: ";
	cin>>n;
	
	cout<<FiboR(n);	
	return 0;
}
