#include "defs.h"

// 点の座標の入力を行う関数。
struct point readPoint(void)
{
    struct point point;
    scanf("%lf%lf%lf", &point.x, &point.y, &point.z);
    return point;
}

// 点の座標を表示する関数。
void printPoint(struct point point)
{
    printf("x=%lf, y=%lf, z=%lf\n", point.x, point.y, point.z);

    return;
}

// ベクトル和を求める関数。
struct point addVector(struct point point1, struct point point2)
{
    struct point result;
    result.x = point1.x + point2.x;
    result.y = point1.y + point2.y;
    result.z = point1.z + point2.z;
    
    return result;
}

// 構造体の例題関数。
void example14(void)
{
    struct point point1, point2, point3;
    point1 = readPoint();
    point2 = readPoint();
    point3 = addVector(point1, point2);
    printPoint(point3);

    return;
}
