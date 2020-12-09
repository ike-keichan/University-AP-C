#include "defs.h"

// 文字列を格納する領域の動的確保の例題関数。
void example19(void)
{
    char buff[MAXLEN+1];
    char *string1, *string2;

    scanf("%s", buff);
    string1 = (char *)malloc(sizeof(char)*(strlen(buff)+1));

    if(string1 == NULL)
    {
        printf("string1: 文字列を格納する領域が確保できない\n");
        return;
    }

    strcpy(string1, buff);
    printf("string1 = %s\n", string1);
    
    scanf("%s", buff);
    string2 = (char *)malloc(sizeof(char)*(strlen(buff)+1));
    
    if(string2 == NULL)
    {
        printf("string2: 文字列を格納する領域が確保できない\n");
        return;
    }
    
    strcpy(string2, buff);
    printf("string1 = %s\n", string1);
    printf("string2 = %s\n", string2);

    return;
}
