/***************************************************************************
数节点

**************************************************************************/

#include<stdio.h>
#include<string.h>

struct date 
{
    int score ;

    char name[20];

    struct date * next;
};

typedef struct date DT;


DT *creak_link(int n)
{
    DT *head;
    DT *p;
    head = p = malloc(sizeof(DT));

    if (p == NULL)
    {
        perror("creat");
        exit(0);
    }

    p -> score = 1;
    strcpy(p -> name,"zhang" );
    p = p->next;
}
int get_count(stu *p)
{
    int counter = 0;
    if (p != NULL)
    {
        counter++;
        p = p - next;
    }
    return counter;
}

int main(int argc, const char *argv[])
{
    DT *head ;
    head = creak_link();
    return 0;
}
