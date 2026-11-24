#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *arr = (int*)malloc(5*sizeof(int));

	if(arr == NULL){
		return 1;
	}

	for(int i = 0; i < 5; i++){
		arr[i] = (i + 1) * 10;
		printf("저장된 값: %d\n", arr[i]);
		printf("주소값: %p\n", &arr[i]);
	}
	
	free(arr);
	arr = NULL;

	return 0;	
}
