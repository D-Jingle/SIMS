#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
void search(STU *head)
{
    STU *p;
    p=head;
    if(p==NULL)
    {
        printf("�ļ�����ѧ����Ϣ������Ӻ󱣴����ļ���\n");
        return head;
    }
    else
    {
        printf("�������Ҫ��ѯѧ����ѧ�Ż���������ѧ���밴1���������밴2\n");
        int n;
        scanf("%d",&n);
        getchar();
        while(n!=1&&n!=2)
        {
            printf("�������,����������,��ѧ���밴1,�������밴2\n");
            scanf("%d",&n);
            getchar();
        }

        if(n==1)
        {
            printf("������ѧ��\n");
            char s[100];
            int flag=0;
            scanf("%s",&s);
            while(p!=NULL)
            {
                if(strcmp(s,p->xuehao)==0)
                {
                    printf("%s ",p->xuehao);
                    printf("%s ",p->name);
                    printf("%c ",p->sex);
                    printf("C���� %.2f�� C++ %.2f�� Java %.2f ",p->score[0],p->score[1],p->score[2]);
                    printf("�ܳɼ� %.2f�� ƽ���� %.2f��\n",p->sum,p->ave);
                    flag=1;
                }
                p=p->next;
            }
            if(flag==0)
            {
                printf("�����ڴ�ѧ��\n");
            }
        }
        else
        {
            printf("����������\n");
            char s1[100];
            scanf("%s",&s1);
            int f=0;
            while(p!=NULL)
            {
                if(strcmp(s1,p->name)==0)
                {
                    printf("%s ",p->xuehao);
                    printf("%s ",p->name);
                    printf("%c ",p->sex);
                    printf("C���� %.2f�� C++ %.2f�� Java %.2f ",p->score[0],p->score[1],p->score[2]);
                    printf("�ܳɼ�%.2lf ƽ����%.2lf\n",p->sum,p->ave);
                    f=1;
                }
                p=p->next;
            }
            if(f==0)
            {
                printf("�����ڴ�ѧ��\n");
            }
        }


    }
}
