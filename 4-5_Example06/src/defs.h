#include <stdio.h>
#include <stdlib.h>

// メイン関数。
int main(void);

// ポインタの例題関数。
void example06(void);

// 変数の値を入れ替える関数。
void swap(int, int);

/*** p2v : pointer to void ***/
#define p2v(a_pointer) ((void*)(a_pointer))