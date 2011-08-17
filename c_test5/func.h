
#ifndef _FUNC_H_
#define _FUNC_H_
#define STA_X   100
#define STA_Y   40
#define X_NUM   29
#define Y_NUM   24
#define space   30 
typedef unsigned char u8_t;
typedef unsigned int u32_t;
typedef struct
{
	int w;
	int h;
	int bpp;

	void *memo;
}fbscr_t;

typedef struct
{
	int dx;
	int dy;
	char button;
} mouse_event;  

int init_date(void);
void print_point_set(int x, int y, u32_t color)	;
int fb_line(int x1, int y1, int x2, int y2, u32_t color);
int fb_circle(int x0, int y0, int r ,u32_t color);
void print_board(u32_t color);
int draw_cursor(int x, int y);
int restore_bg(int x, int y);
int save_bg(int x, int y);
int mouse_doing(void);

#endif 


