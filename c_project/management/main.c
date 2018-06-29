#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
char q[200];
int main()
{

    int i,l,m=0;
    int x;
    char c[100];

    STU *head;
    head=(STU *)malloc(sizeof(STU));
    head->next=NULL;

    printf("\n\n");
    strcpy(q,"D:\\date.txt");
    while(1)
    {
        while(m==0)
        {
            printf("\n");
            printf("*************************************************************\n");
            printf("*                                                           *\n");
            printf("*                 欢迎来到学生信息管理系统                  *\n");
            printf("*                                                           *\n");
            printf("*************************************************************\n\n");
            printf("                    请选择您要进行的操作:                   \n\n");
            printf("*1  增加学生信息                       *2  修改学生信息\n");
            printf("*3  显示学生信息                       *4  查询学生信息\n");
            printf("*5  删除学生信息                       *6  对学生信息进行排序\n");
            printf("*7  保存学生信息至记录文件             *8  从记录文件读取学生信息\n");
            printf("*9  新建学生信息文件                   *10 运行结束\n");
            printf("\n第一次运行请新建学生信息文件至默认位置D:\\date.txt");

            printf("\n请输入操作相对应的序号：");
            scanf("%d",&x);

            printf("\n");


            if(x!=1&&x!=2&&x!=3&&x!=4&&x!=5&&x!=6&&x!=7&&x!=8&&x!=9&&x!=10)
            {
                printf("输入错误!请重新输入:\n");
                m=0;

            }
            else
                m=1;

        }

        if(x==1)
        {
            head=add(head);
            m=0;
        }
        if(x==2)
        {
            head=change(head);
            m=0;
        }
        if(x==3)
        {

            display(head);
            m=0;
        }
        if(x==4)
        {
            search(head);
            m=0;
        }
        if(x==5)
        {
            head=del(head);
            m=0;
        }
        if(x==6)
        {
            head=sort(head);
            display(head);
             m=0;
        }



        if(x==7)
        {

            save(head,q);
            m=0;
        }
        if(x==8)
        {

            head=read(q,head);
            m=0;
        }
        if(x==9)
        {
           chuangjian(q);
            m=0;
        }
        if(x==10)
        {


            exit(1);
        }

    }
    return 0;
}
