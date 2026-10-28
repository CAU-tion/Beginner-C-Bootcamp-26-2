#include <stdio.h>

void secret() {
    printf("secret function called!\n");
}

void vuln(){
    char buf[16];
    gets(buf);
}

int main() {
    vuln();
    return 0; 
}

/* gets() 외 취약 함수:
    strcpy(): 대상 버퍼 크기를 무시하고 복사 
    sprintf(): 출력 길이 제한 없음 
    scanf("%s", ): 폭 지정 없으면 입력 제한 없음 
*/