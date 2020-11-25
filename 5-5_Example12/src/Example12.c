#include "defs.h"

// ポインタによる文字列処理の例題関数。
void example12()
{
    char *pta, *ptb;
    printf("文字列を入力して下さい\n");
    scanf("%s", stra);

    pta = stra;
    ptb = strb;

    while(*pta != '\0')
    {
        *ptb++ = *pta++;
    }

    *ptb = '\0';
    printf("Input :%s\n",stra);
    printf("Copy :%s\n",strb);

    return;
}
