#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 文字列の最大長
#define  MAXLEN 255

// メイン関数。
int main(void);

// 動的確保の例題関数。
void example23(void);

// エラーを出力する関数。
void error(char *);

// 名前と点数を保持する構造体
struct record
{
    char *name;
    int score;
    int padding; // 構造体のサイズを整えるための変数
};
