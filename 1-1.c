#include <stdio.h>

int main(void)
{
    float a = (120 * 3 + 200 * 2) * (1 + 0.08); // ここを計算式に置き換え
    printf("%lf\n", a);                         // aを画面に表示

    return 0; // 慣例
}
