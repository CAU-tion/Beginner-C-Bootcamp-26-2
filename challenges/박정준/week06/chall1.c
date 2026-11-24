#include <stdio.h>

void main(){
	int ptr = 123;
	int *p;
	p = &ptr;

	printf("포인터 변수값: %d 포인터 주소값: %p\n", *p, p);

	*p = 456;

	printf("바뀐 포인터 변수값: %d, 포인터 변수의 크기: %d\n", *p, sizeof(p));

}
