#include<stdio.h>
int add(int a , int b);

int main(int argc, const char *argv[])
{
    int a = 5, b=6;

    int c = add(a,b);
    printf("%d",c);
    printf("a =%d",a);
    printf("\n");
    
    return 0;
}

int add(int a , int b)
{
    a += 1;
    return(a+b);
}
