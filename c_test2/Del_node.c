/***************************************************************************删节点(已完成)

************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
    int i;
    head = p = malloc(sizeof(DT));

    if (p == NULL)
    {
        perror("creat");
        exit(0);
    }

    p -> score = 1;
    strcpy(p -> name,"zhang" );
    p->next = NULL;

    for(i = 1; i<n; i++)
    {
        p -> next =malloc(sizeof(DT));
        if(p->next == NULL)
        {
            perror("creat link");
            exit(0);
        }

        p -> next ->score = i+1;
        strcpy(p ->next-> name ,"zhang");
        p->next ->next = NULL;
        p = p->next;
    }

    return head;
}
/*

int get_count(STU *p)
{
    int counter = 0;
    if (p != NULL)
    {
        counter++;
        p = p - next;
    }
    return counter;
}
   */
/*
DT *Delete_node(DT *p ,int n)
{
    DT *head = p;
   
    int i;
  //  head = p;
    for (i=1;i<n+1;i++)
    {
        while (p ->next -> score == n )
           {
               free(p->next);
               p->next = p->next->next;

           }
           p = p->next;
        
    }
    return head;



}
  */

DT *Delete_node(DT *p)
{
    DT *head = p;
    DT *temp = NULL;
    int n;
    if (p == NULL)
    {
        printf("empty link\n");   // the link is empty that the node deleted
        return NULL;
    }

    printf("please in put a delete number:");

    scanf("%d",&n);

    
    if ( p -> score == n)
    {
       
       head = p->next;
       free(p);
//       break;
       return head;
    }
    while (p -> next != NULL)
    {
          if (p -> next-> score == n)
          {
               break;
          }
          p = p->next;
     }


    if (p ->next == NULL)
    {
        printf("\ninput error,input again:");
     //   scanf("%d",&n);
        return head;
    }

     temp = p ->next;
     p -> next = p->next->next;
     free(temp);
   
    return head;



} 
void print_link(DT *p)
{
    
    if (p == NULL)
    {
        printf("empty\n");
    }

    while(p !=NULL)
    {
        printf("%-5d    %s\n", p -> score,p -> name);
        p= p->next;
    }
}


int main(int argc, const char *argv[])
{
    DT *head ;
    head = creak_link(10);
    print_link(head);
    head = Delete_node(head);
    printf("\n");
    print_link(head);
    return 0;
}
