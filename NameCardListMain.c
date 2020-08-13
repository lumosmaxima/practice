#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

void ShowNameCard(List * plist); //show all namecard in List

int main(void)
{
    List list;
    LInit(&list);

    NameCard * nc;
    char phone[PHONE_LEN];
    nc=MakeNameCard("a", "1");
    LInsert(&list, nc);

    nc=MakeNameCard("b", "2");
    LInsert(&list, nc);

    nc=MakeNameCard("c", "3");
    LInsert(&list, nc);

    ShowNameCard(&list);

    //print namecard with name="c"
    if(LFirst(&list, &nc)){
        if(NameCompare(nc, "c")==0) ShowNameCardInfo(nc);
        while(LNext(&list, &nc)){
            if(NameCompare(nc, "c")==0) ShowNameCardInfo(nc);
        }
    }

    //change namecard with name="c"
    if(LFirst(&list, &nc)){
        if(NameCompare(nc, "c")==0){
            printf("current phoneNun: %s ...\n", nc->phone);
            printf("new phoneNum: ");
            scanf("%s", phone);
            ChangePhoneNum(nc, phone);

        }
        while(LNext(&list, &nc)){
            if(NameCompare(nc, "c")==0){
                printf("current phoneNun: %s ...\n", nc->phone);
                printf("new phoneNum: ");
                scanf("%s", phone);
                ChangePhoneNum(nc, phone);
            }
        }
    }

    ShowNameCard(&list);

    //discard namecard with name="b"
    if(LFirst(&list, &nc)){
        if(NameCompare(nc, "b")==0) LRemove(&list);
        while(LNext(&list, &nc)){
            if(NameCompare(nc, "b")==0){
                LRemove(&list);
                free(nc);
            }
        }
    }

    ShowNameCard(&list);
    return 0;
}

void ShowNameCard(List* plist){
    NameCard *nc;
    if(LFirst(plist, &nc)){
        ShowNameCardInfo(nc);
        while(LNext(plist, &nc)){
            ShowNameCardInfo(nc);
        }
    }
}