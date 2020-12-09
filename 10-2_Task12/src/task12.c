/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：12/09
 */
#include "defs.h"

// 2つの正整数の最大公約数を求める関数。
void task12(void)
{
    int number1, number2, answer;

    scanf("%d", &number1);
    printf("number1 = %d, ", number1);

    scanf("%d", &number2);
    printf("number2 = %d\n", number2);

    answer = gcd(number1, number2);
    printf("gcd(%d, %d) = %d\n", number1, number2, answer);
    
    return;
}

// 最大公約数を計算する関数
int gcd(int number1, int number2)
{
    if(number1 % number2 == 0){ return number2; }
    else{ return gcd(number2, number1 % number2); }
}
