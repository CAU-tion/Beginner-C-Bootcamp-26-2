#include <stdio.h>

int main(){
    int arr[4] = {0, 1, 2, 3};
    int *p = arr; //포인터 선언 

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i ++){  //sizeof(arr)/sizeof(arr[0]) = 4 = 배열 길이 
        printf("(포인터 사용) 배열의 %d번째 원소: %d\n", i+1, *(p+i));
        printf("(배열 사용)배열의 %d번째 원소: %d\n", i+1, arr[i]);
        printf("\n"); 
    }

    printf("변경 전 포인터가 가리키는 주소: %p\n", (void *)p); 
    p += 1;  
    printf("증가 후 포인터가 가리키는 주소: %p\n", (void *)p);
    p -= 2; 
    printf("감소 후 포인터가 가리키는 주소: %p\n", (void *)p); 

    return 0; 
}

/*
    배열 이름은 대부분 첫 원소의 주소(&arr[0])이기 때문에  
    arr[i] = *(arr+i) = *(p+i) = p[i] 이다. 
*/