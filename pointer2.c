#include <stdio.h>

int main(void)
{
    int a = 1024;
    int *p;

    printf(" p: %p\n\n", p);

    p = &a;    // pに変数aのアドレスを格納する
    *p = 1025; // pの指し先のアドレスの中身を1025にする a = 1025に同義

    printf("&a: %p\n", p);
    printf(" a: %d\n\n", *p);

    return 0; // 慣例
}