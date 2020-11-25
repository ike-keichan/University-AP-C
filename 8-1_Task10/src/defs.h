#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 文字列の最大長
#define MAXLEN 128

// 名前と点数を保持する構造体
typedef struct record
{
    struct record *next;
    char *name;
    int score;
    char padding[4];
} element;

// メイン関数。
int main(void);

// リスト構造を扱う関数。
void task10(void);

// リストに要素を追加する関数
void comm_add(void);

// リストの大きさを出力する関数
void comm_count(void);

// リストの要素を削除する関数
void comm_delete(void);

// リストの要素を列挙する関数
void comm_list(void);

// リストの要素を検索する関数
void comm_seach(void);

// エラーを出力する関数。
void error(char *);
