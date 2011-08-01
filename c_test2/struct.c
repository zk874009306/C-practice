#include<stdio.h>
#include<string.h>
/*
int main(int argc, const char *argv[])
{
   struct date
   {
       char xuesheng[10];
       int xuehao;
  //     int class;
   
   
   } student;


   strcpy(student.xuesheng,"tanyubin");
   student.xuehao = 30;

   printf("xuesheng: %s\nxuehao: %d\n",student.xuesheng,student.xuehao);
    return 0;
} */
/********************************************************************
结构体中不能在定义包含自己的结构体，所占内存不确定会一直开辟内存，
但可以定义包含自己的指针。


***********************************************************************/
/*

int main(int argc, const char *argv[])
{
    struct date
    {
        char xuesheng[10];
        int xuehao;
       
    } student;
    
//    D student;
    
//    typedef struct date D;
    struct date *p = NULL;

    p = &student;

    p -> xuehao = 30;
    strcpy(p -> xuesheng,"tanyubin");


    printf("%s\n%-5d\n",p -> xuesheng,p -> xuehao);


    return 0;
} 

        */




int main(int argc, const char *argv[])
{
    struct date
    {
        char xuesheng[10];
        int xuehao;
       
    };
    
    typedef struct date D;
    D *p = NULL;

    D m;

    p = &m;

    p -> xuehao = 30;
    strcpy(p -> xuesheng,"tanyubin");


    printf("%s\n%-5d\n",p -> xuesheng,p -> xuehao);


    return 0;
} 


