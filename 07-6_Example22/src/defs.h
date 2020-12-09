#include <stdio.h>
#include <stdlib.h>

// 配列の要素数
#define Number 3

// メイン関数。
int main(void);

// 構造体の配列の例題関数。
void example22(void);

// 名前と点数を保持する構造体
struct record
{
    char *name;
    int score;
    int padding; // 構造体のサイズを整えるための変数
};
