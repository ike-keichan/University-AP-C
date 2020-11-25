#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("ファイルに含まれる文字数を数える例題プログラムです。\n");
    system("bash PrintThinSeparater.sh");
    example24();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
