/**************************************************************
函数功能说明：
            用指针的方式正顺序打印出字符串，再反顺序打印出
***************************************************************/



#include<stdio.h>
int main(int argc, const char *argv[])
{
    char *ptr;
    char array[12]="hello,world";
    int i ;
    
    ptr = array;
/*  for(i=0;i<10;i++)
    {
        *(ptr++) = 'a'+i;
//        printf("%c", *&array[i]);     // print a zi fu chuan
    }
    *ptr ="\0";
    printf("array = %s\n",array);  */   
//    ptr = &array[11];
    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }

    printf("\n");
    
    ptr--;
    while (ptr >= array)
    {
        printf("%c",*ptr);
        ptr--;
    }

//    printf("%c",*ptr);
    printf("\n");
    return 0;
}
