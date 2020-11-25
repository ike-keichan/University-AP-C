#include "defs.h"

// 構造体の配列の例題関数。
void example22(void)
{
    struct record vsa[Number];
    
    vsa[0].name = "Yamada";
    vsa[1].name = "Fujiwara";
    vsa[2].name = "Tanaka";

    for(int index = 0; index < Number; index++)
    {
        scanf("%d", &vsa[index].score);
        printf("%sの得点： %d\n", vsa[index].name, vsa[index].score);
    }

    for(int index = 0; index < Number; index++)
    {
        scanf("%d", &vsa[index].score);
        printf("Record %d: %s’s score is %d\n", index, vsa[index].name, vsa[index].score);
    }
    
    return;
}
