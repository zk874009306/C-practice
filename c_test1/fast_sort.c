#include<stdio.h>
#define M 10 ;

void quick_sort(int *p, int x, int y)
{
    int i = x;
    int j = y;
    int mid = p[(i+j)/2];
    int temp;
    

    do
    {
        while ((p[i] < mid) && i < y) i++;
        while ((p[i] > mid) && i > x) j++;
        if (i <= j)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                i++;
                j--;
            }
    }
    while (i <= j);

    if (x < j)
    {
        quick_sort(p,x,j);
    }
}



int main(int argc, const char *argv[])
{
    int array[10] = {10,20, 60, 45,60,70,80,22,17,77};
    quick_(array, 0 M-1);
    return 0;
}
