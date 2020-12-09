/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：9/25 -> 10/10
 */
#include "defs.h"

// メインプログラム、サンプル入力を与える。
int main(void)
{
    // サンプル入力
    int sample_input[4] = {5, 10, 15, 20};
    printf("1からnまで各値の「1からの総和」と「階乗」を表示するプログラムです。\n");

    for(int index = 0; index < 4; index ++){
        system("bash PrintSeparater.sh");
        printf("n=%dとして実行します。\n", sample_input[index]);
        task01(sample_input[index]);
    }
    system("bash PrintSeparater.sh");

    return EXIT_SUCCESS;
}

