#include <stdio.h>
#include "func.h"
#include "variable.h"

void print_board(u32_t color)
{
	int i ;
	for(i = 0 ; i < X_NUM; i++)
	{
		fb_line(STA_X+i*space,STA_Y,STA_X+i*space,STA_Y+(Y_NUM-1)*space,color); 
	}

	for(i = 0 ; i < Y_NUM; i++)
	{
		fb_line(STA_X,STA_Y+i*space,STA_X+(X_NUM-1)*space,STA_Y+i*space,color);
	}
	return;

}
