#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
STU *ascending_name(STU *h,STU *p)
{

    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(strcmp(p1->name,p->name)<0&&p1->next!=NULL)/*��������������*/
    {
        p2=p1;
        p1=p1->next;
    }
    if(strcmp(p1->name,p->name)>=0)
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}
STU *descending_name(STU *h,STU *p)/*��������������*/
{


    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(  strcmp(p1->name,p->name)>0 &&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(  strcmp(p1->name,p->name)<=0 )
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}
STU *ascending_xuehao(STU *h,STU *p)/*��ѧ����������*/
{

    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(  strcmp(p1->xuehao,p->xuehao)<0 &&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(  strcmp(p1->xuehao,p->xuehao)>=0 )
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}
STU *descending_xuehao(STU *h,STU *p)/*��ѧ�Ž�������*/
{


    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(  strcmp(p1->xuehao,p->xuehao)>0 &&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(  strcmp(p1->xuehao,p->xuehao)<=0 )
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}
STU *ascending_sex(STU *h,STU *p)/*���Ա���������*/
{

    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(  p1->sex<p->sex &&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(  p1->sex>=p->sex )
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}
STU *descending_sex(STU *h,STU *p)/*���Ա�������*/
{


    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(  p1->sex>p->sex &&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(  p1->sex<=p->sex )
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}
STU *ascending_score(STU *h,STU *p)/*���ɼ���������*/
{

    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(p1->sum<p->sum&&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(  p1->sum>=p->sum )
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}
STU *descending_score(STU *h,STU *p)/*���ɼ���������*/
{


    STU *p1,*p2;
    p1=h;

    if(p1==NULL)
    {
        h=p;
        return h;
    }
    while(p1->sum>p->sum&&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(p1->sum<=p->sum)
        if(p1==h)
        {
            p->next=p1;
            h=p;
        }
        else
        {
            p->next=p1;
            p2->next=p;
        }
    else
        p1->next=p;

    return h;
}


STU *sort(STU *head)
{

    int i;
    if(head==NULL)
        return head;
    printf("������Ҫ��������ͣ��磺name descending\n");
    printf("���������У�xuehao,name,sex,sum\n��ʽ�У�ascending��descending\n");
    printf("�����룺");
    char s[100],c[100];
    scanf("%s",s);
    getchar();
    while((strcmp(s,"name")!=0)&&(strcmp(s,"xuehao")!=0)&&(strcmp(s,"sex")!=0)&&(strcmp(s,"sum")!=0))
    {
        printf("\n\t�����������������\n\n");
        //printf("��ʾԭ����\n");
        scanf("%s",s);
    }
    scanf("%s",c);
    getchar();
            printf("\n");
    STU *q1,*q2;
    q1=head;

    STU *newhead=NULL;
    if(strcmp(s,"name")==0)
    {
        if(strcmp(c,"ascending")==0)
        {
            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;
                newhead=ascending_name(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }
        if(strcmp(c,"descending")==0)
        {

            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;

                newhead=descending_name(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }

    }

    if(strcmp(s,"xuehao")==0)
    {
        if(strcmp(c,"ascending")==0)
        {

            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;
                newhead=ascending_xuehao(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }
        if(strcmp(c,"descending")==0)
        {

            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;
                newhead=descending_xuehao(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }
    }
    if(strcmp(s,"sex")==0)
    {
        if(strcmp(c,"ascending")==0)
        {
            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;
                newhead=ascending_sex(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }
        if(strcmp(c,"descending")==0)
        {

            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;
                newhead=descending_xuehao(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }

    }
    if(strcmp(s,"sum")==0)
    {
        if(strcmp(c,"ascending")==0)
        {

            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;
                newhead=ascending_score(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }
        if(strcmp(c,"descending")==0)
        {

            while(q1!=NULL)
            {
                q2=(STU *)malloc(sizeof(STU));
                strcpy(q2->xuehao,q1->xuehao);
                strcpy(q2->name,q1->name);
                q2->sex=q1->sex;
                q2->score[0]=q1->score[0];
                q2->score[1]=q1->score[1];
                q2->score[2]=q1->score[2];
                q2->sum=q1->sum;
                q2->ave=q1->ave;
                q2->next=NULL;
                newhead=descending_score(newhead,q2);

                q1=q1->next;
            }
            return newhead;
        }
    }
}
