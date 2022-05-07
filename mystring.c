#include <stdio.h>

struct String
{
    char str[1024];
};

struct String make_aaa(struct String temp)
{
    int i = 0;
    for (i = 0; i < 5; i++)
        temp.str[i] = 'a';

    return temp;
}

int main(void)
{
    struct String a = {"Hello, World."};

    a = make_aaa(a);

    printf("%s\n", a.str);

    return 0;
}