#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
	int x, y, *p;
	y = 0;	
	p = &y;
	x = *p; //x = 0
	x = 4; //x = 4
	(*p)++; //*p = 1
	--x; //x = 3
	(*p) += x; //*p = y = 4
	
	cout << "Valor de X: " << x << "\n Valor de  Y: " << y << "\n *p: " << *p;
	return 0;
}
