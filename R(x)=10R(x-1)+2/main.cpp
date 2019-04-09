#include <iostream>

using namespace std;

int equaR(int n){
	
	if(n == 1){
		n=1;
	}
	
	else{

	n = 10*equaR(n-1)+2;
	
	}
	return n;
}

int main(int argc, char** argv) {
	int n=0;
	
	cout<<"Informe um numero: ";
	cin>>n;
	
	cout<<equaR(n);
	return 0;
}
