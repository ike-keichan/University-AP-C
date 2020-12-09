#include "defs.h"

// 構造体へのポインタの例題関数。
void example21(void)
{
    struct record vs;
    struct record *sp;

    sp = &vs;
    sp -> name = "Yamada";
    sp -> score = 95;
    
    printf("vs: %s's score is %d\n", vs.name, vs.score);
    
    return;
}
