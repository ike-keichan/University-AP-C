#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("構造体の例題プログラムです。\n");
    system("bash PrintThinSeparater.sh");
    example15();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
