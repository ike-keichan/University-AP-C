#include <stdio.h>
#include <stdlib.h>

// メイン関数。
int main(void);

// 構造体へのポインタの例題関数。
void example21(void);

// 名前と点数を保持する構造体
struct record
{
    char *name;
    int score;
    int padding; // 構造体のサイズを整えるための変数
};
