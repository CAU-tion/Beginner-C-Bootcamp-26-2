#include <stdio.h>

void main(){
	int arr[3] = {10, 20, 30};
	int *ptr = arr;

	for(int i = 0; i < 3; i++){
		printf("결과 출력-배열 arr[%d]: %d, 포인터: %d\n", i, arr[i], *(ptr+i));
	}
	

	printf("포인터 위치 확인: ptr: %p\n", ptr);
	printf("포인터 위치 확인: ptr-1: %p\n", ptr-1);
	printf("포인터 위치 확인: ptr+1: %p\n", ptr+1);

}
