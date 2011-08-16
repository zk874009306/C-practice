#include <stdio.h>
#include "func.h"
#include "variable.h"

int main(int argc, const char *argv[])
{
    init_date();
/*
	int i, j;
	
	for (j = 0; j < 100; j++) 
	{
		for (i = 0; i < 100; i++) 
		{
			print_point_set(100+i,100+j,0x0000ff00);
		}
	}
//	printf("hello world\n");
                  */
	fb_line (0,0,fb_v.w-1,fb_v.h-1, 0x0000ff00);
    fb_line (fb_v.w-1,0,0,fb_v.h-1, 0x0000ff00);	
	fb_line (300,0,350,fb_v.h-1, 0x0000ff00);
 
    return 0;
}
