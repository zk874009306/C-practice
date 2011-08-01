#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
	int number;
	char name[20];
	struct student *next;
};

typedef	struct student STU;

STU *create_link(int n)
{
	int i = 0;
    STU *head = NULL;
	STU *p = NULL;

	head = p = malloc(sizeof(STU));
	if(p == NULL)
	{
		perror("create");
		exit(0);
	}
	p->number = 1;
	strcpy(p->name, "student");
	p->next = NULL;
	
	for(i=1; i<n; i++)
	{
		p->next = malloc(sizeof(STU));
		if(p->next == NULL)
		{
			perror("create");
			exit(0);
		}
		p->next->number = i+1;
		strcpy(p->next->name, "student");
		p->next->next = NULL;
		p = p->next;

	}

	return head;
}

void print_link(STU *p)
{
	while(p != NULL)
	{
		printf("%-5d  %s\n", p->number,p->name);
		p = p->next;
	}
}
int main(void)
{


	STU *head = NULL;

	head = create_link(10);
	print_link(head);
	return 0;
}
