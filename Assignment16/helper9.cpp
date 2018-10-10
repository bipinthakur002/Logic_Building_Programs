#include"Header.h"
void pattern9(int row, int col)
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
		for (j = 1;j <= col;j++)
		{
			if (j == i)
			{
				printf("$ ");
			}
			 else if(j<=i)
			{
				 printf("# ");
			}
			else
			{
				printf("* ");
			}

		}

		printf("\n");

	}
	printf("\n");


}

