/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：9/25 -> 10/10
 */
#include "defs.h"

// 1から入力値まで各値の「1からの総和」と「階乗」を表示する関数
void task01(int n)
{
    int k_sum[100]; //1からの総和の値を代入する配列
    int k_factorial[100]; //階乗の値を代入する配列

    //それぞれの配列（計算表）を構築する。
    for(int index = 0; index < n; index++){
        if(index == 0){ 
            k_sum[0] = 1; 
            k_factorial[0] = 1; 
        }else {
            k_sum[index] = k_sum[index-1] + (index+1);
            k_factorial[index] = k_factorial[index-1] * (index+1);
        }
    }

    //ヘッダを表示。
    printf("           k|        ksum|          k!|\n");
    printf("------------|------------|------------|\n");

    //構築した配列（計算表）を表示する。
    for(int k = 1; k <= n; k++){
        printf("%12d|%12d|%12d|\n", k, k_sum[k-1], k_factorial[k-1]);
    }

    return;
}

