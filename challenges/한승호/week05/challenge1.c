

#include <stdio.h>
#include <stdlib.h>


int global_data = 100;


int global_bss;

int main(void)
{

    int local_var = 100;


    int *heap_var = (int *)malloc(sizeof(int));



    char *str = "Hello Memory";


    printf("Data  address : %p\n", (void *)&global_data);
    printf("BSS   address : %p\n", (void *)&global_bss);
    printf("Stack address : %p\n", (void *)&local_var);
    printf("Heap  address : %p\n", (void *)heap_var);
    printf("Text  address : %p\n", (void *)str);

    free(heap_var);

    return 0;
}

~
~
~
~
~
~
-- INSERT --                                                                                                                   32,13         All
