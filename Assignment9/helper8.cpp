#include"Header.h"
BOOL ArrayCompare(int *arr, int size1, int *brr, int size2)
{
	int i = 0, itemp = 0, isum = 0, idigit = 0;
	static int icnt = 0;
	if ((arr == NULL) || (size1 != size2))
	{
		return FALSE;
	}
	for (i = 0;i < size1;i++)
	{
		if (arr[i] != brr[i])
		{
			break;
		}
	}
		if (i < size1)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
	
}