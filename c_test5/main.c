#include <stdio.h>
#include <unistd.h>
#include "func.h"
#include "variable.h"

int main(int argc, const char *argv[])
{
    init_date();

	print_board(0x00ffffff);
	mouse_doing();

//    save_bg(512,384);
/*	draw_cursor(512,384);

	sleep(1);
	restore_bg(512,384);
	draw_cursor(512,360); */

//	int j;
	
/*	for (j = 0; j < 100; j++) 
	{
		for (i = 0; i < 100; i++) 
		{
			print_point_set(100+i,100+j,0x0000ff00);
		}
	}
//	printf("hello world\n");
                  */
/*	fb_line (0,0,fb_v.w-1,fb_v.h-1, 0x0000ff00);
    fb_line (fb_v.w-1,0,0,fb_v.h-1, 0x0000ff00);	
	fb_line (300,0,350,fb_v.h-1, 0x0000ff00);
	fb_circle(512,384,50,0x00ff0000); */

/*	for (j = 0; j < 30; j++) 
	{
		fb_line(1+(30*j),0,1+(30*j),720,0x0000ff00); 
	}

	for (j = 0; j < 25; j++) 
	{
		fb_line(10,1+30*j,870,1+30*j,0x0000ff00);
	} */
 
    return 0;
}
