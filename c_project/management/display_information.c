#include <stdio.h>
#include <stdlib.h>
#include "head.h"
void display(STU *head)
{
    int n;
    n=1;
    STU *p,*q;
    p=head;
    if(head->next==NULL)
    {
        printf("无保存数据！\n");
    }
    if(head->next!=NULL)
    {
        printf("-----------------------------------------------List----------------------------------------\n");
        printf("|  序号  |     学号   |      姓名     | 性别 |  C语言 |  C++  |  Java  |  总分  |  平均分 |\n");
        printf("------------------------------------------------------------------------------------------- \n");
    }
    q=head->next;
    while(q!=NULL)
    {
        printf("    %d     %s       %s     %c      %.2f   %.2f   %.2f  %.2f  %.2f\n",n,q->xuehao,q->name,q->sex,q->score[0],q->score[1],q->score[2],q->sum,q->ave);

        q=q->next;
        n++;
        printf("------------------------------------------------------------------------------------------\n");
    }

}
