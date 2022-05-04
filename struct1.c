#include <stdio.h>

int main(void)
{
    char name[3][40];
    int height[3];
    int weight[3];
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        printf("%d人目の情報を入力してください．\n", i + 1);
        printf("名前：");
        scanf("%s", &name[i][0]);
        printf("身長：");
        scanf("%d", &height[i]);
        printf("体重：");
        scanf("%d", &weight[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d人目の情報\n", i + 1);
        printf("名前：%s\n", &name[i][0]);
        printf("身長：%d m\n", height[i]);
        printf("体重：%d kg\n", weight[i]);
    }
}