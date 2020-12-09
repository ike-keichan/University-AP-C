#include "defs.h"

// ポインタの例題関数。
void example06(void)
{
    int a = 2;
    int b = 5;
    printf("main1: a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("main2: a=%d, b=%d\n", a, b);

    return;
}

// 変数の値を入れ替える関数。
void swap(int x, int y)
{
    int tmp;
    printf("swap1: x=%d, y=%d\n", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("swap2: x=%d, y=%d\n", x, y);

    return;
}
