#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
STU *change(STU *head)
{
    STU *p;
    p=head;
    if(p==NULL)
    {
        printf("û�����ݣ��޷��޸ģ�\n");
        return head;
    }
    else
    {
        char s[15];
        printf("��������Ҫ�޸�ѧ����ѧ��\n");
        //gets(s);
         printf("������:");scanf("%s",s);
        getchar();
        int f=0;
        while(p!=NULL)
        {
            if(strcmp(s,p->xuehao)==0)
            {
                f=1;
                char c[100];
                char a;
                double b;
                printf("���ҵ�ѧ��Ϊ%s��ѧ������������Ҫ�޸ĵ�����\n");
                printf("�磺sex // score1 // score2 // score3 \n");
                 printf("������:");scanf("%s",c);
                getchar();
                while(strcmp(c,"sex")!=0&&strcmp(c,"score1")!=0&&strcmp(c,"score2")!=0&&strcmp(c,"score3")!=0)
                {
                    printf("�����ڸ����ݣ�����������\n");
                    gets(c);
                }
                if(strcmp(c,"sex")==0)
                {
                    printf("ԭ����Ϊ%c ��������Ҫ�޸ĵ����� f/m \n",p->sex);
                     printf("������:");a=getchar();
                    p->sex=a;
                    printf("����ɹ�\n");
                    getchar();
                }
                if(strcmp(c,"score1")==0)
                {
                    printf("������Ҫ�޸ĵĳɼ� \n");
                    scanf("%lf",&b);
                    getchar();
                    printf("����ɹ�\n");
                    p->score[0]=b;
                    p->sum=p->score[0]+p->score[1]+p->score[2];
                    p->ave=p->sum/3.0;
                }
                if(strcmp(c,"score2")==0)
                {
                    printf("������Ҫ�޸ĵĳɼ� \n");
                    scanf("%lf",&b);
                    getchar();
                    printf("����ɹ�\n");
                    p->score[1]=b;
                    p->sum=p->score[0]+p->score[1]+p->score[2];
                    p->ave=p->sum/3.0;
                }
                if(strcmp(c,"score3")==0)
                {
                    printf("������Ҫ�޸ĵĳɼ� \n");
                    scanf("%lf",&b);
                    getchar();
                    printf("����ɹ�\n");
                    p->score[2]=b;
                    p->sum=p->score[0]+p->score[1]+p->score[2];
                    p->ave=p->sum/3.0;
                }

            }
            p=p->next;
        }
        if(f==0)
        {
            printf("û�ҵ���ѧ��\n");
        }
    }
    printf("��Ҫ������Ϣ������һ������'7'��\n");
    return head;
}
