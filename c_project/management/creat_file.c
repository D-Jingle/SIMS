#include<stdlib.h>
#include<stdio.h>
#include <string.h>
void  chuangjian(char q[])
{
    //char *p;
    int z=0,i,x;
    //char c;
    char b[200];
    FILE *p1;
    printf("请输入‘1’创建至默认位置：D:\\date.txt\n");

    while(z==0)
    {
        scanf("%d",&i);
        if(i==1)
        {
            x=1;z=1;
        }
        else
        {
             printf("输入错误！请重新输入：");
             z=0;
        }
    }




    if(x==1)
    {
        strcpy(b,"D:\\date.txt");
        p1=fopen(b,"a+");
    }


    if(p1==NULL)
    {
        printf("创建文件失败。\n");

    }
    else
    {
        printf("文件已建立，地址是%s\n",b);
        return ;
    }


    fclose(p1);
    strcpy(q,b);

}
