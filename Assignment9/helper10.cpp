#include"Header.h"
BOOL ChkSorted(int *arr, int size1)
{
	int i = 0, itemp = 0, isum1 = 0, isum2 = 0, idigit = 0,max=0;

	if ((arr == NULL) || (size1<0))
	{
		return FALSE;
	}
	
	for (i = 0;i < size1;i++)
	{
		if (arr[i] > arr[i+1])
		{
			break;
		}
		
	}
	if (i == size1 - 1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;

	}


}