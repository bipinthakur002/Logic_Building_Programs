#include"Header.h"
int Maximum(int *arr, int size)
{
	int i = 0, iMax = arr[0];
	for (i = 1; i < size;i++)
	{
		if (arr[i] > iMax)
		{
			
			iMax = arr[i];

		}
	}
	return iMax;
}
