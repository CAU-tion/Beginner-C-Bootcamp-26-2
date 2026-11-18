#include <stdio.h> 
#include <stdlib.h>

typedef struct stack{
    int data; 
    struct stack *next_ptr; 
} stack;

static stack *top = NULL; 
static int size = 0; 

int push(int data){
    stack *node = (stack*)malloc(sizeof(stack));
    if (node == NULL) {
        return -1; 
    }
    node -> data = data;
    node -> next_ptr = top;
    top = node; 
    size++; 
    return 0; 
}

int pop(){
    if (top == NULL){
        return -1; 
    }
    stack *old_top = top; 
    int data = old_top->data; 
    top = old_top->next_ptr;
    
    free(old_top);
    size--;
    return data; 
}

int peek(){
    if (top == NULL){
        return -1; 
    }
    return top->data; 
}

void print_stack(){
    printf("(top) ");
    if (top == NULL){
        return;
    }
    for (stack *current = top; current != NULL; current = current->next_ptr){
        printf("%d ", current->data); 
    }
    printf("\n스택 size: %d\n", size); 
}

int main(){
    printf("push(1), push(2), push(3) 후 전체 출력\n");
    push(1); push(2); push(3); 
    print_stack(); 

    printf("pop() 두 번 후 전체 출력\n");
    pop(); pop(); 
    print_stack(); 

    printf("빈 스택에서 pop()했을 때 처리 확인\n"); 
    pop(); //스택 비움 
    printf("%d를 돌려 받았고, 프로그램은 계속 실행됨\n", pop()); 

    while(top != NULL){ //전체 해제 
        stack *node = top->next_ptr;
        free(top);
        top = node; 
    }
    size = 0; 

    return 0; 
}