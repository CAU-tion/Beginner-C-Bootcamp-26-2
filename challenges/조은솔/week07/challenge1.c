#include <stdio.h> 
#include <stdlib.h>

int data = 1; //주소 참고용 

int main(){
    int stack = 1; //주소 참고용 

    int *a = malloc(sizeof(int));
        if (a == NULL) { return 1; }
    int *arr = malloc(sizeof(int)*5); 
        if (arr == NULL) { free(a); return 1; }

    *a = 10;
    printf("*a: %d\n", *a); 

    for (int i = 0; i < 5; i ++){
        *(arr+i) = i;
        printf("arr[%d]: %d ", i, *(arr + i));
    }
    printf("\n"); 

    printf("Stack 영역: %p\n", (void *)&stack);
    printf("Heap 영역(a): %p\n", (void *)a);
    printf("Heap 영역(arr): %p\n", (void *)arr); 
    printf("Data 영역: %p\n", (void *)&data); 

    free(a); 
    free(arr); 
    //free()하지 않으면 해제되지 않은 Mem가 누적되어 시스템 자원이 고갈되고 
    //강제 종료나 프로그램 성능 저하를 일으킴 
    return 0;
}