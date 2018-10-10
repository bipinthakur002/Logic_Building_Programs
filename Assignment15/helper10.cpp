#include"Header.h"
void pattern10(int row, int col)
{
	int i = 0, j = 0;
	for (i = 1; i <= row; i++)
	{

		for (j = 1;j <= col;j++)
		{
			if ((j == 1) || (j == col) || (i == 1) || (i == row))
			{
				printf("$ ");
			}
			else
			{
				printf("# ");
			}
		}
			printf("\n");

	}
		printf("\n");
	

}

