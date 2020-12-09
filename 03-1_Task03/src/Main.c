/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/9
 */
#include "defs.h"

// メインプログラム、サンプル入力を与える。
int main(void)
{
    count = 0;
    printf("n次方程式の近似解を二分法で求めるプログラムです。\n");

    system("bash PrintThinSeparater.sh");
    input();
    range_err();
    system("bash PrintThinSeparater.sh");
    output(bisection());
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
