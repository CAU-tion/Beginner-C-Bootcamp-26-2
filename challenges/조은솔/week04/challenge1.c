#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//프로그램 배너 출력 
void print_banner(){
    printf(" 시저 암호 인코더/디코더 \n"); 
}

//문자열을 shift만큼 밀어서 암호화 
void encode (char *str, int shift){
    shift %= 26;
    if (shift < 0) { shift += 26; }  

    for (int i = 0; str[i] != '\0'; i ++) {
        int c = str[i]; //현재 글자 

        if (c >= 'a' && c <= 'z'){ // 소문자일 때 
            c = c + shift; 
            if (c > 'z') {  c = c -26; }
        }

        else if (c >= 'A' && c <= 'Z'){ // 대문자일 때 
            c = c + shift;
            if (c > 'Z') { c = c - 26; }
        }

        str[i] = c; 
    }
}

//shift값 입력받아 반환 
int get_shift(){
    int shift, input; 
    printf("shift 값을 입력하세요: ");
    while((input = scanf("%d", &shift))!= 1) {
        if (input == EOF){
           exit(1); 
        }
        while(getchar() != '\n'); //잘못 입력된 문자 지우기 
        printf("정수를 입력하세요: "); 
    }
    return shift; 
}


int main (){
    print_banner();

    char str[100];
    printf("문장을 입력하세요: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0'; // 개행 제거 

    int shift = get_shift(); 
    encode(str, shift);
    printf("암호문: %s\n", str); 
    
    return 0;
}


/*
    함수를 쓰는 이유
    : 특정 작업을 하는 코드를 하나로 묶은 것으로 같은 코드를 여러 번 쓰지 않고 호출하면 돼서 
      유지보수에 용이하고 가독성이 좋다. 
      같은 작업이 반복될 때, 코드별 역할이 명확하게 나뉠 때 유용하다.  
*/