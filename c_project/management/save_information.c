#include<stdlib.h>
#include<stdio.h>
#include "head.h"
void save(STU *head,char *q)
{
    STU *p;
    p=head->next;
    if(p==NULL)
    {
        printf("请输入信息之后再进行保存。\n");
        return 0;
    }

    FILE *fp;
    if((fp=fopen(q,"w+"))==NULL)
    {
        printf("文件创建失败！请检查路径。\n");
        return 0;
    }

    while(p!=NULL)
    {
        fwrite(p,sizeof(struct student),1,fp);
        p=p->next;
    }
    fclose(fp);
    printf("保存成功！\n");

}
