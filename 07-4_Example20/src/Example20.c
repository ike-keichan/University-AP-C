#include "defs.h"

// 構造体の例題関数。
void example20(void)
{
    struct record vs1, vs2; 
    vs1.name = "Yamada";
    vs1.score = 95;
    
    printf("vs1: %s’s score is %d\n", vs1.name, vs1.score);
    
    vs2 = vs1;
    printf("vs2: %s’s score is %d\n", vs2.name, vs2.score);

    return;
}
