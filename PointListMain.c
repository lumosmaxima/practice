#include <stdio.h>
#include <stdlib.h>
#include "Point.h"
#include "ArrayList.h"


int main(void)
{
    List list; 
    LInit(&list);
    Point * ppos;
    
    ppos=(Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 1, 2);
    LInsert(&list, ppos);

    ppos=(Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 1, 3);
    LInsert(&list, ppos);

    ppos=(Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);

    ppos=(Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 1, 2);
    LInsert(&list, ppos);

    printf("current # of data: %d\n", LCount(&list));
    puts("what points are in the List?");
    if(LFirst(&list, &ppos)){
        ShowPointPos(ppos);
        while(LNext(&list, &ppos)){
            ShowPointPos(ppos);
        }
    }

    Point compPos;      //delete points with xpos=1
    compPos.xpos=1;
    compPos.ypos=0;

    if(LFirst(&list, &ppos)){
        if(PointComp(ppos, &compPos)==1){
            ppos=LRemove(&list);
            free(ppos);
        }
        while(LNext(&list, &ppos)){
            if(PointComp(ppos, &compPos)==1){
                ppos=LRemove(&list);
                free(ppos);
            }
        }
    }

    printf("current # of data: %d\n", LCount(&list));
    puts("what points are in the List?");
    if(LFirst(&list, &ppos)){
        ShowPointPos(ppos);
        while(LNext(&list, &ppos)){
            ShowPointPos(ppos);
        }
    }

    return 0;
}