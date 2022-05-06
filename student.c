#include <stdio.h>

struct Student
{
    char name[40];
    int ident_num;
};

int main(void)
{
    struct Student s[2];
    int i = 0;

    for (i = 0; i < 2; i++)
    {
        printf("%d人目の氏名を入力してください．\n", i + 1);
        scanf("%s", s[i].name);
        printf("%d人目の学籍番号を入力してください．\n", i + 1);
        scanf("%d", &s[i].ident_num);
    }

    for (i = 0; i < 2; i++)
    {
        printf("%d人目の氏名: %s\n", i + 1, s[i].name);
        printf("%d人目の学籍番号: %d\n", i + 1, s[i].ident_num);
    }

    return 0; // 慣例
}