#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
STU *read(char *q,STU *head)
{

    FILE *fp;
    STU *pTail=head,*pNew=NULL;
    while(pTail->next)
    {
        pTail=pTail->next;
    }

    //STU *p1;
    fp=fopen("D:\\date.txt","rb");
    //p=head;
    if(fp==NULL)
    {
        printf("�޷����ļ�");
        return 0;
    }

        printf("���ݶ�ȡ�ɹ�\n");
        while(!feof(fp))
        {
            pNew=(STU *)malloc(sizeof(STU));
            fread(pNew,sizeof(struct student),1,fp);
            if(feof(fp))
            {
                free(pNew);
                pNew=NULL;
                break;
            }
            pNew->next=NULL;
            pTail->next=pNew;
            pTail=pNew;
         // printf("come here\n");
        }


    fclose(fp);
    return head;

}
