#include <stdio.h>
#include <stdlib.h>

//2진수 출력 함수 
void func(int a){
    int bits[32]; 
    int n = 0; 
    
    unsigned int k = (unsigned int) a; // 음수 처리 
    
    if (k ==0) {
        printf("2진수 값: 0\n");
        return; 
    }
    else{  
        while (k>0){
            bits[n++] = k%2; 
            k = k /2 ; 
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
    
    printf("AND 결과: %d\n", a&b); 
    func(a&b); 
    printf("OR 결과: %d\n", a|b); 
    func(a|b);
    printf("XOR 결과: %d\n", a^b);
    func(a^b);
    printf("첫 번째 정수 NOT 결과: %d\n", ~a);
    func(~a);
    printf("두 번째 정수 NOT 결과: %d\n", ~b);
    func(~b); 
    printf("left shift 결과: %d\n",  a<<b);
    func(a<<b); 
    printf("right shift 결과: %d\n", a>>b); 
    func(a>>b); 

    return 0; 
}