#include"Header.h"
void pattern6(int row, int col)
{
	int i = 0, j = 0,icnt=0;
	if (row < 0)
	{
		row = -row;
	}
	if (col < 0)
	{
		col = -col;
	}

	for (i = 1; i <= row; i++)
	{
		icnt = 1;
		for (j = 1;j <= col;j++)
		{
			
			
			if (j % 2 != 0)
			{
				printf("%d ", icnt++);
			}
			else
			{
				printf("$ ");
			}
		
		}
		printf("\n");
	}
}