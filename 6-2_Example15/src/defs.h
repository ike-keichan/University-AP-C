#include <stdio.h>
#include <stdlib.h>
#include <handy.h>

// windowサイズ
#define WINDOW_SIZE 600

// 点の個数の限界
#define NUM_POINTS 500 

// 線分の個数の限界
#define NUM_EDGES 1000 

// 拡大率
#define SCALE 150.0

// 点を表す構造体。
typedef struct point
{
    double x, y, z;
} point_t;

// 線分を表す構造体。
typedef struct edge 
{
    int src, dst;
} edge_t;

// メイン関数。
int main(void);

// 構造体の例題関数。
void example15(void);
