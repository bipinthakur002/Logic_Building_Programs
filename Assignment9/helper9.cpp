#include"Header.h"
int ArrayDiff(int *arr, int size1, int *brr, int size2)
{
	int i = 0, itemp = 0, isum1 = 0, isum2 = 0, idigit = 0;
	
	if((arr == NULL)||(size1<0))
	{
		return FALSE;
	}
	for (i = 0;i < size1;i++)
	{
		isum1 += arr[i];
	}

	for (i = 0;i < size1;i++)
	{
		isum2 += brr[i];
	}

	return (isum1 - isum2);
	
	
}