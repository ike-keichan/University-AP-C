/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：11/11 -> 11/25
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 文字列の最大長
#define  MAXLEN 255

// 名前と点数を保持する構造体
struct record
{
    char *name;
    int score;
    int padding; // 構造体のサイズを整えるための変数
};

// メイン関数。
int main(void);

// 記憶領域の動的割り当てを行う関数。
void task09(void);

// 平均点、最高点、最低点を求め出力する関数。
void output_average_and_max_and_min(struct record **sp, int);

// エラーを出力する関数。
void error(char *);
