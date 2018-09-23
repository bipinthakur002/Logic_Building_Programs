#include"Header.h"
void Increase(int *arr, int isize)
{
	int i = 0;
	if ((arr == NULL) || (isize < 0))
	{
		return;
	}

	for (i = 0;i < isize;i++)
	{
		
		 if (((arr[i] % 3) == 0)&&((arr[i] % 5) == 0))
		{
			arr[i] += 2;
		}
		 else if ((arr[i] % 3) == 0)
	{
		arr[i] += 1;
	}
		
	}

}