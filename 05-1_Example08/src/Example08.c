#include "defs.h"

// ポインタ配列の例題関数。
void example08(void)
{
    int array[5] ={1, 2, 3, 4, 5};
    printf("&array[0] = %p\n", p2v(&array[0]));
    printf("array = %p\n", p2v(array));
    printf("array[0] = %d\n", array[0]);
    printf("*array = %d\n", *array);
    printf("array[2] = %d\n", array[2]);
    printf("*(array + 2) = %d\n", *(array + 2));
    printf("*(2 + array) = %d\n", *(2 + array));
    printf("2[array] = %d\n", 2[array]);

    return;
}
