/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：11/25
 */
#include "defs.h"

// 指定した英語のテキストファイルの中の文字数、単語数、行数を数えて指定した ファイルに書き込む関数。
void task11(void)
{
    char in_file_name[MAX];
    char out_file_name[MAX];
    FILE *in_file_pointer;
    FILE *out_file_pointer;
    int data;
    int character_count = 0;
    int new_line_count = 0;
    int blank_count = 0;

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

    while((data = fgetc(in_file_pointer)) != EOF)
    {
        if(data == 10){ new_line_count++; };
        if(isspace(data)){ blank_count++; }
        character_count++;
    }

    fprintf(out_file_pointer, "%d lines, %d words, %d characters\n", new_line_count, blank_count, character_count);
    fclose(in_file_pointer);
    fclose(out_file_pointer);
    
    return;
}
