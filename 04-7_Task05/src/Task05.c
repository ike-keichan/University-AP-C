/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/21
 */
#include "defs.h"

// ポインタを使って値を格納する関数。
void task05(int sample_input1, int sample_input2)
{
    int a, b;
    input1 = sample_input1;
    input2 = sample_input2;
    input(&a, &b);

    printf("a=%d, b=%d\n", a, b);

    return;
}

//入力を行う関数
void input(int *pa, int *pb)
{
    *pa = input1;
    *pb = input2;

    return;
}
