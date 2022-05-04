#include <stdio.h>

struct Person
{
    char name[40];
    int height;
    int weight;
};

int main(void)
{
    struct Person p[3];
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        printf("%d人目の情報を入力してください．\n", i + 1);
        printf("名前：");
        scanf("%s", &p[i].name[0]);
        printf("身長：");
        scanf("%d", &p[i].height);
        printf("体重：");
        scanf("%d", &p[i].weight);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d人目の情報\n", i + 1);
        printf("名前：%s\n", &p[i].name[0]);
        printf("身長：%d m\n", p[i].height);
        printf("体重：%d kg\n", p[i].weight);
    }
}