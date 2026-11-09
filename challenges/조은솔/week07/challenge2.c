#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(sizeof(int));
    *a = 10;
    printf("free 전 a값: %d\n", *a); 
    free(a);  
    printf("free 후 a값: %d\n", *a);                  
    printf("a주소: %p\n", (void *)a); 

    int *b = malloc(sizeof(int));  
    printf("b주소: %p\n", (void *)b);
    
    *b = 11;
    printf("b에 11 저장 후 a값: %d\n", *a); 
    *a = 7;               
    printf("a에 7 저장 후 b값: %d\n", *b);  
    
    return 0;
}

/*
    dangling pointer(해제된 메모리를 가리키는 포인터)
        - 버그가 드러나지 않아서 디버깅이 어려움 
        - 재할당으로 한 메모리를 두 포인터가 가리키는 상태 가능

    UAF 취약점과 연결:
        - 해제된 메모리를 같은 크기의 공격자 데이터로 덮어쓸 수 있음 
        - 다음에 실행할 주소를 담은 객체가 UAF 되면 다른 주소로 이동할 수 있음    
*/