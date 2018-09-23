#include"Header.h"
void MaxDigit(int *arr, int isize,int num)
{
	int i = 0, itemp = 0, isum = 0, idigit = 0;
	static int icnt = 0;
	if ((arr == NULL) || (isize < 0))
	{
		return;
	}
	for (i = 0;i < isize;i++)
	{
		itemp = arr[i];
		while (itemp != 0)
		{
			idigit = itemp % 10;
			if (idigit == num)
			{
				icnt++;	
			}
			itemp = itemp / 10;
		}		
	}
	printf("%d Occurs %d times", num,icnt);
}
