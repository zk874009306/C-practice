#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <linux/fb.h>
#include <string.h>


#include "func.h"
/*
 filesystem -> usr ->include ->sys(ioctl.h) || linux (fb.h)
*/

fbscr_t fb_v;
int mx;
int my;

char player = 2;
u32_t current_color = 0x00ffffff;
char chess_board[X_NUM*Y_NUM];

int init_date(void)

{
	int fd = 0;
	struct fb_var_screeninfo fb_var;

	fd = open("/dev/fb0",O_RDWR);

	if (fd < 0)
	{
		perror("open fb0");
		exit(0);
	}

	if (ioctl(fd,FBIOGET_VSCREENINFO,&fb_var) < 0)   // operate a undering device parameter in a special file  return a non-nagetive value
	{
		perror("inctl");
		exit(0);
	}

	printf("w =%d\th=%d\tbpp=%d\t\n",fb_var.xres,fb_var.yres,fb_var.bits_per_pixel);
	
	fb_v.w = fb_var.xres;
	fb_v.h = fb_var.yres;
	fb_v.bpp = fb_var.bits_per_pixel;
	fb_v.memo = mmap(NULL,fb_v.w*fb_v.h*fb_v.bpp/8,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);  // mmap(); creat a new mapping in a virtual address space
	if(fb_v.memo == MAP_FAILED)
	{
		perror("map");
		exit(0);
	}

	memset(fb_v.memo, 0 ,fb_v.w*fb_v.h*fb_v.bpp/8);   // clean screen

	int i;
	u32_t *p = fb_v.memo;
/*	for(i = 0; i <1024*100;i++)
	{
		p[1024*300+i]= 0x0000ff00;
	} */
/*
	for(i=0;i<fb_v.w;i++)
	{
		p[i] = 0x00ff0000;
	} */
	for (i = 0 ;i < fb_v.w*fb_v.h; i++)
	{
	//	if( (i%400) == 0 )
		p[i] = 0x00cc9966;
	}
/*
	for(i=0;i<fb_v.h;i++)
	{
		p[i*fb_v.w] = 0x0000ff00;
	}  */
	return 0;
}
