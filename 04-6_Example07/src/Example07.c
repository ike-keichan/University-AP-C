#include "defs.h"

// ポインタの例題関数。
void example07(void)
{
    int a = 2;
    int b = 5;
    printf("main1: a=%d, b=%d\n", a, b);
    swap2(&a, &b);
    printf("main2: a=%d, b=%d\n", a, b);

    return;
}

// 変数の値を入れ替える関数。
void swap2(int *px, int *py)
{
    int tmp;
    printf("swap1: *px=%d, *py=%d\n", *px, *py);
    tmp = *px;
    *px = *py;
    *py = tmp;
    printf("swap2: *px=%d, *py=%d\n", *px, *py);

    return;
}
