/**
 * 氏名：池田 敬祐
 * 学生証番号：g1744069
 * 提出日：11/18
 */
#include "defs.h"

point_t points[NUM_POINTS]; // 点を格納する配列
edge_t edges[NUM_EDGE]; // 枝を格納する配列
int number, end;

point_t rotateX(point_t point, double radian)
{
    point_t new;
    new.x = point.x;
    new.y = cos(radian)*point.y - sin(radian)*point.z;
    new.z = sin(radian)*point.y + cos(radian)*point.z;
    return new;
}

point_t rotateY(point_t point, double radian)
{
    point_t new;
    new.y = point.y;
    new.z = cos(radian)*point.z - sin(radian)*point.x;
    new.x = sin(radian)*point.z + cos(radian)*point.x;
    return new;
}

point_t rotateZ(point_t point, double radian)
{
    point_t new;
    new.z = point.z;
    new.x = cos(radian)*point.x - sin(radian)*point.y;
    new.y = sin(radian)*point.x + cos(radian)*point.y;
    return new;
}

point_t moveX(point_t point, double move_point)
{
    point_t new;
    new.x = point.x + move_point;
    new.y = point.y;
    new.z = point.z;
    return new;
}

point_t moveY(point_t point, double move_point)
{
    point_t new;
    new.y = point.y + move_point;
    new.x = point.x;
    new.z = point.z;
    return new;
}

void drawPolygon(int lid)
{
    double sx, sy, dx, dy;
    for(int index = 0; index < end; index++)
    {
        sx = points[edges[index].src].x;
        sy = points[edges[index].src].y;
        dx = points[edges[index].dst].x;
        dy = points[edges[index].dst].y;
        HgWLine(lid, sx, sy, dx, dy);
    }
}

// 複数の線分をx,y,z軸に回転させる関数。
void task08(void)
{
    point_t new;
    double accelX = 0, accelY = 0, angleX = 0, angleY = 0, angleZ = 0;
    doubleLayer layers;
    hgevent *event;
    int lid;
    scanf("%d%d", &number, &end);

    // 各点の座標を point_t 型配列 points に格納
    for(int index = 0; index < number; index++)
    {
        scanf("%lf%lf%lf", &points[index].x, &points[index].y, &points[index].z);
    }

    // 各枝の両端点の点番号を edge_t 型配列 edges に格納
    for(int index = 0; index < end; index++)
    {
        scanf("%d%d", &edges[index].src, &edges[index].dst);
    }


    HgOpen(WINDOW_SIZE, WINDOW_SIZE);
    layers = HgWAddDoubleLayer(0);
    HgSetEventMask( HG_KEY_DOWN | HG_TIMER_FIRE);
    HgCoordinate(WINDOW_SIZE/2, WINDOW_SIZE/2, SCALE);
    HgSetIntervalTimer(1.0/FRAME_RATE);

    // 描画ループ
    while(1){
        event = HgEvent();
        switch(event->type)
        {
            case HG_KEY_DOWN:
                switch(event->ch)
                {
                    case 'x':
                        angleX -= ROT_CHANGE; break;
                    case 'X': 
                        angleX += ROT_CHANGE; break;
                    case 'y': 
                        angleY -= ROT_CHANGE; break;
                    case 'Y':
                        angleY += ROT_CHANGE; break;
                    case 'z':
                        angleZ -= ROT_CHANGE; break;
                    case 'Z':
                        angleZ += ROT_CHANGE; break;
                    case HG_R_ARROW:
                        accelX += ROT_CHANGE; break;
                    case HG_L_ARROW:
                        accelX -= ROT_CHANGE; break;
                    case HG_U_ARROW:
                        accelY += ROT_CHANGE; break;
                    case HG_D_ARROW:
                        accelY -= ROT_CHANGE; break;
                }
                if(event->ch == 'q' || event->ch == 'Q'){ break; }

            case HG_TIMER_FIRE:
                lid = HgLSwitch(&layers);
                HgLClear(lid);
                for(int index = 0; index < number; index++)
                {
                    new = rotateX(points[index], angleX);
                    new = rotateY(new, angleY);
                    new = rotateZ(new, angleZ);
                    new = moveX(new, accelX);
                    new = moveY(new, accelY);
                    points[index] = new;
                }
                drawPolygon(lid);
        }
        // 押されたキーが q または Q なら描画ループを抜ける
        if(event-> ch == 'q' || event->ch == 'Q') break;
    }

    HgGetChar();
    HgClose();

    return;
}
