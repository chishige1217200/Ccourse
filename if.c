#include <stdio.h>

int main(void)
{
    int num = 0;
    int dis = 0;

    scanf("%d", &num);

    if (num <= 100)
    {
        printf("100以下です\n");
        dis = 100 - num;
        printf("100まであと%d\n", dis);
    }
    printf("%d\n", num);

    return 0;
}