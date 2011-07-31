#include<stdio.h>

void hannuo(int a ,int b ,int c, int n)
{
    if(n == 1)
    {
        printf("%c------->%c\n", a , c);
        return;   // return ,the end of the function
    }
    hannuo(a, c , b, n-1);
    printf("%c------->%c\n", a, c);
    hannuo(b, a , c,n-1);
 
}

int main(int argc, const char *argv[])
{
    int n = 3;
    hannuo('a' , 'b' , 'c' , n); // from 'a'by 'b' to place 'c' n plate
    return 0;
}
