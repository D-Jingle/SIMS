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

        printf("������ѧ����Ϣ:ѧ�ţ��������Ա�f/m����3�Ź��γɼ�\n");
        printf("�磺");
        printf("2016224408 daijing f 100 100 100 \n");
        printf("�����룺\n");


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
                printf("ѧ���ظ�������������ѧ�ţ�\n");
                flag=0;
            }


        }




        scanf("%s",q1->name);
        getchar();
        q1->sex=getchar();
        while(q1->sex!='f'&&q1->sex!='m')
        {
            printf("�Ա�����������������룡");
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
    printf("���������Ϣ���£�\n");
    printf("ѧ�� %s ",q1->xuehao);
    printf("���� %s ",q1->name);
    printf("�Ա� %c ",q1->sex);
    printf("C���� %.2f�� C++ %.2f�� Java %.2f ",q1->score[0],q1->score[1],q1->score[2]);
    printf("�ܳɼ� %.2f�� ƽ���� %.2f��\n",q1->sum,q1->ave);
    printf("��Ҫ������Ϣ������һ������'7'��\n");
    return head;
}
