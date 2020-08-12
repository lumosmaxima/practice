#ifndef __ARRAYLIST_H__
#define __ARRAYLIST_H__

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100

#include "Point.h"
typedef Point* LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} Arraylist;

typedef Arraylist List;

void LInit(List * plist);   // initialize list
void LInsert(List *plist, LData data);  // insert data into list

int LFirst(List *plist, LData * pdata);
int LNext(List *plist, LData * pdata);

LData LRemove(List * plist);    //remove the recent data read by LNext or LFirst
int LCount(List * plist);

#endif