#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
STU *del(STU *head)
{
     char s[15];
     printf("请输入需要删除的学生的学号\n");
     getchar();
    gets(s);
     STU *p1,*p2;
    p1=head;
    if(p1==NULL)
        {printf("没有学生信息\n");
        return NULL;
        }
    while((strcmp(s,p1->xuehao)!=0)&&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if((strcmp(s,p1->xuehao)==0))
    {
           if(p1==head)
            head=p1->next;
        else
            p2->next=p1->next;
        free(p1);
    printf("删除成功!\n");
    }

      else
        printf("该学号不存在!\n");
    printf("若要保存信息，请下一步进行'7'。\n");
    return head;
}
