/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/28 -> 11/11
 */
#include "defs.h"

// ポインタによる文字列処理の例題関数。
void task07()
{
    char *pta, *ptb;
    int count = 1;
    bool check_flag = false;

    printf("文字列1を入力して下さい\n");
    scanf("%s", stra);
    printf("文字列2を入力して下さい\n");
    scanf("%s", strb);

    printf("String1 :%s\n",stra);
    printf("String2 :%s\n",strb);

    pta = stra;
    ptb = strb;

    while(*pta != '\0')
    {
        while(*ptb != '\0')
        {
            if(*ptb != *pta){ break; }
            pta++;
            ptb++;
        }

        if(*ptb == '\0'){ check_flag = true; break; }
        count++;
        pta++;
    }

    count = check_flag ? count : 0;
    printf("Count of match? :%d\n", count);

    return;
}
