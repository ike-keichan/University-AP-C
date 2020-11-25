#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("書式付入出力の例題プログラムです。\n");
    system("bash PrintThinSeparater.sh");
    example26();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
