# Week 6

## 실행 환경
- 환경: Windows WSL (Ubuntu Linux)
- 컴파일러: GCC
- 디버거: GDB

## Challenge 1. 포인터 실습 기초

### 실습 코드
'''c
#include <stdio.h>

int main(){
    int num = 10;
    int *ptr = &num;

    printf("=== 주소와 값 확인 ===\n");
    printf("num의 주소: %p\n", (void*)&num);
    printf("num의 값: %d\n", num);
    printf("ptr의 값(주소): %p\n",(void*)ptr);
    printf("ptr이 가리키는 값: %d\n", *ptr);

    printf("\n=== 포인터를 통한 값 변경 ===\n");
    *ptr = 20;
    printf("num의 값: %d\n", num);
    printf("ptr이 가리키는 값: %d\n", *ptr);

    printf("\n=== 포인터 자체의 크기와 주소 ===\n");
    printf("sizeeof(ptr): %zu 바이트\n", sizeof(ptr));
    printf("ptr의 주소: %p\n", (void*)&ptr);

    return 0;

}
'''
### 실행 결과

![challenge 1 실행 결과](week06_challenge1.png)


### 변수 크기 추론
포인터 변수의 크기는 8바이트로 확인되었다. 일반적인 64비트 Linux 프로그램에서는 메모리 주소를 저장하는 포인터를 64비트로 표현하므로 8바이트를 차지한다. 포인터의 크기는 가리키는 int 값의 크기가 아니라 실행 환경과 컴파일 방식에 따라 결정된다.

## Challenge 2. 포인터 연산 실습



