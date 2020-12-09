#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("文字列を格納する領域の非動的確保の例題プログラムです。\n");
    system("bash PrintThinSeparater.sh");
    example18();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
