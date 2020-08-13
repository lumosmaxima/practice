#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char * phone)
{
    NameCard* namecard=(NameCard *)malloc(sizeof(NameCard));
    strcpy(namecard->name, name);
    strcpy(namecard->phone, phone);
    return namecard;
}

void ShowNameCardInfo(NameCard * pcard)
{
    printf("Name: %s\nPhone: %s\n\n", pcard->name, pcard->phone);
}

int NameCompare(NameCard * pcard, char * name)      //이름이 같으면 0, 다르면 1
{
    if(strcmp(pcard->name, name)!=0) return 1;
    return 0;
}

void ChangePhoneNum(NameCard* pcard, char * phone)
{
    strcpy(pcard->phone, phone);
}