/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/21
 */
#include "defs.h"

// サンプル入力を与えるメイン関数。
int main(void)
{
     // サンプル入力
    int sample_input1[4] = {1, 3, 5, 7};
    int sample_input2[4] = {2, 6, 10, 14};

    system("bash PrintBoldSeparater.sh");
    printf("ポインタを使ってx+y=zを行うプログラムです。\n");
        
    for(int index = 0; index < 4; index ++){
        system("bash PrintThinSeparater.sh");
        printf("x=%d,y=%dとして実行します。\n", sample_input1[index], sample_input2[index]);
        task04(sample_input1[index], sample_input2[index]);
    }
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
