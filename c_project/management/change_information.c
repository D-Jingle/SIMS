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
        printf("没有数据，无法修改！\n");
        return head;
    }
    else
    {
        char s[15];
        printf("请输入需要修改学生的学号\n");
        //gets(s);
         printf("请输入:");scanf("%s",s);
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
                printf("已找到学号为%s的学生，请输入需要修改的内容\n");
                printf("如：sex // score1 // score2 // score3 \n");
                 printf("请输入:");scanf("%s",c);
                getchar();
                while(strcmp(c,"sex")!=0&&strcmp(c,"score1")!=0&&strcmp(c,"score2")!=0&&strcmp(c,"score3")!=0)
                {
                    printf("不存在该内容！请重新输入\n");
                    gets(c);
                }
                if(strcmp(c,"sex")==0)
                {
                    printf("原数据为%c ，请输入要修改的类型 f/m \n",p->sex);
                     printf("请输入:");a=getchar();
                    p->sex=a;
                    printf("保存成功\n");
                    getchar();
                }
                if(strcmp(c,"score1")==0)
                {
                    printf("请输入要修改的成绩 \n");
                    scanf("%lf",&b);
                    getchar();
                    printf("保存成功\n");
                    p->score[0]=b;
                    p->sum=p->score[0]+p->score[1]+p->score[2];
                    p->ave=p->sum/3.0;
                }
                if(strcmp(c,"score2")==0)
                {
                    printf("请输入要修改的成绩 \n");
                    scanf("%lf",&b);
                    getchar();
                    printf("保存成功\n");
                    p->score[1]=b;
                    p->sum=p->score[0]+p->score[1]+p->score[2];
                    p->ave=p->sum/3.0;
                }
                if(strcmp(c,"score3")==0)
                {
                    printf("请输入要修改的成绩 \n");
                    scanf("%lf",&b);
                    getchar();
                    printf("保存成功\n");
                    p->score[2]=b;
                    p->sum=p->score[0]+p->score[1]+p->score[2];
                    p->ave=p->sum/3.0;
                }

            }
            p=p->next;
        }
        if(f==0)
        {
            printf("没找到该学生\n");
        }
    }
    printf("若要保存信息，请下一步进行'7'。\n");
    return head;
}
