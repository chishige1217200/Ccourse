#include <stdio.h>

int main(void)
{
    int a = 123;
    float b = 0.4567;

    printf("    a: %d\n", a);
    printf("    b: %.7f\n", b);
    printf("a + b: %.7f\n", a + b);

    return 0;
}