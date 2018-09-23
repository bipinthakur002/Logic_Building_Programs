#include"Header.h"
void EvenOddReplace(int *arr, int isize)
{
	int i = 0;
	if ((arr == NULL) || (isize < 0))
	{
		return;
	}

	for (i = 0;i < isize;i++)
	{

		if ((arr[i] % 2) == 0)
		{
			arr[i] = 0;
		}
		else if ((arr[i] % 2) != 0)
		{
			arr[i] = 1;
		}

	}

}