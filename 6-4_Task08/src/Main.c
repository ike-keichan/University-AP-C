/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：11/18
 */
#include "defs.h"

// メイン関数。
int main(void)
{
    system("bash PrintBoldSeparater.sh");
    printf("複数の線分をx,y,z軸に回転させるプログラムです。\n");
    printf("キー入力 x, X, y, Y, z, Z で対応する軸周りの回転速度を変更（大文字で 加算、小文字で減算）\n");
    printf("キー入力 →, ← で x 軸方向の加速と減速、キー入力 ↑, ↓で y 軸方向の加速と減速\n");
    system("bash PrintThinSeparater.sh");
    task08();
    system("bash PrintBoldSeparater.sh");

    return EXIT_SUCCESS;
}
