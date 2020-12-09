/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：12/09
 */
#include "defs.h"

// ハノイの塔を実行する関数。
void task13(void)
{
    int number;

    printf("円盤の枚数 =");
    scanf("%d", &number);
    
    hanoi(number, 1, 3);

    return;
}

// ハノイの塔を計算する関数
void hanoi(int k, int from, int to)
{
    int other = 6 - (from + to);

    if(k == 1)
    {
        printf("棒%dから棒%dへ移動\n", from, to);
    }
    else
    {
        hanoi(k - 1, from, other);
        hanoi(1, from, to);
        hanoi(k-1, other, to);
    }
    
    return;
}
