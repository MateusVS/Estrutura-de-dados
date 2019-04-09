#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int FatorialR(int n){
	int f=1;
	if (n > 0)
		f = n * FatorialR(n-1);
	else
	f=1;

	return f;
}

int main(int argc, char** argv) {
	int n=0;

	cout<<"Informe um valor:\n";
	cin>>n;

	cout<<"O valor fatorial de "<<n<<" e : "<<FatorialR(n);
	return 0;
}
