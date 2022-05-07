#include <stdio.h>

int mystrlen(char *p)
{
    int counter = 0;

    while (*p != '\0')
    {
        counter++;
        p++;
    }

    return counter;
}

int main(void)
{
    char a[100] = "MYSTRLEN";

    printf("len: %d\n", mystrlen(a));

    return 0; // 慣例
}