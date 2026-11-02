#include <stdio.h>
#include <stdlib.h>

int itn1 = 5;
int itn2;

void main(){
	int loc;
	char *mal = (char *)malloc(100);
	const char *str = "Hello World";

	printf("==주소값==\n");
	printf("초기화된 전역변수: %p\n", &itn1);
	printf("초기화 안된 전역변수: %p\n", &itn2);
	printf("지역변수: %p\n", &loc);
	printf("동적 할당 변수: %p\n", mal);
	printf("문자열: %p\n", str);

	free(mal);
}
