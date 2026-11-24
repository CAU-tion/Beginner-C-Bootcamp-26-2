#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *arr = (int*)malloc(5*sizeof(int));

	if(arr == NULL){
		return 1;
	}

	free(arr);
	free(arr);

	arr = NULL;

	return 0;	
}
