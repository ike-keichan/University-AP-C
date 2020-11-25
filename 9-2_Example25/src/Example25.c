#include "defs.h"

// ファイルのコピーを行う例題関数。
void example25(void)
{
    char in_file_name[MAX];
    char out_file_name[MAX];
    FILE *in_file_pointer;
    FILE *out_file_pointer;
    int letter;

    printf("入力ファイル名 = ");
    scanf("%s", in_file_name);
    in_file_pointer = fopen(in_file_name, "r");
    if(in_file_pointer == NULL)
    {
        printf("ファイル「%s」が開けない\n", in_file_name);
        return;
    }

    printf("出力ファイル名 = ");
    scanf("%s", out_file_name);
    out_file_pointer = fopen(out_file_name, "w");
    if(out_file_pointer == NULL)
    {
        printf("ファイル「%s」が開けない\n", out_file_name);
        fclose(in_file_pointer);
        return;
    }


    while((letter = fgetc(in_file_pointer)) != EOF)
    {
        fputc(letter, out_file_pointer);
    }

    fclose(in_file_pointer);
    fclose(out_file_pointer);
    
    return;
}
