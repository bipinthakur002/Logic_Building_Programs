#include"Header.h"
int Minimum(int *arr, int size)
{
	int i = 0, iMin = arr[0];
	for (i = 1; i < size;i++)
	{
		if (arr[i] < iMin)
		{

			iMin = arr[i];

		}
	}
	return iMin;
}
