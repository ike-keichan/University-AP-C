#include "defs.h"

// ポインタの例題関数。
void example04(void)
{
    printf("[A] &i_val = %p\n", p2v(&i_val));
    printf("[B] &i_ptr = %p\n", p2v(&i_ptr));
    printf("[C] sizeof(i_val) = %zd\n", sizeof(i_val)); 
    printf("[D] sizeof(i_ptr) = %zd\n", sizeof(i_ptr));

    i_ptr = &i_val;
    *i_ptr = 2;
    printf("[E] i_val = %d\n", i_val);
    printf("[F] *i_ptr = %d\n", *i_ptr);
    printf("[G] i_ptr = %p\n", p2v(i_ptr));
    printf("[H] *&i_val = %d\n", *&i_val);

    i_val = 5; 
    printf("[I] i_val = %d\n", i_val);
    printf("[J] *i_ptr = %d\n", *i_ptr);
    printf("[K] i_ptr = %p\n", p2v(i_ptr));
    printf("[L] *&i_val = %d\n", *&i_val);

    return;
}
