#include"Header.h"
void pattern3(int num)
{
	int i = 0, j = 0;
	int icnt = 0;
	int temp = num, idigit = 0 , temp1 = 0;
	if (num < 0)
	{
		num = -num;
	}

	while (temp != 0)
	{
		icnt++;
		temp = temp / 10;
	}

	for (i = 1;i <= icnt;i++)
	{
		temp = num;

		for (j = 0;j < i;j++)
		{
			temp1 = temp % 10;
			idigit = idigit * 0 + temp1;
			printf("%d\t", idigit);
			temp = temp / 10;
		}
		
		
		
		printf("\n");
	}
}