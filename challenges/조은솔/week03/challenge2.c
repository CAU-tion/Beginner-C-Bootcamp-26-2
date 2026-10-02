#include <stdio.h>

int main(){
    //for문 
    int a = 0 ; 
    for (int i =1; i < 11; i ++){
        a += i ;
    }
    printf("for문: %d\n", a);
    
    //while문 
    int i = 1, b = 0 ; 
    while(i < 11){
        b += i++; 
    }
    printf("while문: %d\n", b);
    
    //do-while문 
    int k = 1, c = 0; 
    do{
        c += k++;
    } while (k<11);
    printf("do-while문: %d\n", c);

    return 0; 
}

/*
    1. 코드 상의 차이점 
     for문은 초기화, 조건, 증감을 한 줄에 모아서 쓴다. 
     while문은 조건만 괄호 안에, 초기화는 반복문 앞에, 증감은 반복문 안에 쓴다. 
     do-while문은 반복문을 먼저 실행하고 조건을 나중에 검사하므로 최소 1번은 무조건 실행된다. 

    2. 언제 쓰는 게 적합한가 
     for문: 반복 횟수가 정해져 있을 때 
     while문: 조건이 정해져 있을 때(ex. 파일 끝까지 읽기)
     do-while문: 조건과 상관없이 최소 1번은 실행해야 할 때 
*/