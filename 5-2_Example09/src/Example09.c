#include "defs.h"

// ポインタ配列の例題関数。
void example09(void)
{
    int i_array[3];
    int *i_ptr;
    int i;
    i_ptr = i_array; 

    for(i=0; i<3; i++)
    {
        *i_ptr = i; i_ptr++;
    }

    for(i=0; i<3; i++)
    {
        printf("i_array[%d] = %d\n", i, i_array[i]);
    }

    return;
}
