#include <stdio.h>

int main(void)
{
    int year = 2022;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("閏年\n");
            else
                printf("平年\n");
        }
        else
            printf("閏年\n");
    }
    else
        printf("平年\n");

    return 0; // 慣例
}