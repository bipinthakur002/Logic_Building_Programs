#include"Header.h"
void pattern7(int row, int col)
{
	int i = 0, j = 0;
	for (i = 1 ; i <= row ; i++)
	{
		if ((i % 2) == 0)
		{
			for (j = 1; j <= col; j++)
			{
				printf("# ");

			}
		}
		else if ((i % 2)!= 0)
		{
			for (j = 1; j <= col; j++)
			{
				printf("$ ");

			}
		}
		
		printf("\n");
	}
}