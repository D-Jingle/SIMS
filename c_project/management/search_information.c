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
        printf("文件中无学生信息，请添加后保存至文件。\n");
        return head;
    }
    else
    {
        printf("请输出需要查询学生的学号或姓名，按学号请按1，按姓名请按2\n");
        int n;
        scanf("%d",&n);
        getchar();
        while(n!=1&&n!=2)
        {
            printf("输入错误,请重新输入,按学号请按1,按姓名请按2\n");
            scanf("%d",&n);
            getchar();
        }

        if(n==1)
        {
            printf("请输入学号\n");
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
                    printf("C语言 %.2f分 C++ %.2f分 Java %.2f ",p->score[0],p->score[1],p->score[2]);
                    printf("总成绩 %.2f分 平均分 %.2f分\n",p->sum,p->ave);
                    flag=1;
                }
                p=p->next;
            }
            if(flag==0)
            {
                printf("不存在此学生\n");
            }
        }
        else
        {
            printf("请输入姓名\n");
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
                    printf("C语言 %.2f分 C++ %.2f分 Java %.2f ",p->score[0],p->score[1],p->score[2]);
                    printf("总成绩%.2lf 平均分%.2lf\n",p->sum,p->ave);
                    f=1;
                }
                p=p->next;
            }
            if(f==0)
            {
                printf("不存在此学生\n");
            }
        }


    }
}
