#include <stdio.h>
#include "Point.h"

void SetPointPos(Point * ppos, int x, int y)
{
    ppos->xpos=x;
    ppos->ypos=y;
}

void ShowPointPos(Point *ppos)
{
    printf("[%d, %d]\n", ppos->xpos, ppos->ypos);
}

int PointComp(Point * pos1, Point* pos2)
{
    if(pos1->xpos==pos2->xpos){
        if(pos1->ypos==pos2->ypos) return 0;
        else return 1;
    }else if(pos1->ypos==pos2->ypos) return 2;
    return -1;
}