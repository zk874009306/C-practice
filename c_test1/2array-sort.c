#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define m 5
#define n 4

void init_array(int *p ,int N)
{
    
    int i;
    for(i=0;i<N;i++)
    {
     
           p[i] = rand()%(m*n);
           printf("%-4d",p[i]);
           if((i+1)% 4 == 0)
           {
               printf("\n");
           }
       
    }

}

void print_array(int *p, int N)
{
    int i;

    for(i=0;i<N;i++)
    {
           printf("%-4d",p[i]);
           if((i+1)% 4 == 0)
           {
               printf("\n");
           }
    }
}
        
void sort_array(int *p,int N)
{
   
    int i, j ,temp,k;
    
    for (i = 0; i < N; i ++)
    {
        k = i;
        for(j = i+1; j< N; j++)
        {
            if (p[k]> p[j])
            {
                k = j;

            }
        }

         if (i != k)
        {
            temp = p[i];
            p[i] = p[k];
            p[k] = temp; 
        }
        
    }

} 

int main(int argc, const char *argv[])
{
    int array[m][n];
    int *p = NULL;
    p = &array[0][0];
    init_array(p,m*n);
    printf("\n");
    sort_array(p,m*n);
    print_array(p,m*n);
    printf("\n");
    return 0;
}

