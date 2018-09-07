#include<stdio.h>
#include<stdlib.h>
void DisplayDecToBin(int n)
{
	int *arr;
	int i = 0;
	int j = 0;
	arr = (int *)malloc(sizeof(int));
	while (n > 0)
	{


		arr[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i-1;j >= 0;j--)
	{
		printf("%d", arr[j]);
	}


}

int main()
{
	int num = 0;
	printf("enter number:\n");
	scanf_s("%d", &num);
	DisplayDecToBin(num);
	return 0;
}