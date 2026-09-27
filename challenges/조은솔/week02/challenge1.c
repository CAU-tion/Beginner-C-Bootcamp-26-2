#include <stdio.h> 
#include <stdlib.h>

int main(){
    printf("char: %d\n", sizeof(char)); //1
    printf("short: %d\n", sizeof(short)); //2
    printf("int: %d\n", sizeof(int)); //4
    printf("long: %d\n", sizeof(long)); //4
    printf("long long: %d\n", sizeof(long long)); //8
    printf("float: %d\n", sizeof(float)); //4
    printf("double: %d\n", sizeof(double)); //8

    printf("signed short: %d\n", (signed short) -1); //-1
    printf("unsigned short: %u\n", (unsigned short) -1); //65535

    return 0; 
}

/*
    signed 는 양수와 음수 모두 표현 가능하고, unsigned 는 양수만 표현 가능하다. 
    예로 unsigned short 의 경우, 표현 가능한 범위가 0~65535로 -1을 표현할 수 없기 때문에 오버플로우로 65535 이 출력된다.    
*/