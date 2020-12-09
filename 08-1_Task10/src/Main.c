#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("リスト構造を扱うプログラムです。\n");
    system("bash PrintThinSeparater.sh");
    task10();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
