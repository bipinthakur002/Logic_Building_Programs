#include"Header.h"
void ArrReverse(int *arr, int isize)
{
	int i = 0, icnt = 0, icnt1 = 0, idiff = 0;
	if ((arr == NULL) || (isize < 0))
	{
		return;
	}
	for (i = isize-1;i >= 0;i--)
	{

		printf("%d\t", arr[i]);
		
	}

}
