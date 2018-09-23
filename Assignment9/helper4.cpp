#include"Header.h"
void DisplayDivisible(int *arr, int isize,int num)
{
	int i = 0, icnt = 0, icnt1 = 0, idiff = 0;
	if ((arr == NULL) || (isize < 0))
	{
		return;
	}
	for (i = 0;i < isize;i++)
	{

		if ((arr[i] % num) == 0)
		{
			printf("%d\t", arr[i]);
		}
		

	}

	

}
