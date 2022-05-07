#include <stdio.h>

int main(void)
{
    int mydt = 1234;

    printf("mydt = %d\n", mydt);
    printf("mydtのアドレス = %p\n", &mydt);
    printf("mydtのバイト数 = %ld\n", sizeof(mydt));

    return 0; // 慣例
}