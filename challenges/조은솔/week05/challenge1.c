#include <stdio.h> 
#include <stdlib.h>

int a = 1; // Data 영역
int b ;    // BSS 영역 

int main(){
    int c = 1; // Stack 영역 
    int *d = malloc(sizeof(int)); //Heap 영역 
    const char *e = "hello"; // Text/Code 영역 


    printf("%p\n", (void *)&a); 
    printf("%p\n", (void *)&b); 
    printf("%p\n", (void *)&c); 
    printf("%p\n", (void *)d); 
    printf("%p\n", (void *)e);
    free(d); 

    return 0; 
}