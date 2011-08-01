#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define m 5
#define n 4


int main(int argc, const char *argv[])
{
    int array[m][n];

//    int (*p)[n];

//    p = array;
    int i, j;
   
    
    for(i=0;i<5;i++)
   {
        for(j=0;j<4;j++)
        {
            array[i][j] = rand()%(m*n);
        }
    }


    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%-5d",array[i][j]);
        }
        
        printf("\n");
    }            
/*
    printf("array =%p\n", array);
    printf("&array[0] =%p\n",&array);
    printf("array[0] =%p\n",array[0]);
    printf("&array[0][0] = %p\n",&array[0][0]); */
    printf("\n");
    return 0;
}
