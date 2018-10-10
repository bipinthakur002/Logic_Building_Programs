#include"Header.h"
void pattern3(int row, int col)
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
	for (i = 0;i <row;i++)
	{
		for (j = 0;j < col;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}