#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int riffle(int (*p) [13])
{
	int num = 52; 
	int temp;
	int flag[52] = {0};
	int *q = (int *)p;



	srand(time(NULL));

	while(num > 0)
	{
		temp = rand()%52;
		if(flag[temp] == 1)
		continue;
		else
		{
			*q = temp;
			flag[temp] = 1;
			q++;
			num--;
		}
	
	}
	


	return 0;
	
}

int print_array(int (*p) [13])
{
	int i;
	int *q = (int*)p;

	for(i = 0 ;i< 52 ;i++,q++)
	{
		printf("%8d",*q);
	}

	return 0;
}


int perflop(int (*p) [13], int n)
{
	return 0;	
}


int main(int argc, const char *argv[])
{
	int a [4][13];
	
	riffle(a);
	print_array(a);
	printf("\n");
//	perflop(a,3)
	return 0;
}
