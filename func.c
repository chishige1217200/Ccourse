#include <stdio.h>

int main(void)
{
    char dump; // scanf改行コードバグ対策
    int a = 0;
    float b = 0;
    char c = 0;
    char d[1024] = "";

    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%c", &dump); // scanf改行コードバグ対策
    scanf("%c", &c);
    scanf("%s", d);

    printf("a: %d\n", a);
    printf("b: %f\n", b);
    printf("c: %c\n", c);
    printf("d: %s\n", d);

    return 0;
}