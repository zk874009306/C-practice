
#include <stdio.h>
#include <stdlib.h>

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
    /*
    while (str[i] != '\0')
    {
        putc(str[i],fp);
        i++;
    
    } */
    while ((r_str[i] = getc(fp)) != EOF)
    {
        i++;
    }
    r_str[i] = '\0';
    printf("%s\n", r_str);

    fclose(fp); // close  the file 
    return 0;
}
