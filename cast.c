#include <stdio.h>

int main(void)
{
    float a = 65.13;
    int b = (int)a;
    char c = (char)b;

    printf("a: %f\n", a);
    printf("b: %d\n", b);
    printf("c: %c\n", c);

    return 0;
}