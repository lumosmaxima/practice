#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point
{
    int xpos;
    int ypos;
} Point;

void SetPointPos(Point * ppos, int x, int y);
void ShowPointPos(Point *ppos);
int PointComp(Point * pos1, Point* pos2);/*
 all same -> 0
 x same, y diff ->1
 x diff, y same ->2
 all diff->-1
*/

#endif