#include <iostream>

using namespace std;

int CalcR(int x){
	
	if(x==0){
		x=2;
	}
	
	else{
		x=2*CalcR(x-1)-4;
	}
	
	return x;
}

int main(int argc, char** argv) {
	int x=0;
	
	cout<<"Informe o valor de X:\n";
	cin>>x;
	
	cout<<"O valor de X e: "<<CalcR(x);
	return 0;
}
