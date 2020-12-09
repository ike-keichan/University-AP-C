#include "defs.h"

// 1から入力値まで数列an、bnの値を求める関数
// ak = ak−1 + 2k − 1
// bk = bk−1 + 3k(k−1) + 1
void example02(int n)
{
    int k; //数列のインデックス番号。
    int ak = 0, bk = 0; //数列の値。

    // ヘッダを表示
    printf("           k|         a_k|         b_k|\n");
    printf("------------|------------|------------|\n");

    // 結果の表示
    for(k = 1; k <= n; k++){
        ak = ak + 2*k - 1;
        bk = bk + 3*k*(k-1) + 1;
        printf("%12d|%12d|%12d|\n", k, ak, bk);
    }

    return;
}
