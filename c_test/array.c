#include<stdio.h>

int main(int argc, const char *argv[])
{

      int array[100], i = 0;
/*    for(i = 0; i < 100; i++)
    {
        array[i]= i+1;
        printf("%-5d",array[i]);
        if((i+1)%10==0)
        {
            printf("\n");
        }
    }                   */

/*    while(i<100)
    {
        array[i] = i+1;
     
        printf("%-5d",array[i]);
        if ((i+1) % 10 == 0)
        {
            printf("\n");
        }
        i++;
    }    */

    do
    {
        array[i] = i + 1;
        printf("%-5d", array[i]);
        if((i+1)% 10 == 0)
        {
            printf("\n");
        }
         i++;
    }
    while (i < 100);
    printf("\n");
    return 0;
}
