#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *arr = (int*)malloc(5*sizeof(int));
	int *p = arr;

	if(arr == NULL){
		return 1;
	}

	for(int i = 0; i < 5; i++){
		arr[i] = (i + 1) * 10;
		printf("저장된 값: %d\n", arr[i]);
		printf("주소값: %p\n", &arr[i]);
	}
	
	free(arr);
	
	*p = 10;

	printf("해체 후 포인터 주소: %p, 포인터 값: %d\n", (void *)p, *p);

	return 0;	
}
