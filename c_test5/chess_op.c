#include <stdio.h>
#include "variable.h"
#include "func.h"

int check_player(int x, int y)
{
	int i;
	int count = 1;
	int who = chess_board[x+y*X_NUM];
	if (who == 0)
	{
		return 0;
	}
	for (i = 1; i < 5; i++) 
	{
		if((chess_board[x+i+y*X_NUM]) == who)
		{
			count ++;
		}
		else
		{
			break; 
		}
		
	
	}
	if(count == 5)
		{
			return who;
		}
/*	for(i = 0; j = -1; i < 4;i++,j--)
	{
		if ((chess_board[x+1,y*X_NUM]))
	} */
	return 0;
}



int chess_put(int x, int y)
{
	int i;
	int j;
	char winner;
	chess_board[x+y*X_NUM] = player;
	for (j = 0; j < Y_NUM; j++) 
	{
		for(i = 0; i < X_NUM ;i++)
		{
			winner = check_player(i,j);
			if(winner > 0)
			{
				return winner;
			}
			
/*if (chess_board[i + j*X_NUM] == 0)
			{
				return 0; 
			}    */
			
		}
	}

	return 0;
}

int chess_doing (void)
{
	int rx =(mx - STA_X)%space;
    int ry =(my - STA_Y)%space;
	int cx = mx -rx;
	int cy = my -ry;
	
	if(mx < STA_X || mx > (STA_X + (X_NUM-1)*space))
	{
		return 0;
	}

	if(my < STA_Y || my > (STA_Y + (Y_NUM-1)*space))
	{
		return 0;
	}


	if (rx > (space/2))
	{
		cx += space;
	}

	if (ry > (space/2))
	{
		cy += space; 
	}

	fb_circle(cx,cy,13,current_color);
	
	char winner = 0;
	winner = chess_put((cx - STA_X)/space,(cy - STA_Y)/space);
	
	if (winner > 0) 
	{
		return winner;
	}


	if (current_color == WHITE)
	{
		current_color = BLACK;
		player = 1;
	}

	else
	{
		current_color = WHITE;
		player = 2;
	}
	
	return 0;	
}
