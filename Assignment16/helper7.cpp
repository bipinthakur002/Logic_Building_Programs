#include"Header.h"
void pattern7(int row, int col)
{
	if (row < 0)
	{
		row = -row;
	}
	if (col < 0)
	{
		col = -col;
	}
	int i = 0, j = 0;
	int icnt = 1;

	for (i = 1; i <= row; i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%d ", i);
		}

		printf("\n");

	}
	printf("\n");


}

