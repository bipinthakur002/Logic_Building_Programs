#include"Header.h"
int AddEven(int *arr, int isize)
{
	int icnt = 0, isum = 0;
	for (icnt = 0;icnt < isize;icnt++)
	{
		if ((arr[icnt] % 2) == 0)
		{
			isum = isum + arr[icnt];
		}
	}
	return isum;
}