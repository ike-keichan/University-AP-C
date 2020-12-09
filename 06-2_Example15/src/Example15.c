#include "defs.h"

// 構造体の例題関数。
void example15(void)
{
    int number, end;
    point_t points[NUM_POINTS];
    edge_t edges[NUM_EDGES];

    scanf("%d%d", &number, &end);

    for(int index = 0; index < number; index++)
    {
        scanf("%lf%lf%lf", &points[index].x, &points[index].y, &points[index].z);
    }

    for(int index = 0; index < end; index++)
    {
        scanf("%d%d", &edges[index].src, &edges[index].dst);
    }

    HgOpen(WINDOW_SIZE, WINDOW_SIZE);
    HgCoordinate(WINDOW_SIZE/2, WINDOW_SIZE/2, SCALE);

    int src, dst;              
    double sx, sy, dx, dy;     
    for(int index = 0; index < end; index++){
        src = edges[index].src;
        sx = points[src].x;
        sy = points[src].y;
        dst = edges[index].dst;
        dx = points[dst].x;
        dy = points[dst].y;
        HgLine(sx,sy,dx, dy);
    }

    HgGetChar();
    HgClose();

    return;
}
