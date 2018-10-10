#include"Header.h"
void pattern8(int row, int col)
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
	for (i = row; i > 0; i--)
	{
		
		for (j = i; j >0; j--)
			{
				printf("* ");

			}
		printf("\n");
	}
		
	}

