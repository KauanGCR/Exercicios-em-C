// A saída deve ser:
// 100
// 100
// ??? -> endereço de memória

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;
    *ptr = *ptr * x;
    printf("%d \n", *ptr);
    printf("%d \n", x);
    printf("%d \n", ptr);

    return 0;
}
