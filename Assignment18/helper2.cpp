#include"Header.h"
void pattern2(int num)
{
	int i = 0, j = 0;
	int temp = num;
	int icnt = 0;
	int digit = 0;
	int temp1 = 0;

	while (temp > 0)
	{
		icnt++;
		temp = temp / 10;
	}

	while (icnt > 0)
	{
		temp = num;
		while (temp != 0)
		{
			temp1 = temp % 10;
			digit = digit * 0 + temp1;
			printf("%d\t", digit);
			temp = temp / 10;
		}
		printf("\n");
		
		icnt--;
	}
	printf("\n");

}