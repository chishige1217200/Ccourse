#include <stdio.h>

void print_string(char *p)
{
    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
}

int main(void)
{
    char hello[13] = "Hello, World.";

    printf("%s\n", hello);

    print_string(hello);
    print_string("\n");

    return 0; // 慣例
}