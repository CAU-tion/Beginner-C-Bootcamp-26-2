#include <stdio.h>

void main(){
	int f = 0, w = 0, dw = 0, i = 1;
	
	for(int c = 1; c <= 10; c++){
		f = f + c;
	}

	while(i <= 10){
		w = w + i;
		i++;
	}
	
	i = 1;

	do{
		dw = dw + i;
		i++;
	}while(i <= 10);

	printf("%d %d %d\n", f, w, dw);
}
