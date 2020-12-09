/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/7 -> 10/21
 */
#include "defs.h"

// メインプログラム、サンプル入力を与える。
int main(void)
{
    printf("xに関するn次多項式f(x)=c0xn+c1xn−1+···+cn−1x+cnの値をa≤x≤bの範囲で刻み幅step毎に求めるプログラムです。\n");

    system("bash PrintThinSeparater.sh");
    input();
    range();
    system("bash PrintThinSeparater.sh");
    calc();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
