#include <stdio.h>
#include <stdlib.h>
#include "head.h"
STU *creat(int n)
{
    STU *h=NULL,*p1,*p2;
    int i=1;
    while(i<=n)
    {
        p1=(STU *)malloc(sizeof(STU));
        if(p1==NULL)
           break;
        scanf("%d",&p1->num);
        fflush(stdin);
        gets(p1->name);
        scanf("%f%f%f",&p1->score[0],&p1->score[1],&p1->score[2]);
        p1->ave=(p1->score[0]+p1->score[1]+p1->score[2])/3.0;
        p1->next=NULL;
        if(i==1)
            h=p1;
        else
            p2->next=p1;
        p2=p1;
        i++;
    }
    return h;
}
