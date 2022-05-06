#include <stdio.h>

int main(void) // This code won't work correctly.
{
    int a[5] = {1, 2, 3, 4, 5};
    int i = 0;

    for (i = 0; i <= 5; i++)
        printf("%d  ", a[i]);

    printf("\n");

    return 0; // 慣例
}