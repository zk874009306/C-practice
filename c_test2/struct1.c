/*******************************************************************
简单小链表


*******************************************************************/
#include<stdio.h>
#include<string.h>

struct date
{
    char xuesheng[10];
    int xuehao;
    struct date *ptr;
};

    typedef struct date D;
int main(int argc, const char *argv[])
{
    D *p = NULL;

    D m;

    D n;

    p = &m;
    p -> ptr =&n;

    p -> xuehao = 30;
    strcpy(p -> xuesheng,"tanyubin");
    p -> ptr -> xuehao = 80;
    strcpy(p -> ptr -> xuesheng, "zhangkang");

    printf("%s\n%-5d\n",p -> xuesheng,p -> xuehao);
    printf("%s\n%-5d\n",p -> ptr -> xuesheng,p -> ptr -> xuehao);

    return 0;
} 

