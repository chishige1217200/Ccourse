#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10] = "Hello.";
    char b[10] = "";

    strcpy(b, a);

    printf("%s\n", b);

    return 0;
}