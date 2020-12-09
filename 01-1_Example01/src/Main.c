#include "defs.h"

// メインプログラム、適当な入力を与える。
int main(void)
{
    // サンプル入力
    int sample_input[4] = {5, 10, 15, 20};
    printf("1から入力値まで各値の２乗〜６乗を表示するプログラムです。\n");

    for(int index = 0; index < 4; index ++){
        system("bash PrintSeparater.sh");
        printf("n=%dとして実行します。\n", sample_input[index]);
        example01(sample_input[index]);
    }
    system("bash PrintSeparater.sh");

    return EXIT_SUCCESS;
}
