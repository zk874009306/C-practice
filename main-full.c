/**********************************************
功能说明：
         main函数的原型
两个参数 argc ： 命令行个数   argv： 二级指针，指向命令行字符串地址的指针

************************************************/

#include<stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    printf("%d = parameter\n",argc);

    for(i=0;i<argc;i++)
    {
        printf("%s\n",argv[i]);

    }

    return 0;
}
