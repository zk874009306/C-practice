#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    
    char str[100] ="I like c program"; // indefine a string array

    char r_str[100] = {0};
    fp = fopen("2.txt","w");   // open a file you can write some in it
    
 //   printf("%s\n", r_str);   // print the array

    if(fp == NULL)   // open failed
    {
        perror("open");
        exit(0);
    }
    
//   fgets(r_str,1023,fp);// read the file and store the cotent to the r_str
    fputs(str ,fp);
    
    printf("%s\n", r_str);
//    fprintf(fp,"%s\n",str);   // write the str to the file 1.txt 
    fclose(fp); // close  the file 
    return 0;
}
