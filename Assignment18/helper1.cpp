#include"Header.h"
void pattern1(int num)
{
	int icnt = 0, digit = 0, temp = 0, div = 0;

	while (num > 0)
	{
		icnt++;
		temp = num % 10;
		digit = digit * 10 + temp;
		num = num / 10;


	}
	while (icnt != 0)
	{
		num = digit;
		while (num != 0)
		{
			div = num % 10;
			printf("%d\t", div);
			num = num / 10;
		}
		printf("\n");
		icnt--;
	}
	printf("\n");
}