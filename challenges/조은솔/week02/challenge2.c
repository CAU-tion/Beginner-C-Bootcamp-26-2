#include <stdio.h>
#include <stdlib.h>

//2진수 출력 함수 
void func(int a){
    int bits[32]; 
    int n = 0; 
    
    if (a ==0) {
        printf("2진수 값: 0\n");
        return; 
    }
    else{  
        while (a>0){
        bits[n++] = a%2; 
        a = a /2 ; 
        }
        printf("2진수 값: ");
        for (int i = n-1 ; i >=0 ; i --){
            printf("%d", bits[i]); 
       }
       printf("\n"); 
    }
}

int main (){
    int a, b; 
    printf("첫 번째 정수를 입력하세요:"); scanf("%d", &a); 
    printf("두 번째 정수를 입력하세요:"); scanf("%d", &b);  
    
    printf("%d&%d = %d\n", a, b, a&b); 
    func(a&b); 
    printf("%d|%d = %d\n", a, b, a|b); 
    func(a|b);
    printf("%d<<%d = %d\n", a, b, a<<b);
    func(a<<b); 
    printf("%d>>%d = %d\n", a, b, a>>b); 
    func(a>>b); 

    return 0; 
}