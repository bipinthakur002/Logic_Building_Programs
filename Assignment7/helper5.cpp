#include"Header.h"
void frequency(int ino)
{
	int *arr,size=0,i=0,num=0,itemp=0;
	printf("enter the size for array:\n");
	scanf_s("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	
	while (num != 0)
	{
		itemp = num % 10;
		arr[itemp]++;
		printf("%d", arr);
		num = num / 10;
	}
}