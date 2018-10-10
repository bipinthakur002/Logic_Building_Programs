#include"Header.h"
void pattern4(int row, int col)
{
	if (row < 0)
	{
		row = -row;
	}
	if (col < 0)
	{
		col = -col;
	}
	int i = 0 , j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 1;j < col;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}