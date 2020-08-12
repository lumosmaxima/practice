#include <stdio.h>
#include "ArrayList.h"


void LInit(List * plist)
{
    plist->numOfData=0;
    plist->curPosition=-1;
}

void LInsert(List *plist, LData data)
{
    if(plist->numOfData==LIST_LEN){
        puts("List if full! LInsert error!");
        return;
    }

    plist->arr[plist->numOfData++]=data;
}

int LFirst(List *plist, LData * pdata)
{
    if(plist->numOfData==0){
        return FALSE;
    }

    plist->curPosition=0;
    *pdata=*(plist->arr);
    return TRUE;
}

int LNext(List *plist, LData * pdata)
{
    if(plist->numOfData==0){
        return FALSE;
    }else if(plist->curPosition>=plist->numOfData-1){
        return FALSE;
    }

    plist->curPosition++;
    *pdata=plist->arr[plist->curPosition];
    return TRUE;
}

LData LRemove(List * plist)
{
    LData temp=plist->arr[plist->curPosition];
    for(int i=plist->curPosition;i<(plist->numOfData)-1;i++){
        plist->arr[i]=plist->arr[i+1];
    }

    plist->curPosition--;
    plist->numOfData--;
    return temp;
}

int LCount(List * plist)
{
    return plist->numOfData;
}