#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("階乗の例題プログラムです。\n");
    system("bash PrintThinSeparater.sh");
    example27();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
