/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/28 -> 11/11
 */
#include "defs.h"

// ポインタによる文字列処理の例題関数。
void task06()
{
    char *pta, *ptb, *check_result;
    bool check_flag = true;

    printf("文字列1を入力して下さい\n");
    scanf("%s", stra);
    printf("文字列2を入力して下さい\n");
    scanf("%s", strb);

    printf("String1 :%s\n",stra);
    printf("String2 :%s\n",strb);

    pta = stra;
    ptb = strb;

    while(*pta != '\0' || *ptb != '\0')
    {
        if(*ptb == *pta){ check_flag = true; }
        else{ check_flag = false; break; }
        pta++;
        ptb++;
    }

    check_result = (check_flag == true) ? "yes" : "no";
    printf("All Match? :%s\n", check_result);

    return;
}
