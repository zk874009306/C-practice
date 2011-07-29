#include<stdio.h>

int main(int argc, const char *argv[])
{
    int a = 9;
   
    int *ptr = &a;//变量 a 的地址赋给指针变量

    printf("a =%x\n", a);
    printf("&a =%x\n", &a);
    printf("ptr = %x\n", ptr);
    printf("*ptr = %x\n", *ptr);
    printf("&ptr = %x\n", &ptr); 

    return 0;
}
