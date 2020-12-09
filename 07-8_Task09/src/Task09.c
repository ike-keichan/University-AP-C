/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：11/11 -> 11/25
 */
#include "defs.h"

// 記憶領域の動的割り当てを行う関数。
void task09(void)
{
    char buff[MAXLEN+1];
    struct record **sp;
    int number = 0;

    sp = (struct record **)malloc(sizeof(struct record *) *(unsigned long)number);

    if (sp == NULL)
    {
        error("Cannot allocate memory for structure");
    }

    printf("人数を入力してください。\n");
    scanf("%d", &number);

    for(int index = 0; index < number; index++)
    {
        sp[index] = (struct record *)malloc(sizeof(struct record));

        if (sp[index] == NULL)
        {
            error("Cannot allocate memory for structure");
        }
    }

    for(int index = 0; index < number; index++)
    {
        printf("%d人目の名前を入力してください。\n", index + 1);
        scanf("%s", buff);
        sp[index] -> name = (char *)malloc(sizeof(char)*(strlen(buff)+1));

        if (sp[index] -> name == NULL)
        {
            error("Cannot allocate memory for name");
        }

        strcpy(sp[index] -> name, buff);
        printf("%sの点数を入力してください。\n", sp[index] -> name);
        scanf("%d", &sp[index] -> score);
    }

    for(int index = 0; index < number; index++)
    {
        printf("%10sの得点 | %d\n", sp[index] -> name, sp[index] -> score);
    }

    printf("-------------------------\n");   
    output_average_and_max_and_min(sp, number);
    
    return;
}

// 平均点、最高点、最低点を求め出力する関数。
void output_average_and_max_and_min(struct record **sp, int number)
{
    int max = 0, min = 100, sum = 0;
    char *max_getter = 0, *min_getter = 0;

    for(int index = 0; index < number; index++)
    {
        if(sp[index] -> score >= max)
        {
            max = sp[index] -> score;
            max_getter = sp[index] -> name;
        }

        if(sp[index] -> score <= min)
        {
            min = sp[index] -> score;
            min_getter = sp[index] -> name;
        }

        sum += sp[index] -> score;
    }

    printf("平均点 | %d\n", sum / number);
    printf("最高点 | %d（%s）\n", max, max_getter);
    printf("最低点 | %d（%s）\n", min, min_getter);

    return;
}

// エラーを出力する関数。
void error(char *str)
{
    printf("Error: %s\n", str);

    return;
}
