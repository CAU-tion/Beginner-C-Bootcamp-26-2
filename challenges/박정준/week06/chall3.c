#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("=== 1. Call by Value ===\n");
    int x1 = 10, y1 = 20;
    printf("함수 호출 전: x1 = %d, y1 = %d\n", x1, y1);
    
    swap_by_value(x1, y1);
    
    printf("함수 호출 후: x1 = %d, y1 = %d\n\n", x1, y1);

    printf("=== 2. Call by Reference ===\n");
    int x2 = 10, y2 = 20;
    printf("함수 호출 전: x2 = %d, y2 = %d\n", x2, y2);
    
    swap_by_reference(&x2, &y2);
    
    printf("함수 호출 후: x2 = %d, y2 = %d\n", x2, y2);
}
