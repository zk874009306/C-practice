/**********************************************************
function:
        bubble sort


***********************************************************/
#include<stdio.h>

int main(int argc, const char *argv[])
{
    int a[10] = {1,5,19,7,28,14,12,3,6,2};
    int i, j, k;
    for(i=10;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }

    }

    for(i=0;i<10;i++)

    {
        printf("%-4d",a[i]);
    }
    
    printf("\n");

    return 0;
}
