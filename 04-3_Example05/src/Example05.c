#include "defs.h"

// ポインタの例題関数。
void example05(int n)
{
    int *pt;
    pt = &n;
    printf("*pt = %d\n", *pt);
    printf(" n = %d\n", n);

    return;
}
