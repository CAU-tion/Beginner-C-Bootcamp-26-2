#include <stdio.h>


void ifFunc(int input){
    if (input>0) {printf("양수");}
    else if (input<0) {printf("음수");}
    else {printf("0");}
}

void switchFunc(int input) {
    switch(input){
        case 0: {
            printf("0");
            break;
        }
        default: {
            printf(input>0 ? "양수" : "음수");
            break; 
        }
    
    }
}

void ternaryOpFunc(int input){
    const char *output = (input>0) ? "양수" : (input<0) ? "음수" : "0";
    printf("%s", output); 
}

int main (){

    int input; 
    scanf("%d", &input); 

    ifFunc(input);        printf("\n"); 
    switchFunc(input);    printf("\n"); 
    ternaryOpFunc(input); printf("\n"); 

    return 0; 
}