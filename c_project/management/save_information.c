#include<stdlib.h>
#include<stdio.h>
#include "head.h"
void save(STU *head,char *q)
{
    STU *p;
    p=head->next;
    if(p==NULL)
    {
        printf("��������Ϣ֮���ٽ��б��档\n");
        return 0;
    }

    FILE *fp;
    if((fp=fopen(q,"w+"))==NULL)
    {
        printf("�ļ�����ʧ�ܣ�����·����\n");
        return 0;
    }

    while(p!=NULL)
    {
        fwrite(p,sizeof(struct student),1,fp);
        p=p->next;
    }
    fclose(fp);
    printf("����ɹ���\n");

}
