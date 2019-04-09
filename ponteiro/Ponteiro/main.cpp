#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
int a;
int b;
int c;
int *ptr; // declara um ponteiro para um inteiro
// um ponteiro para uma variável do tipo inteiro
a = 1000;
b = 2;
c = 3;
ptr = &a;
cout << "Valor de ptr: " << ptr << " Conteúdo de ptr: "<< *ptr<<endl;
cout << "B: " << b <<endl<< "C: " << c;
}
