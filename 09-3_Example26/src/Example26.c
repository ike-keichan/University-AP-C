#include "defs.h"

// 書式付入出力の例題関数。
void example26(void)
{
    char in_file_name[MAX];
    char out_file_name[MAX];
    FILE *in_file_pointer;
    FILE *out_file_pointer;
    int data;
    int count;
    int sum;

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

    count = sum = 0;

    while(fscanf(in_file_pointer, "%d", &data) != EOF)
    {
        sum += data;
        count++;
    }

    fprintf(out_file_pointer, "%d\n%d\n", count, sum);

    fclose(in_file_pointer);
    fclose(out_file_pointer);
    
    return;
}
