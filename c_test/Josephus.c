#include<stdio.h>

#define N  10

int main(int argc, const char *argv[])
{
    char a[N] = {0};           // the ID of number 0 is left ,1 is out
    int i = 0;
    int interval = 4;          //the space of out number 
    int out_counter = 0;       // the count of left number  
    int killed_counter = 0;    // the count of out number

    for(i=0;killed_counter < N; i++)
    {
        if(i == N)
        {
            i = 0;             // let the loop  run all the way 
        }

        if(a[i] == 0)
        {
           
           if(killed_counter == 9)
            {  
                  
                 printf("%5d(left)\n",i+1);// if found the last num break 
                 break;
            }  
            out_counter++;


            if(out_counter == interval)
            {
             
                out_counter = 0;
                a[i] = 1;   
               
                if(killed_counter == 9)
                {
                     printf("%5d(left)\n",i+1);  // left the last number  
                  
                }
                
                 
                else 
                {
                    printf("%5d(out)\n",i+1);   // print the out number excpe the last num 
                }
                killed_counter++;
                

        }
            else
            {
                printf("%5d", i+1);
            }
        }
    }

    return 0;
}
