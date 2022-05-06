#include <stdio.h>

int main(void)
{
    char hello[13] = {72, 101, 108, 108, 111, 44, 0, 87, 111, 114, 108, 100, 0};

    printf("%s\n", hello);

    // "Hello, World."と表示できるように配列helloを編集
    hello[6] = 32;

    printf("%s\n", hello);

    return 0; // 慣例
}