#include"Header.h"
void SumDigit(int *arr, int isize)
{
	int i = 0, itemp = 0,isum=0,idigit=0;
	if ((arr == NULL) || (isize < 0))
	{
		return;
	}
	for (i =0;i < isize;i++)
	{
		itemp = arr[i];
		isum = 0;
		while (itemp != 0)
		{
			idigit = itemp % 10;
			isum = isum + idigit;
			itemp = itemp / 10;

		}
		printf("%d\t", isum);

	}

}
