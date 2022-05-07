#include <stdio.h>

int main(void)
{
    int a = 1024;
    int *p;

    p = &a; // pに変数aのアドレスを格納する

    printf("&a: %p\n", &a);
    printf(" a: %d\n\n", a);

    // pの値を表示する
    printf(" p: %p\n", p); // &aに同じ
    // pの中に入っている数値が指しているアドレスの値を表示する
    printf("*p: %d\n", *p); // aに同じ
    // pがどのアドレスに配置されているのかを表示する
    printf("&p: %p\n", &p);

    return 0; // 慣例
}