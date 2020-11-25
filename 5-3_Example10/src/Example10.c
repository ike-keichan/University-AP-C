#include "defs.h"

// ポインタによる文字列処理の例題関数。
void example10(void)
{
    int i = 0;

    str[i++] = 'H';
    str[i++] = 'e';
    str[i++] = 'l';
    str[i++] = 'l';
    str[i++] = 'o';
    str[i++] = '\n';
    str[i++] = '\0';
    str[i++] = 'x';
    printf("%s",str);

    return;
}
