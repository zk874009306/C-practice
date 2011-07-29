#include<stdio.h>

char *ptr;
char array[15] = "hello,world";

/*
char find (char )
{
    int i=0 ;
    ptr = array;
    while (*(ptr++) != array[i])
    {
        i++;
    }
    return ptr;

}
 */
int main(int argc, const char *argv[])
{
//    char array[15] = "hello,world";
   // char *ptr;
    
//    find('w');

    int i = 0;
    ptr = array;
    while (*(ptr++) != 'w')
    {
       i++;
    }

    printf("%d", i+1);
    printf("\n");

    return 0;
}
