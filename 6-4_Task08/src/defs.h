/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：11/18
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <handy.h>

// windowサイズ
#define WINDOW_SIZE 600

// 点の個数の限界
#define NUM_POINTS 500 

// 線分の個数の限界
#define NUM_EDGE (NUM_POINTS * (NUM_POINTS - 1) / 2) 

// 拡大率
#define SCALE 150.0

// 回転速度の変化幅
#define ROT_CHANGE 0.01

// フレーム数/秒
#define FRAME_RATE 30.0

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

// 複数の線分をx,y,z軸に回転させる関数。
void task08(void);

void drawPolygon(int);

point_t rotateZ(point_t, double);


