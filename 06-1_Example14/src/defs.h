#include <stdio.h>
#include <stdlib.h>

// 点を定義する構造体。
struct point
{
    double x, y, z;
};

// メイン関数。
int main(void);

// 構造体の例題関数。
void example14(void);

// 点の座標の入力を行う関数。
struct point readPoint(void);

// 点の座標を表示する関数。
void printPoint(struct point);

// ベクトル和を求める関数。
struct point addVector(struct point, struct point);
