#include"Header.h"
void PrintPrime(int *arr, int size)
{
	int flag = 1, i = 0,j=0;
	for (i = 0 ; i < size ; i++)
	{
		for (j = 2;j < size;j++)
		{
			if ((arr[i] % j) == 0)
			{
				flag = 0;
				break;
			}
		
		}
		if (j == size)
		{
			printf(" :%d\t", arr[i]);
		}
	}
	

}