#include <stdio.h>
#include <stdlib.h>

// int 型の変数 i_val
static int i_val;

// int 型へのポインタ i_ptr 
static int *i_ptr;

// メイン関数。
int main(void);

// ポインタの例題関数。
void example04(void);

/*** p2v : pointer to void ***/
#define p2v(a_pointer) ((void*)(a_pointer))
