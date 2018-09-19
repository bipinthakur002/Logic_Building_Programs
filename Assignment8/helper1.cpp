#include"Header.h"
void DisplayEven(int arr[], int isize)
{
	int icnt = 0, j = 0;
	for (icnt = 0;icnt < isize;icnt++)
	{
		if ((arr[icnt] % 2) == 0)
		{
			printf("%d\t", arr[icnt]);
		}
	}
}