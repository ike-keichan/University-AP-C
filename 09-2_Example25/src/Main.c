#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("ファイルのコピーを行う例題プログラムです。\n");
    system("bash PrintThinSeparater.sh");
    example25();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
