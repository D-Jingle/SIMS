#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
STU *del(STU *head)
{
     char s[15];
     printf("��������Ҫɾ����ѧ����ѧ��\n");
     getchar();
    gets(s);
     STU *p1,*p2;
    p1=head;
    if(p1==NULL)
        {printf("û��ѧ����Ϣ\n");
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
    printf("ɾ���ɹ�!\n");
    }

      else
        printf("��ѧ�Ų�����!\n");
    printf("��Ҫ������Ϣ������һ������'7'��\n");
    return head;
}
