#include"Header.h"
void PrintSumDigit(int *arr, int size)
{
	int  i = 0, icnt = 0,  *temp = arr;
	while (i<size)
	{

		icnt = 0;
		while (arr[i] != 0)
		{
			icnt = icnt + (arr[i] % 10);
			arr[i] = arr[i] / 10;
		}
		printf("Addition of index %d is %d\n",i,icnt);
		i++;

	}


}