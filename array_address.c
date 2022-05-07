#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};

    printf("    a:%p\n", a);
    printf("&a[0]:%p\n", &a[0]);
    printf(" a[0]:%d\n", a[0]);
    printf("&a[1]:%p\n", &a[1]);

    return 0; // 慣例
}