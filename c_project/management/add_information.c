#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "head.h"
STU *add(STU *head)
{
    STU *z;
    z=head->next;
    int f=0;
    STU *q1,*q2;

    int flag=0;
    while(f==0)
    {

        printf("请输入学生信息:学号，姓名，性别（f/m），3门功课成绩\n");
        printf("如：");
        printf("2016224408 daijing f 100 100 100 \n");
        printf("请输入：\n");


        q1=(STU *)malloc(sizeof(STU));

        while(flag==0)
        {
            flag=1;
            scanf("%s",q1->xuehao);
            getchar();

            z=head->next;

            while(z!=NULL&&strcmp(z->xuehao,q1->xuehao))
            {

                z=z->next;
            }
            if(z!=NULL)
            {
                printf("学号重复！请重新输入学号：\n");
                flag=0;
            }


        }




        scanf("%s",q1->name);
        getchar();
        q1->sex=getchar();
        while(q1->sex!='f'&&q1->sex!='m')
        {
            printf("性别输入错误，请重新输入！");
            getchar();
            q1->sex=getchar();
        }

        scanf("%f%f%f",&q1->score[0],&q1->score[1],&q1->score[2]);
        getchar();
        q1->sum=q1->score[0]+q1->score[1]+q1->score[2];
        q1->ave=q1->sum/3.0;
        q1->next=NULL;

        printf("\n");
        f=1;

    }


    if(head==NULL)
        head=q1;
    else
        {
            q2=head;
            while(q2->next!=NULL)
            {
                q2=q2->next;
            }
            q2->next=q1;
        }
    printf("您输入的信息如下：\n");
    printf("学号 %s ",q1->xuehao);
    printf("姓名 %s ",q1->name);
    printf("性别 %c ",q1->sex);
    printf("C语言 %.2f分 C++ %.2f分 Java %.2f ",q1->score[0],q1->score[1],q1->score[2]);
    printf("总成绩 %.2f分 平均分 %.2f分\n",q1->sum,q1->ave);
    printf("若要保存信息，请下一步进行'7'。\n");
    return head;
}
