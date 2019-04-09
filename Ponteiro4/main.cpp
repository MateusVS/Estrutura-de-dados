#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i;
	int *v;
	
	v=new int[10];
	
	v[0]=10;
    v[1]=11;
    v[2]=12;
    v[3]=13;
    v[4]=14;
    v[5]=15;
    v[6]=16;
    v[7]=17;
    v[8]=18;
    v[9]=19;
    
    for(i=0; i<10; i++){
		cout<<"V["<<i<<"] :"<<v[i]<<endl;
		cout<<"Endereco de 'v': "<<v<<endl;//imprime o endereço da area alocada para v
		
		delete [] v;
    }
	return 0;
}
