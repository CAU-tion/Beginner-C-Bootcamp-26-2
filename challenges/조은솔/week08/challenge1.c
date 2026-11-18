#include <stdio.h>
#include <stdlib.h> 

typedef struct node {
    int data; 
    struct node* next_ptr; 
} node;


int append(node **head, int data){
    node *new_node = (node *)malloc(sizeof(node)); 
    if (new_node == NULL){
        return -1; 
    }
    new_node->data = data; 
    new_node->next_ptr = NULL; 

    if (*head == NULL){
        *head = new_node;
        return 0;
    }

    node *current = *head; 
    while (current->next_ptr != NULL) {
        current = current->next_ptr;
    }
    current->next_ptr = new_node; 
    return 0;
}

int delete(node **head, int data ){
    node *current = *head; 
    node *prev = NULL; 
    while (current != NULL && current->data != data){
        prev = current;
        current = current->next_ptr; 
    }

    if (current == NULL){ // 못 찾음 
        return 0; 
    }
    if (prev == NULL){ //첫 노드 삭제
        *head = current->next_ptr; 
    }
    else {
        prev->next_ptr = current->next_ptr;  
    }
    free(current); 
    return 1; 
}
void print(node *head){
    node *current = head; 
    while (current != NULL){
        printf("%d -> ", current->data);
        current = current->next_ptr; 
    }
    printf("null \n"); 
}

int main(){
    node *head = NULL; 
    printf("노드 5개 추가 후 전체 출력\n");
    for (int i = 0; i < 5; i ++){
        append(&head, i*5);
    }
    print(head); 

    printf("중간 노드 1개 삭제 후 전체 출력\n");
    delete(&head, 10); 
    print(head); 
    
    printf("모든 노드 해제 후 전체 출력\n");
    node *current = head; 
    while (current != NULL){
        node *next = current->next_ptr; 
        free(current); 
        current = next; 
    }
    head = NULL; 
    print(head); 

    return 0; 
}