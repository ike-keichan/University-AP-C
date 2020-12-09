#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("動的確保の例題プログラムです。\n");
    system("bash PrintThinSeparater.sh");
    example23();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
