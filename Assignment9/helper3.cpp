#include"Header.h"
void EvenOddDiff(int *arr, int isize)
{
	int i = 0,icnt=0,icnt1=0,idiff=0;
	if ((arr == NULL) || (isize < 0))
	{
		return;
	}

	for (i = 0;i < isize;i++)
	{

		if ((arr[i] % 2) == 0)
		{
			icnt += arr[i];
		}
		else if ((arr[i] % 2) != 0)
		{
			icnt1 += arr[i];
		}



	}

	idiff = icnt - icnt1;
	printf("Difference between odd and even is %:",idiff);

}