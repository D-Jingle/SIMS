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
    printf("�����롮1��������Ĭ��λ�ã�D:\\date.txt\n");

    while(z==0)
    {
        scanf("%d",&i);
        if(i==1)
        {
            x=1;z=1;
        }
        else
        {
             printf("����������������룺");
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
        printf("�����ļ�ʧ�ܡ�\n");

    }
    else
    {
        printf("�ļ��ѽ�������ַ��%s\n",b);
        return ;
    }


    fclose(p1);
    strcpy(q,b);

}
