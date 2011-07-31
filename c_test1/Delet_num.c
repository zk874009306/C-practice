#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define M   20

void print_array(int *p, int n)
{
    int i = 0;

    for(i=0; i<n; i++)
    {
        if(p[i] != -2)
        {
            if((i%8) == 0)
            {
                printf("\n");
            }
            printf("%7d", p[i]);
        }
    }
    printf("\n");
}

void init_array(int *p, int n)
{
    srand(time(NULL));

    int i = 0;

    for(i=0; i<n; i++)
    {
        p[i] = rand()%(n*2);
    }
}

void Delete_num(int *p, int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        if (p[i]!=-2)
        {
            for(j=i+1;j<n;j++)
            {
                if(p[j] == p[i])
                {
                     p[j] = -2;         
              // printf("%-8d",p[i]);
                }
             }
        }
    }



}

int main(int argc, const char *argv[])
{
    int array[M];
    
    init_array(array,M);

    printf("orginal:\n");
    print_array(array,M);
    Delete_num(array,M); 
    printf("after delete:\n");
    print_array(array,M);
    printf("\n");

    return 0;
}
