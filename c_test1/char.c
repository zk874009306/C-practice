#include<stdio.h>
#include<string.h>

char array[15] = "hello,world";
char str[15] = " Good morning!";
char *ptr;
char *sch;

int main(int argc, const char *argv[])
{
    ptr = array;
    sch = str;
    char *strchr(array[15] ,'d');

    printf("%d\n", ptr-array);
    return 0;
}
