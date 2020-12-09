#include "defs.h"

// 文字列を格納する領域の非動的確保の例題関数。
void example18(void)
{
    char buff[MAXLEN+1];
    char *string1, *string2;

    scanf("%s", buff);
    string1 = buff;
    printf("string1 = %s\n", string1);
    
    scanf("%s", buff);
    string2 = buff;
    printf("string1 = %s\n", string1);
    printf("string2 = %s\n", string2);

    return;
}
