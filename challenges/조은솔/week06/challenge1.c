#include <stdio.h>

int main(){
    int a = 0;
    int *p = &a; 
    printf("변수 a의 주소: %p\n", (void *)p);
    printf("변경 전 변수 a의 값: %d\n", *p); 

    *p = 10; // 원본 변수의 값 변경 
    printf("변경 후 변수 a의 값: %d\n", *p); 

    printf("포인터 변수의 크기: %zu 바이트\n", sizeof(p));
    printf("포인터 변수의 주소: %p\n", (void *)&p); 

    return 0; 
}

/*
    64비트 시스템에서 주소를 표현하는데 8바이트를 쓰기 때문에 
    주소를 담는 포인터 변수의 크기도 8바이트이다. 
*/