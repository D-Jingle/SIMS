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
            printf("*                 ��ӭ����ѧ����Ϣ����ϵͳ                  *\n");
            printf("*                                                           *\n");
            printf("*************************************************************\n\n");
            printf("                    ��ѡ����Ҫ���еĲ���:                   \n\n");
            printf("*1  ����ѧ����Ϣ                       *2  �޸�ѧ����Ϣ\n");
            printf("*3  ��ʾѧ����Ϣ                       *4  ��ѯѧ����Ϣ\n");
            printf("*5  ɾ��ѧ����Ϣ                       *6  ��ѧ����Ϣ��������\n");
            printf("*7  ����ѧ����Ϣ����¼�ļ�             *8  �Ӽ�¼�ļ���ȡѧ����Ϣ\n");
            printf("*9  �½�ѧ����Ϣ�ļ�                   *10 ���н���\n");
            printf("\n��һ���������½�ѧ����Ϣ�ļ���Ĭ��λ��D:\\date.txt");

            printf("\n������������Ӧ����ţ�");
            scanf("%d",&x);

            printf("\n");


            if(x!=1&&x!=2&&x!=3&&x!=4&&x!=5&&x!=6&&x!=7&&x!=8&&x!=9&&x!=10)
            {
                printf("�������!����������:\n");
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
