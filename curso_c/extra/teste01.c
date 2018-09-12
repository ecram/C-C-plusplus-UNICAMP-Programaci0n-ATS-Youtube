#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int func(){
	double x=1111;
}
int teste(){
	int x=0;
	x++;
	printf("%i\n",x);
	return x;
}
int main(){
	func();
	teste();
	func();
	teste();
	func();
	teste();
	return 0;
}












