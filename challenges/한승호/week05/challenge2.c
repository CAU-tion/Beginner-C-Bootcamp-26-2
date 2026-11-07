
#include <stdio.h>

void secret()
{
    printf("secret function called!\n");
}

void vuln()
{
    char buf[16];

    printf("Input: ");
    fgets(buf, sizeof(buf), stdin);

    printf("You entered: %s\n", buf);
}

int main()
{
    vuln();
    return 0;
}

# strcpy(), strcat(), sprintf(), scanf()는 취약 16바이트 이상 입력시 중간에 끊겨서 출력                                                                                                                 24,1          All
