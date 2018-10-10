#include"Header.h"
void pattern5(int row, int col)
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
	for (i = 1; i <= row; i++)
	{
		for (j = 1;j <= col;j++)
		{
			if (j % 2 == 0)
			{
				printf("$ ");
			}
			else
			{
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}