#include"Header.h"
void PrintDigCount(int *arr, int size)
{
	int  i=0,icnt = 0, j = 0,*temp=arr;
	while(i<size)
	{
		
		icnt = 0;
		while (arr[i] != 0)
		{
			icnt++;
			arr[i] = arr[i] / 10;
		}
		printf("Count for %d is %d\n", temp[i], icnt);
		i++;
		
	}


}