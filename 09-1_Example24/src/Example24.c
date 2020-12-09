#include "defs.h"

// ファイルに含まれる文字数を数える例題関数。
void example24(void)
{
    char file_name[MAX];
    FILE *file_pointer;
    int count = 0;

    printf("入力ファイル名 = ");
    scanf("%s", file_name);

    file_pointer = fopen(file_name, "r");
    if(file_pointer == NULL)
    {
        printf("ファイル「%s」が開けない\n", file_name);
        return;
    }

    while(fgetc(file_pointer) != EOF)
    {
        count++;
    }

    fclose(file_pointer);
    printf("「%s」の中身は%d 文字です\n", file_name, count);
    
    return;
}
