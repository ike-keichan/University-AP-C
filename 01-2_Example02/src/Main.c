#include "defs.h"

// メインプログラム、適当な入力を与える。
int main(void)
{
    // サンプル入力
    int sample_input[4] = {5, 10, 15, 20};
    printf("1から入力値まで数列an、bnの値を表示するプログラムです。\n");
    printf("ak = ak−1 + 2k − 1\n");
    printf("bk = bk−1 + 3k(k−1) + 1\n");

    for(int index = 0; index < 4; index ++){
        system("bash PrintSeparater.sh");
        printf("n=%dとして実行します。\n", sample_input[index]);
        example02(sample_input[index]);
    }
    system("bash PrintSeparater.sh");

    return EXIT_SUCCESS;
}
