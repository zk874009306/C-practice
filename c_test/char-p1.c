/*************************************************************
函数功能说明
字符串数组的复制


***************************************************************/
#include<stdio.h>
#include<string.h>

char *copy(char *ptr , char *str);
char *ptr;
char *scd;
char array[20] = "hello,world!";
char str[18] = "Good,morning!";

int main(int argc, const char *argv[])
{
//    char array[20] = "hello,world!";
//    char str[18] = "Good,morning!";
//    char *ptr;
//    char *scd;
    ptr = array;
    scd = str;
/*    while(*scd != '\0')
    {
       *ptr = *scd;
        printf("%c",*ptr);
        ptr++;
        scd++;

    }  */
    
    copy(array,str);
//    strcpy(array,str);
    printf("%s",array);
    printf("\n");
    return 0;
}


char *copy(char *ptr , char *str)
{
    char *m = array;                 // 指针变量指向数组的首地址
    while((*ptr=*scd) != '\0')
    {
        // *ptr = *scd;
         ptr++;
         scd++;
     }
//     *ptr = '\0';  
     return m;     //返回首地址
}
/******************************************************
复制字符串函数的另一种简化
*******************************************************/
/* char *copy(char *ptr , char *str)
{
    char *m = array;
    while ((*(ptr++) = *(scd++))! = 0);
    
    return m;
}  */
