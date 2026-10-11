#include <stdio.h>

void arg(int a, int b, int c, int d, int e, int f, int g, int h){
	int total = a + b + c + d + e + f + g + h;
	printf("Func Arg: %d", total);
}

int main(){
	arg(10, 20, 30, 40, 50, 60, 70, 80);
	return 0;
}
