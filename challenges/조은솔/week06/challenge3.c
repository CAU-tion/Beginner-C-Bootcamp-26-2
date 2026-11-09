#include <stdio.h>

void swap_by_value(int a, int b){
    int temp = a;
    a = b; 
    b = temp;  

    printf("(함수 안)a: %d, b: %d\n", a, b); 
}

void swap_by_reference(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 

    
    printf("(함수 안)c: %d, d: %d\n", *a, *b);
}

int main(){
    int a=3, b=5;
    printf("call by value\n"); 
    printf("호출 전 a: %d, b: %d\n", a, b);
    swap_by_value(a, b); 
    printf("호출 후 a: %d, b: %d\n", a, b);

    int c=4, d=6; 
    printf("call by reference\n");
    printf("호출 전 c: %d, d: %d\n", c, d);
    swap_by_reference(&c, &d); 
    printf("호출 후 c: %d, d: %d\n", c, d);

    return 0; 
}

/*
    call by value: 원본의 복사본을 넘겨서 복사본만 바뀜
        - 원본이 바뀌면 안 될 때, 원본을 바꿀 필요가 없을 때 사용 
    call by reference: 원본의 주소를 넘겨서 원본이 바뀜 
        - 큰 구조체나 배열을 넘길 때(주소만 넘기므로 8바이트 사용), 원본을 바꿔야 할 때 사용 
*/