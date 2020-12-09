#include <stdio.h>
#include <stdlib.h>

// 配列の最大長
#define MAXLEN 128

// 文字列を扱う配列
static char str[MAXLEN];

// メイン関数。
int main(void);

// ポインタによる文字列処理の例題関数。
void example10(void);

/*** p2v : pointer to void ***/
#define p2v(a_pointer) ((void*)(a_pointer))
