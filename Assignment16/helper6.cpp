#include"Header.h"
void pattern6(int row, int col)
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

	for (i = row; i > 0; i--)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%d ", j);
		}

		printf("\n");

	}
	printf("\n");


}

