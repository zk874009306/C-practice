#include<stdio.h>
#include<string.h>
    

int main(int argc, const char *argv[])
{
   
    struct date
    {
        char xuesheng[10];
        int xuehao;
        struct secondary *ptr;
       
    };


    struct secondary
    {
        char name[15];
        int  score;
    
    
    };
   

    
    typedef struct date D;

    typedef struct secondary SDY;
    
    SDY n;
    SDY *ptr = NULL;
     ptr = &n;
    
    D *p = NULL;

    D m;

    p = &m;
    p -> ptr =&n;

    p -> xuehao = 30;
    strcpy(p -> xuesheng,"tanyubin");
    ptr -> score = 80;
    strcpy(ptr -> name, "zhangkang");

    printf("%s\n%-5d\n",p -> xuesheng,p -> xuehao);
    printf("%s\n%-5d\n",ptr -> name,ptr -> score);

    return 0;
} 

