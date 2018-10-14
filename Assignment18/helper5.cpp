#include"Header.h"
void pattern5(int num)
{
	int i = 0, j = 0;
	int icnt = 0;
	int temp = num, idigit = 0, temp1 = 0;
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

		for (j = 1;j <= icnt;j++)
		{
			temp1 = temp % 10;
			idigit = idigit * 0 + temp1;
			temp = temp / 10;

			if ((i == 1) || (i == icnt))
			{
				printf("%d\t", idigit);
			}

			else if ((j == 1) || (j == icnt))
			{
				printf("%d\t",idigit);
			}

			else
				printf("0\t");
			
		}

		

		printf("\n");
	}
}