#include <stdio.h>

int main(void)
{
    char dump;
    char x = 0;

    while (1)
    {
        printf("こんにちは\nまだやる？(y/n)");
        scanf("%c", &x);
        scanf("%c", &dump); // scanf改行コードバグ対策

        if (x == 'n')
        {
            printf("さようなら\n");
            break;
        }
    }

    return 0; // 慣例
}