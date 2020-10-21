/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：10/21
 */
#include "defs.h"

// ポインタを用いて加算する関数。
void task04(int x, int y)
{
    //px,py,pzが指している場所に格納している値
    int *px, *py, *pz;

    //pxにxのアドレスを格納
    px = &x;

    //pyにyのアドレスを格納
    py = &y;

    //pxとpyが指している場所に格納している値の和をzに格納
    int z = *px + *py;

    //pzにzのアドレスを格納
    pz = &z;

    printf(" x = %d\n", x);
    printf(" y = %d\n", y);
    printf(" z = %d\n", z);

    printf(" px = %p\n", p2v(px));
    printf(" py = %p\n", p2v(py));
    printf(" pz = %p\n", p2v(pz));

    return;
}
