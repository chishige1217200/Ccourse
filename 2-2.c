#include <stdio.h>

int main(void)
{
    float pi = 3.14;
    float r = 5;

    printf("半径を入力してください．\n");
    scanf("%f", &r);

    float area = r * r * pi;
    float circumference = r * 2 * pi;

    printf("area: %f\n", area);
    printf("circumference: %f\n", circumference);

    return 0; // 慣例
}