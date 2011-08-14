#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
    {
        int num ;
        char name[20];

        struct  student *next;
    };

typedef struct student  STU ;

void show_link(STU *p)
{
    if (p == NULL)
    {
        printf("empty\n");
    }
    
    while (p != NULL)
    {
        printf("%5d         %s\n", p -> num, p->name);
        p = p->next;
    }
    return;
}

void save_link(STU *p)
{
    FILE *fp = fopen("1.txt","w+");
    
    if (fp == NULL)
    {
        perror("open failed!");
        exit(0);
    }
    while(p != NULL)
    {
        fprintf(fp,"%5d       %s\n",p -> num, p->name);
        p = p->next;
    }

    fclose(fp);

}

void menu(void)
{
    puts("please make a choice\n");
    puts("1. add");
    puts("2. delete");
    puts("3. show-node");
    puts("4.save");
    puts("5.quit");

}

STU *delete_node(STU *p)
{
    STU *head = p;
    STU *temp = NULL;
    int n ;
    if (p == NULL)
    {
        printf("no link");
        return NULL;
    }

    printf("please input a delete number:");
    scanf("%d",&n);
    getchar();

    if (p -> num == n)
    {
        head = p -> next;
        free(p);
        return head;
    }

    if (p ->next == NULL)
    {
        printf("input error empty ");
        return head;
    }
    
    while (p != NULL)
    {
        if(p -> next -> num == n)
        {
            break;
        }
        p = p->next; 
    
    } 
    
    temp = p->next;
    p->next = p->next ->next;
    free (temp);
    return head;


}
STU *add_node(STU *head)
{
    
    STU *p_c = NULL;
    STU *ptr = head;
    p_c = malloc(sizeof(STU));

    if (NULL == p_c)
    {
        perror("malloc");
        exit(0);
    }

    printf("Please input a add number:\n");
    scanf("%d", &p_c -> num);
    printf("Please input a name:\n");
    scanf("%s",p_c->name);
    getchar();
    p_c -> next = NULL;

    if (NULL == head)            // no link 
    {
      //  puts("creat failed");
        return p_c;
    }


    if (p_c -> num < head -> num)   // insert to head link
    {
        p_c -> next = head;
        return p_c;
    }
    
    while((ptr->next != NULL) && (p_c ->num > ptr->next->num))
    {
        ptr = ptr -> next;    
    
    }
    
    p_c->next = ptr->next;

    ptr->next = p_c;

    return head;
}

int main(int argc, const char *argv[])
{
    int flag = 1;
    int choice;
    STU *head = NULL;

    while (flag > 0)
    {
        menu();
        choice = getchar();
        getchar();
       

//        printf("%d\n", choice-48);
        
        switch(choice)
        {
            case '1' : head = add_node(head); break;
            case '2' : head = delete_node(head); break; 
            case '3' : show_link(head); break;
            case '4' : save_link(head); break;
            case '5' : flag = 0; break;
            default : break;
        }

    
    }


    return 0;
}

