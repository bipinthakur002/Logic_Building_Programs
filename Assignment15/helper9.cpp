#include"Header.h"
void pattern9(int row, int col)
{
	int i = 0, j = 0;
	for (i = 1; i <= row; i++)
	{

		for (j = 1; j <= i; j++)
		{
			printf("* ");

		}
		printf("\n");
	}

}

