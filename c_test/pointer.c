/*********************************************************
功能说明：
        用指针的方式初始化数组


**********************************************************/


#include<stdio.h>

int main(int argc, const char *argv[])
{
    int array[10] ,i;

    int *ptr = &array[0];
 
    for(i=0 ; i<10; i++)
    {
        *(ptr++) = i+1;
        printf("%-4d",*&array[i]);

    }

    printf("\n");

    return 0;
}
