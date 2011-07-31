#include<stdio.h>

void init_array(int *p, int n)
{
    int i = 0;
    for(i=0;i<100;i++)
    {
        p[i]= i+1; 
    }
}

void check_num(int *p, int m)
{
   int i= 0,j=1;
   for(i=0;i<100;i++)
   {
       p[i] = i+1;
       if (p[i]>9)
       {
            if(p[i] %10 ==9)
            {
               j++; 
               
            }
            if(p[i]/10 == 9)
            {
               j++;
            }
       }
    printf("%-4d",p[i]);
    }
    printf("\n");
    printf("num of 9 is %d",j);
}
int main(int argc, const char *argv[])
{
    int array[100];
//    init_array(array, 100);
    check_num(array,100);
    
    printf("\n");
    return 0;
}
