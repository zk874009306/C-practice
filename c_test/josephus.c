#include<stdio.h>

int main(int argc, const char *argv[])
{
    unsigned int a[40], i=0, j=0;
    for(i=0; i<40; i++)
    {
        a[i] = i+1;
    }
    
    for(i = 0; i < 40; i++)
    {
        if((i+1)%4 == 0)
        {
            printf("%5d(out)",a[i]);
        }
        else
        {
            printf("%5d",a[i]);
        }

    }
    
        printf("\n");

    return 0;
}
