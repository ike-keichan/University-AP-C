#include "defs.h"

// ポインタによる文字列処理の例題関数。
void example11()
{
    char *pt;
    int  length;

    scanf("%s",str);
    pt = str;
    length = 0;

    while(*pt++ != '\0')
    {
        length++;
        printf("「%s」の長さ = %d\n", str, length);
    }

    return;
}
