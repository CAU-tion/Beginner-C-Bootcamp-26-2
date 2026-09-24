# Week 2

## Challenge 1. 자료형 크기 확인하기

### 실습 내용

`sizeof` 연산자로 C의 기본 자료형이 차지하는 메모리 크기를 확인하고, 정수형의 `signed`와 `unsigned` 크기를 비교했다.

### 실행 환경 및 방법

- 환경: Windows WSL (Linux)
- 컴파일러: GCC

```bash
#include <stdio.h>
#include <stdbool.h>

int main(void){
    printf("=== 기본 자료형 크기 (byte) ===\n");
    printf("char        : %zu\n", sizeof(char));
    printf("short       : %zu\n", sizeof(short));
    printf("int         : %zu\n", sizeof(int));
    printf("long        : %zu\n", sizeof(long));
    printf("long long   : %zu\n", sizeof(long long));
    printf("float       : %zu\n", sizeof(float));
    printf("double      : %zu\n", sizeof(double));
    printf("long double : %zu\n", sizeof(long double));
    printf("bool        : %zu\n", sizeof(bool));

    printf("\n=== signed / unsigned 크기 비교 (byte) ===\n");
    printf("signed char      : %zu / unsigned char      : %zu\n",
           sizeof(signed char), sizeof(unsigned char));
    printf("signed short     : %zu / unsigned short     : %zu\n",
           sizeof(signed short), sizeof(unsigned short));
    printf("signed int       : %zu / unsigned int       : %zu\n",
           sizeof(signed int), sizeof(unsigned int));
    printf("signed long      : %zu / unsigned long      : %zu\n",
           sizeof(signed long), sizeof(unsigned long));
    printf("signed long long : %zu / unsigned long long : %zu\n",
           sizeof(signed long long), sizeof(unsigned long long));

    return 0;
}
```

### 실행 결과
![Challenge 1 실행 결과](week02_challenge1.png)
크기 단위는 byte이다.


### 결과 분석

자료형의 크기는 C 언어에서 모두 고정되어 있지 않으며, 사용하는 시스템과 컴파일러에 따라 달라질 수 있다. 이번 결과는 WSL의 Linux 환경에서 GCC로 컴파일해 확인한 값이다.

같은 정수형에서 `signed`와 `unsigned`의 크기는 같았다. 두 자료형은 사용하는 메모리 크기보다 **표현할 수 있는 값의 범위**에서 차이가 난다. `signed`는 음수와 양수를 표현하고, `unsigned`는 0 이상의 값만 표현한다.

## Challenge 2. 비트 연산 프로그램 작성


## Challenge 3. Integer Overflow 실험


## Challenge 4. Format String 맛보기
