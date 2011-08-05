#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/************************************************************************
funtion: how to use rewind(fp);
         
         fseek(fp,0,SEEK_SET);


************************************************************************
int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    
    char str[100] ="I like c program"; // indefine a string array

    char r_str[100] = {0};
    fp = fopen("2.txt","r+");   // open a file you can write some in it

    if(fp == NULL)   // open failed
    {
        perror("open");
        exit(0);
    }
    int i = 0;
    
    while (str[i] != '\0')
    {
        putc(str[i],fp);
        i++;
    
    }

//    fseek(fp,5,SEEK_SET);  // SEEK_SET means the benginning of the file 
    rewind(fp); // set the file position indicator to the beginning of the file 

    i = 0;  
    while ((r_str[i] = getc(fp)) != EOF)   //if the beginning is '\0',cosider read over
    {
        i++;
    }
    r_str[i] = '\0';

    printf("%s\n",r_str);
    

    fclose(fp); // close  the file 
    return 0;
}

***************************************************************************
FUNCTION : fwrite(str,1,strlen(str),fp);
           fread(r_str,1,1023,fp);

***************************************************************************/

int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    
    char str[100] ="I like c program"; // indefine a string array

    char r_str[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int n = 0;
    fp = fopen("2.txt","r+");   // open a file you can write some in it

    if(fp == NULL)   // open failed
    {
        perror("open");
        exit(0);
    }
    
    fwrite(str,1,strlen(str),fp);

    rewind(fp);

    n = fread(r_str,1,1023,fp); // fread return when meet the end of file ,and return the item number you have read or written
    
    r_str[n] = '\0';     
/*
    i = 0;  
    while ((r_str[i] = getc(fp)) != EOF)   //if the beginning is '\0',cosider read over
    {
        i++;
    }
    r_str[i] = '\0';  */

    printf("%s\n",r_str);
    

    fclose(fp); // close  the file 
    return 0;
}
