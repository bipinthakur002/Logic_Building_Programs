#include"Header.h"
void DisplayReverse(int *arr, int isize)
{
	int icnt = 0, j = 0;
	for (icnt = isize-1 ; icnt >=0 ;icnt--)
	{
		
			printf("%d\t", arr[icnt]);
		
	}
}