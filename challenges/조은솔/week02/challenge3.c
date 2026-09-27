#include <stdio.h> 
#include <limits.h>  

int main()
{
    printf("%d\n", (INT_MAX) +1) ; //-2147483648
    printf("%u", (UINT_MAX)+1); //0

    return 0; 
}

/*
    signed의 오버플로우는 최솟값에서 오버된 값만큼 1씩 증가하고,  
    unsigned의 오버플로우는 0에서 오버된 값만큼 1씩 증가한다. 

    예로, signed int의 최대값에 2를 더하면 최솟값인 -2147483648에 1을 더한 -2147483647이 나오고, 
    unsigned int의 최대값에 2를 더하면 1이 나온다. 
*/
