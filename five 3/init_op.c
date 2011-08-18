#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/fb.h>
#include <sys/mman.h>

#include "func.h"



fbscr_t fb_v;

int mx;
int my;

char chess_board[X_NUM*Y_NUM];
char player;
u32_t current_color;

int init_data(void)
{	
	int fd = 0;
	struct fb_var_screeninfo fb_var;

	fd = open("/dev/fb0", O_RDWR);
	if(fd < 0)
	{
		perror("open fb0");
		exit(0);
	}

	if(ioctl(fd, FBIOGET_VSCREENINFO,&fb_var) < 0)
	{
		perror("ioctl");
		exit(0);
	}
	
	fb_v.w = fb_var.xres+256;
	fb_v.h = fb_var.yres;
	fb_v.bpp = fb_var.bits_per_pixel;

	fb_v.memo = mmap(NULL, fb_v.w*fb_v.h*fb_v.bpp/8, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
	
	if(fb_v.memo == MAP_FAILED)
	{
		perror("map");
		exit(0);
	}
	memset(fb_v.memo, 0, fb_v.w*fb_v.h*fb_v.bpp/8);
	memset(chess_board, 0, X_NUM*Y_NUM);

	current_color = BLACK;
	player = 1;

	return 0;
}

