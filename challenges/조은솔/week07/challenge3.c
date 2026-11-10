#include <stdio.h> 
#include <stdlib.h>

int main(){
    int *a = malloc(sizeof(int)); 
    *a = 10;
    printf("free() 전 값: %d\n", *a); //출력: 10
    free(a);                                   
    printf("1번째 free() 후 값: %d\n", *a); //출력: 12153312
    free(a); 

    return 0;
}

/*
    Double Free: 
    1번째 free(): 정상적으로 Mem가 해제되어 Free List에 등록됨 
    2번째 free(): 이미 해제된 상태인지 확인하지 못 하는 경우, Free List에 중복으로 등록됨 

    Heap Metadata 손상  
    1번째 Mem 할당: 중복 해제된 메모리 중 하나가 정상 할당되지만, Free List에 잔재가 남아있음
    할당받은 Mem 공간을 통해 다음 Mem를 가리키는 포인터를 공격자가 변조

    Heap Exploitation 
    2번째 Mem 할당: 공격자가 변조한 주소를 사용자에게 반환 
    해당 주소에 원하는 값을 기록해 제어권 탈취 
*/