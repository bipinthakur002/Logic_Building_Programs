#include"Header.h"
int DisplayNearest(int *arr, int isize,int num)
{
	int iret = 0, i = 0;
	int Max = num - arr[0],Max1=num-arr[1],temp=0;
	for (i = 2;i < isize;i++)
	{
		if ((Max > Max1)&&(Max<=num))
		{
			temp = Max;
		}
		else
		{
			temp = Max1;
		}
	
	}
	return temp;
}